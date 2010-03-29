/*
 * jsgame.cpp
 *
 */

#include "jsgame.h"
#include <stdio.h>
#include <string>
#include <string.h>

Persistent<Context> JSGame::context;

//UTILITY FUNCTIONS
// Reads a file into a v8 string.
Handle<String> ReadFile(const string& name) {
	FILE* file = fopen(name.c_str(), "rb");
	
	if (file == NULL)
		return Handle<String>();

	fseek(file, 0, SEEK_END);
	int size = ftell(file);
	rewind(file);

	char* chars = new char[size + 1];
	chars[size] = '\0';
	
	for (int i = 0; i < size;) {
		int read = fread(&chars[i], 1, size - i, file);
		i += read;
	}
	
	fclose(file);
	Handle<String> result = String::New(chars, size);
	delete[] chars;
	
	return result;
}

bool exec(string file) {
	HandleScope handle_scope;
	Handle<String> source = ReadFile(file);

	if (source.IsEmpty()) {
		fprintf(stderr, "Error reading '%s'.\n", file.c_str());
		
		return false;
	}

	// We're just about to compile the script; set up an error handler to
	// catch any exceptions the script might throw.
	TryCatch try_catch;

	// Compile the script and check for errors.
	Handle<Script> compiled_script = Script::Compile(source);
	if (compiled_script.IsEmpty()) {
		String::Utf8Value error(try_catch.Exception());
		Handle<v8::Message> message(try_catch.Message());
		printf("%s on line %i\n\n", *error, message->GetLineNumber());
		
		// The script failed to compile; bail out.
		return false;
	}

	// Run the script!
	Handle<Value> result = compiled_script->Run();
	if (result.IsEmpty()) {
		// The TryCatch above is still in effect and will have caught the error.
		String::Utf8Value error(try_catch.Exception());
		printf("%s \n\n", *error);
		
		// Running the script failed; bail out.
		return false;
	}
	
	return true;
}

//FUNCTIONS IN GLOBAL SCOPE

//prints a string to stdout
Handle<Value> log(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//define handle scope
	HandleScope scope;
	
	//get arguments
	String::Utf8Value value0(args[0]);
	char* arg0 = *value0;

	//make call
	fprintf(stdout, "%s", arg0);
	
	return v8::Undefined();
}

//loads a js file
Handle<Value> load(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	int len = args.Length();
	int i;

	if (len < 1)
		return v8::Undefined();
	
	//define handle scope
	HandleScope scope;

	// Enter the new context so all the following operations take place
	// within it.
	Context::Scope context_scope(JSGame::context);

	for (i = 0; i < len; ++i) {
		//get argument
		String::Utf8Value value0(args[i]);
		char* arg0 = *value0;
		string str(JSGameUtils::getRealPath(arg0));
		
		if(!exec(str)) {
			fprintf(stderr, "Error reading '%s'.\n", arg0);
			return v8::Undefined();
		}
	}

	return v8::Undefined();
}

bool JSGame::executeScript(string file) {
	return exec(file);
}

bool JSGame::initialize(int* pargc, char** argv, string scriptname) {
	// Create a handle scope to hold the temporary references.
	HandleScope handle_scope;

	// Create a template for the global object where we set the
	// built-in global functions.
	Handle<ObjectTemplate> global = ObjectTemplate::New();

	// Each processor gets its own context so different processors
	// don't affect each other.
	Handle<ObjectTemplate> Gl = GlFactory::createGl();
	Handle<ObjectTemplate> Gles = GlesFactory::createGles();

	//Set global objects and functions.
	global->Set(String::New("Gl"), Gl);
	global->Set(String::New("Gles"), Gles);
	global->Set(String::New("Glu"), createGlu());
	global->Set(String::New("Glut"), GlutFactory::createGlut(pargc, argv));
	global->Set(String::New("Al"), AlFactory::createAl(pargc, argv));
	global->Set(String::New("Alut"), AlutFactory::createAlut(pargc, argv));
	global->Set(String::New("log"), FunctionTemplate::New(log));
	global->Set(String::New("load"), FunctionTemplate::New(load));

	Handle<Context> context = Context::New(NULL, global);

	//TODO(nico): should find another way to set the right context when calling a func.
	JSGame::context = Persistent<Context>::New(context);
	GlutFactory::glut_persistent_context = JSGame::context;
	GlesFactory::gles_persistent_context = JSGame::context;

	// Enter the new context so all the following operations take place
	// within it.
	Context::Scope context_scope(context);

	//Append *this* as Gl static variable so we can do dot-this-dot-that stuff
	GlFactory::self_ = Persistent<Object>::New(Gl->NewInstance());
	GlesFactory::self_ = Persistent<Object>::New(Gles->NewInstance());

	//Set (only once) the absolute path for the .js file being executed.
	JSGameUtils::setRootPath(argv[0], argv[1]);

	// Compile and run the script
	if (!executeScript(scriptname))
		return false;

	return true;
}