import sys
import re
import sys, os

MIXED = "Alut"
UPPER = MIXED.upper()
LOWER = MIXED.lower()

PATH = os.path.dirname(sys.argv[0])
HEAD = PATH+'/'+LOWER+'.h'
BIND = PATH+'/bind.cpp'

def main():
	constants = []
	functions = []
	
	constant = re.compile(".+define[\s]+"+UPPER+"_([^\s]+).*")
	function = re.compile("[\s]*"+UPPER+"_API[\s]+([^\s]+).*"+UPPER+"_APIENTRY[\s]+"+LOWER+"([A-Za-z0-9]+)[\s]*\((.*)\);")
	
	text_out = []
	
	fin = open(HEAD, 'r')
	for l in fin:
		mat = re.match(constant, l)
		if mat and not mat.group(1) in constants:
			name = mat.group(1)
			constants.append(name)
			text_out.append(make_constant(UPPER, name))
			
		else:
			mat = re.match(function, l)
			if mat:
				prefix = LOWER
				return_val = mat.group(1)
				name = mat.group(2)
				params = mat.group(3)
				functions.append(name)
				has_lambda, count, params_list = get_param_list(params)
				if has_lambda is True and count == 1:
					text_out.append(make_function_with_callback(prefix, name, params_list, return_val))
				else:
					text_out.append(make_function(prefix, name, params_list, count, return_val))
					
	fin.close()
	fout = open(BIND, 'w')
	fout.write("""#include "bind.h"

Persistent<Context> """+MIXED+"""Factory::"""+LOWER+"""_persistent_context;
""" + '\n'.join(text_out) + make_main_function(constants, functions))
	
	fout.close()

def make_main_function(constants, functions):
	text_out_begin = """

Handle<ObjectTemplate> """+MIXED+"""Factory::create"""+MIXED+"""(int* pargc, char** argv) {
	HandleScope handle_scope;
	Handle<ObjectTemplate> """+MIXED+""" = ObjectTemplate::New();

	"""+MIXED+"""->SetInternalFieldCount(1);

"""

	text_out_end = """

	// Again, return the result through the current handle scope.
	return handle_scope.Close("""+MIXED+""");
}	
"""
	cts = [bind_accessor(MIXED, name) for name in constants]
	fts = [bind_function(MIXED, name) for name in functions]
	
	return text_out_begin + '\n'.join(cts) + '\n\n' + '\n'.join(fts) + text_out_end
	

def make_constant(prefix, name):
	return_val = "return Uint32::New("+UPPER+"_"+ name +");"
	
	text_out = """
Handle<Value> Get"""+UPPER+"""_%%(Local<String> property,
	const AccessorInfo &info) {
	##
}"""
	return multiple_replace({
		'%%': name,
		'##': return_val
	}, text_out)



def make_function(prefix, name, params_list, count, return_val):
	text_out = """
Handle<Value> """+UPPER+"""<name>Callback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < <len_params>)
		return v8::Undefined();
	
	//get arguments
<args>
	//make call
	<call>
	
	return v8::Undefined();
}"""
	return multiple_replace({
		'<name>': name,
		'<len_params>': str(count),
		'<args>': make_args(params_list, count),
		'<call>': make_call(prefix + name, params_list, count)	  
	}, text_out)


def make_function_with_callback(prefix, name, params_list, return_val):	
	
	text_out = """
Persistent<Function> persistent<name>;

<prototype> {
	//define handle scope
	HandleScope scope;

	Handle<Value> valueArr[<nformalparams>];
	<formalparamassignment>

	TryCatch try_catch;
	Handle<Value> result = persistent<name>->Call("""+MIXED+"""Factory::"""+LOWER+"""_persistent_context->Global(), <nformalparams>, valueArr);
	if (result.IsEmpty()) {
		String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in <name>: %s\\n", *error);
	}
}

Handle<Value> """+UPPER+"""<name>Callback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1 || !args[0]->IsFunction())
		return v8::Undefined();
	
	//get arguments
	//delete previous assigned function
	persistent<name>.Dispose();
	Handle<Function> value0 = Handle<Function>::Cast(args[0]);
	persistent<name> = Persistent<Function>::New(value0);

	//make call
	"""+LOWER+"""<name>((<signature>) func<name>);
	
	return v8::Undefined();
}"""
	nformalparams, prototype = make_prototype(name, params_list[0])
	signature = params_list[0].replace('func', '')
	formalparamassignment = formal_param_assignment(signature)
	 
	return multiple_replace({
		'<name>': name,
		'<nformalparams>': str(nformalparams),
		'<prototype>': prototype,
		'<formalparamassignment>': formalparamassignment,
		'<signature>': signature	  
	}, text_out)

def make_prototype(name, signature):
	print 'prev ' + signature
	signature = signature.replace('(*func)', 'func' + name)
	ht = signature.split('(')
	hd, tail = ht[0], ht[1].replace(')', '')
	ans = [get_type(''.join(val), False) + ' arg' + str(i) for i, val in enumerate(tail.split(',')) if val.find('void') == -1]
	#.strip().split(' ')[:-1]
	print 'end ' + hd + ' ( ' + ','.join(ans) + ')'
	return len(ans), hd + ' ( ' + ','.join(ans) + ')'

def formal_param_assignment(signature):
	print "signature"
	print signature
	pat = re.compile('[\s]*[a-zA-Z0-9\*]+[\s]*\(\*[\s]*\)\((.*)\)')
	pars = re.match(pat, signature)
	if pars:
		pars = pars.group(1).split(',')
		ans = []
		for i, val in enumerate(pars):
			if val.find('int') != -1 or val.find('unsigned char') != -1:
				ans.append("  valueArr[" + str(i) + "] = Integer::New(arg" + str(i) + ");")
			elif val.find('float') != -1 or val.find('double') != -1:
				ans.append("  valueArr[" + str(i) + "] = Number::New(arg" + str(i) + ");")
			elif val.find('char*') != -1:
				ans.append("  valueArr[" + str(i) + "] = String::New(arg" + str(i) + ");")
		return '\n'.join(ans)
	else:
		return ''	

def get_param_list(params):
	params_list = []
	params_aux = params.split(',')
	passed = False
	for par in params_aux:
		if passed and params_list[-1].count('(') != params_list[-1].count(')'):
			params_list[-1] += ',' + par
		else:
			params_list.append(par)
		passed = True
	
	aux = len(params_list)
	if aux == 1 and params_list[0].find('func') == -1 and len(params_list[0].strip().split(' ')) == 1: 
		nb = 0
	else:
		nb = aux
	return ' '.join(params_list).find('func') != -1, nb, params_list
	

def make_args(params_list, count):
	ans = []
	for i in range(count):
		el = params_list[i]
		type = get_type(el)
		
		#is function
		if type.find('(*') != -1:
			ans.append("	Handle<Function> value" + str(i) + " = Handle<Function>::Cast(args[" + str(i) + "]);\n	void* arg" + str(i) + " = *value" + str(i) + ";\n")
			#print "function " + type
		#is string
		elif type.find('char*') != -1:
			ans.append("	String::Utf8Value value"+ str(i) +"(args["+ str(i) +"]);\n	char* arg" + str(i) + " = *value"+ str(i) +";\n")
			#print "string " + type
		#is void*
		elif type.find('void*') != -1:
			ans.append("	String::Utf8Value value"+ str(i) +"(args["+ str(i) +"]);\n	char* key" + str(i) + " = *value"+ str(i) +";\n	void* arg" + str(i) + " = font_[key"+ str(i) +"];\n")
			#print "void " + type
		#is array
		elif type.find('*') != -1:
			ans.append("	Handle<Array> arg" + str(i) + " = Array::Cast(args[" + str(i) + "]);\n")
			#print "array " + type
		#is unsigned integer
		elif type.find('unsigned int') != -1:
			ans.append("	unsigned int arg" + str(i) + " = args["+ str(i) +"]->Uint32Value();\n")
			#print "unsigned int " + type
		#is integer
		elif type.find('int') != -1 or type.find('enum') != -1:
			ans.append("	int arg" + str(i) + " = args["+ str(i) +"]->IntegerValue();\n")
			#print "integer " + type
		#is double, float
		elif type.find('double') != -1 or type.find('float') != -1:
			ans.append("	double arg" + str(i) + " = args["+ str(i) +"]->NumberValue();\n")
			#print "double " + type
		else:
			print "don't know what this is "
			print type
	
	return ''.join(ans)

def make_call(name, params_list, nb):
	return name + "(" + ", ".join([get_type(params_list[i]) + "arg" + str(i) for i in range(nb)]) + ");"
			
def bind_accessor(prefix, name):
	return "	" + prefix + "->SetAccessor(String::NewSymbol(\"" + name + "\"), Get"+UPPER+"_" + name + ");"

def bind_function(prefix, name):
	return "	" + prefix + "->Set(String::NewSymbol(\"" + name[0].lower() + name[1:] + "\"), FunctionTemplate::New(" + UPPER + name + "Callback));"

def get_type(t, parens=True):
	if t.find('(*') != -1 or t.find('func') != -1: 
		ans = t.replace('func', '')
	else:
		ans = ' '.join(t.strip().split(' ')[:-1]) + '*' * (t.strip().split(' ')[-1].count('*'))
	return '(' + ans + ')' if parens else ans

def multiple_replace(dict, text): 
  """ Replace in 'text' all occurences of any key in the given
  dictionary by its corresponding value.  Returns the new tring.""" 

  # Create a regular expression  from the dictionary keys
  regex = re.compile("(%s)" % "|".join(map(re.escape, dict.keys())))

  # For each match, look-up corresponding value in dictionary
  return regex.sub(lambda mo: dict[mo.string[mo.start():mo.end()]], text) 

main()  
