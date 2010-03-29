#include "bind.h"

Persistent<Context> AlutFactory::alut_persistent_context;

Handle<Value> GetALUT_API(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_API);
}

Handle<Value> GetALUT_APIENTRY(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_APIENTRY);
}

Handle<Value> GetALUT_ATTRIBUTE_DEPRECATED(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_ATTRIBUTE_DEPRECATED);
}

Handle<Value> GetALUT_API_MAJOR_VERSION(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_API_MAJOR_VERSION);
}

Handle<Value> GetALUT_API_MINOR_VERSION(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_API_MINOR_VERSION);
}

Handle<Value> GetALUT_ERROR_NO_ERROR(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_ERROR_NO_ERROR);
}

Handle<Value> GetALUT_ERROR_OUT_OF_MEMORY(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_ERROR_OUT_OF_MEMORY);
}

Handle<Value> GetALUT_ERROR_INVALID_ENUM(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_ERROR_INVALID_ENUM);
}

Handle<Value> GetALUT_ERROR_INVALID_VALUE(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_ERROR_INVALID_VALUE);
}

Handle<Value> GetALUT_ERROR_INVALID_OPERATION(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_ERROR_INVALID_OPERATION);
}

Handle<Value> GetALUT_ERROR_NO_CURRENT_CONTEXT(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_ERROR_NO_CURRENT_CONTEXT);
}

Handle<Value> GetALUT_ERROR_AL_ERROR_ON_ENTRY(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_ERROR_AL_ERROR_ON_ENTRY);
}

Handle<Value> GetALUT_ERROR_ALC_ERROR_ON_ENTRY(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_ERROR_ALC_ERROR_ON_ENTRY);
}

Handle<Value> GetALUT_ERROR_OPEN_DEVICE(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_ERROR_OPEN_DEVICE);
}

Handle<Value> GetALUT_ERROR_CLOSE_DEVICE(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_ERROR_CLOSE_DEVICE);
}

Handle<Value> GetALUT_ERROR_CREATE_CONTEXT(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_ERROR_CREATE_CONTEXT);
}

Handle<Value> GetALUT_ERROR_MAKE_CONTEXT_CURRENT(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_ERROR_MAKE_CONTEXT_CURRENT);
}

Handle<Value> GetALUT_ERROR_DESTROY_CONTEXT(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_ERROR_DESTROY_CONTEXT);
}

Handle<Value> GetALUT_ERROR_GEN_BUFFERS(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_ERROR_GEN_BUFFERS);
}

Handle<Value> GetALUT_ERROR_BUFFER_DATA(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_ERROR_BUFFER_DATA);
}

Handle<Value> GetALUT_ERROR_IO_ERROR(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_ERROR_IO_ERROR);
}

Handle<Value> GetALUT_ERROR_UNSUPPORTED_FILE_TYPE(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_ERROR_UNSUPPORTED_FILE_TYPE);
}

Handle<Value> GetALUT_ERROR_UNSUPPORTED_FILE_SUBTYPE(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_ERROR_UNSUPPORTED_FILE_SUBTYPE);
}

Handle<Value> GetALUT_ERROR_CORRUPT_OR_TRUNCATED_DATA(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_ERROR_CORRUPT_OR_TRUNCATED_DATA);
}

Handle<Value> GetALUT_WAVEFORM_SINE(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_WAVEFORM_SINE);
}

Handle<Value> GetALUT_WAVEFORM_SQUARE(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_WAVEFORM_SQUARE);
}

Handle<Value> GetALUT_WAVEFORM_SAWTOOTH(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_WAVEFORM_SAWTOOTH);
}

Handle<Value> GetALUT_WAVEFORM_WHITENOISE(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_WAVEFORM_WHITENOISE);
}

Handle<Value> GetALUT_WAVEFORM_IMPULSE(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_WAVEFORM_IMPULSE);
}

Handle<Value> GetALUT_LOADER_BUFFER(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_LOADER_BUFFER);
}

Handle<Value> GetALUT_LOADER_MEMORY(Local<String> property,
	const AccessorInfo &info) {
	return Uint32::New(ALUT_LOADER_MEMORY);
}

Handle<Value> ALUTInitCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 2)
		return v8::Undefined();
	
	//get arguments
	Handle<Array> arg0 = Array::Cast(args[0]);
	String::Utf8Value value1(args[1]);
	char* arg1 = *value1;

	//make call
	alutInit((int*)arg0, (char**)arg1);
	
	return v8::Undefined();
}

Handle<Value> ALUTInitWithoutContextCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 2)
		return v8::Undefined();
	
	//get arguments
	Handle<Array> arg0 = Array::Cast(args[0]);
	String::Utf8Value value1(args[1]);
	char* arg1 = *value1;

	//make call
	alutInitWithoutContext((int*)arg0, (char**)arg1);
	
	return v8::Undefined();
}

Handle<Value> ALUTExitCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 0)
		return v8::Undefined();
	
	//get arguments

	//make call
	alutExit();
	
	return v8::Undefined();
}

Handle<Value> ALUTGetErrorCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 0)
		return v8::Undefined();
	
	//get arguments

	//make call
	alutGetError();
	
	return v8::Undefined();
}

Handle<Value> ALUTGetErrorStringCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//get arguments
	int arg0 = args[0]->IntegerValue();

	//make call
	alutGetErrorString((ALenum)arg0);
	
	return v8::Undefined();
}

Handle<Value> ALUTCreateBufferFromFileCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//get arguments
	String::Utf8Value value0(args[0]);
	char* arg0 = *value0;

	//make call
	alutCreateBufferFromFile((const char*)arg0);
	
	return v8::Undefined();
}

Handle<Value> ALUTCreateBufferFromFileImageCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 2)
		return v8::Undefined();
	
	//get arguments
	String::Utf8Value value0(args[0]);
	char* key0 = *value0;
	void* arg0 = font_[key0];

	//make call
	alutCreateBufferFromFileImage((const ALvoid*)arg0, (ALsizei)arg1);
	
	return v8::Undefined();
}

Handle<Value> ALUTCreateBufferHelloWorldCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 0)
		return v8::Undefined();
	
	//get arguments

	//make call
	alutCreateBufferHelloWorld();
	
	return v8::Undefined();
}

Handle<Value> ALUTCreateBufferWaveformCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 4)
		return v8::Undefined();
	
	//get arguments
	int arg0 = args[0]->IntegerValue();
	double arg1 = args[1]->NumberValue();
	double arg2 = args[2]->NumberValue();
	double arg3 = args[3]->NumberValue();

	//make call
	alutCreateBufferWaveform((ALenum)arg0, (ALfloat)arg1, (ALfloat)arg2, (ALfloat)arg3);
	
	return v8::Undefined();
}

Handle<Value> ALUTLoadMemoryFromFileCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 4)
		return v8::Undefined();
	
	//get arguments
	String::Utf8Value value0(args[0]);
	char* arg0 = *value0;
	Handle<Array> arg1 = Array::Cast(args[1]);
	Handle<Array> arg2 = Array::Cast(args[2]);
	Handle<Array> arg3 = Array::Cast(args[3]);

	//make call
	alutLoadMemoryFromFile((const char*)arg0, (ALenum*)arg1, (ALsizei*)arg2, (ALfloat*)arg3);
	
	return v8::Undefined();
}

Handle<Value> ALUTLoadMemoryFromFileImageCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 5)
		return v8::Undefined();
	
	//get arguments
	String::Utf8Value value0(args[0]);
	char* key0 = *value0;
	void* arg0 = font_[key0];
	Handle<Array> arg2 = Array::Cast(args[2]);
	Handle<Array> arg3 = Array::Cast(args[3]);
	Handle<Array> arg4 = Array::Cast(args[4]);

	//make call
	alutLoadMemoryFromFileImage((const ALvoid*)arg0, (ALsizei)arg1, (ALenum*)arg2, (ALsizei*)arg3, (ALfloat*)arg4);
	
	return v8::Undefined();
}

Handle<Value> ALUTLoadMemoryHelloWorldCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 3)
		return v8::Undefined();
	
	//get arguments
	Handle<Array> arg0 = Array::Cast(args[0]);
	Handle<Array> arg1 = Array::Cast(args[1]);
	Handle<Array> arg2 = Array::Cast(args[2]);

	//make call
	alutLoadMemoryHelloWorld((ALenum*)arg0, (ALsizei*)arg1, (ALfloat*)arg2);
	
	return v8::Undefined();
}

Handle<Value> ALUTLoadMemoryWaveformCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 7)
		return v8::Undefined();
	
	//get arguments
	int arg0 = args[0]->IntegerValue();
	double arg1 = args[1]->NumberValue();
	double arg2 = args[2]->NumberValue();
	double arg3 = args[3]->NumberValue();
	Handle<Array> arg4 = Array::Cast(args[4]);
	Handle<Array> arg5 = Array::Cast(args[5]);
	Handle<Array> arg6 = Array::Cast(args[6]);

	//make call
	alutLoadMemoryWaveform((ALenum)arg0, (ALfloat)arg1, (ALfloat)arg2, (ALfloat)arg3, (ALenum*)arg4, (ALsizei*)arg5, (ALfloat*)arg6);
	
	return v8::Undefined();
}

Handle<Value> ALUTGetMIMETypesCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//get arguments
	int arg0 = args[0]->IntegerValue();

	//make call
	alutGetMIMETypes((ALenum)arg0);
	
	return v8::Undefined();
}

Handle<Value> ALUTGetMajorVersionCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 0)
		return v8::Undefined();
	
	//get arguments

	//make call
	alutGetMajorVersion();
	
	return v8::Undefined();
}

Handle<Value> ALUTGetMinorVersionCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 0)
		return v8::Undefined();
	
	//get arguments

	//make call
	alutGetMinorVersion();
	
	return v8::Undefined();
}

Handle<Value> ALUTSleepCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//get arguments
	double arg0 = args[0]->NumberValue();

	//make call
	alutSleep((ALfloat)arg0);
	
	return v8::Undefined();
}

Handle<Value> ALUTLoadWAVFileCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 5)
		return v8::Undefined();
	
	//get arguments
	Handle<Array> arg0 = Array::Cast(args[0]);
	Handle<Array> arg1 = Array::Cast(args[1]);
	String::Utf8Value value2(args[2]);
	char* key2 = *value2;
	void* arg2 = font_[key2];
	Handle<Array> arg3 = Array::Cast(args[3]);
	Handle<Array> arg4 = Array::Cast(args[4]);

	//make call
	alutLoadWAVFile((ALbyte*)arg0, (ALenum*)arg1, (void**)arg2, (ALsizei*)arg3, (ALsizei*)arg4);
	
	return v8::Undefined();
}

Handle<Value> ALUTLoadWAVMemoryCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 5)
		return v8::Undefined();
	
	//get arguments
	Handle<Array> arg0 = Array::Cast(args[0]);
	Handle<Array> arg1 = Array::Cast(args[1]);
	String::Utf8Value value2(args[2]);
	char* key2 = *value2;
	void* arg2 = font_[key2];
	Handle<Array> arg3 = Array::Cast(args[3]);
	Handle<Array> arg4 = Array::Cast(args[4]);

	//make call
	alutLoadWAVMemory((ALbyte*)arg0, (ALenum*)arg1, (void**)arg2, (ALsizei*)arg3, (ALsizei*)arg4);
	
	return v8::Undefined();
}

Handle<Value> ALUTLoadWAVFileCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 6)
		return v8::Undefined();
	
	//get arguments
	Handle<Array> arg0 = Array::Cast(args[0]);
	Handle<Array> arg1 = Array::Cast(args[1]);
	String::Utf8Value value2(args[2]);
	char* key2 = *value2;
	void* arg2 = font_[key2];
	Handle<Array> arg3 = Array::Cast(args[3]);
	Handle<Array> arg4 = Array::Cast(args[4]);
	Handle<Array> arg5 = Array::Cast(args[5]);

	//make call
	alutLoadWAVFile((ALbyte*)arg0, (ALenum*)arg1, (void**)arg2, (ALsizei*)arg3, (ALsizei*)arg4, (ALboolean*)arg5);
	
	return v8::Undefined();
}

Handle<Value> ALUTLoadWAVMemoryCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 6)
		return v8::Undefined();
	
	//get arguments
	Handle<Array> arg0 = Array::Cast(args[0]);
	Handle<Array> arg1 = Array::Cast(args[1]);
	String::Utf8Value value2(args[2]);
	char* key2 = *value2;
	void* arg2 = font_[key2];
	Handle<Array> arg3 = Array::Cast(args[3]);
	Handle<Array> arg4 = Array::Cast(args[4]);
	Handle<Array> arg5 = Array::Cast(args[5]);

	//make call
	alutLoadWAVMemory((ALbyte*)arg0, (ALenum*)arg1, (void**)arg2, (ALsizei*)arg3, (ALsizei*)arg4, (ALboolean*)arg5);
	
	return v8::Undefined();
}

Handle<Value> ALUTUnloadWAVCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 4)
		return v8::Undefined();
	
	//get arguments
	int arg0 = args[0]->IntegerValue();
	String::Utf8Value value1(args[1]);
	char* key1 = *value1;
	void* arg1 = font_[key1];

	//make call
	alutUnloadWAV((ALenum)arg0, (ALvoid*)arg1, (ALsizei)arg2, (ALsizei)arg3);
	
	return v8::Undefined();
}

Handle<ObjectTemplate> AlutFactory::createAlut(int* pargc, char** argv) {
	HandleScope handle_scope;
	Handle<ObjectTemplate> Alut = ObjectTemplate::New();

	Alut->SetInternalFieldCount(1);

	Alut->SetAccessor(String::NewSymbol("API"), GetALUT_API);
	Alut->SetAccessor(String::NewSymbol("APIENTRY"), GetALUT_APIENTRY);
	Alut->SetAccessor(String::NewSymbol("ATTRIBUTE_DEPRECATED"), GetALUT_ATTRIBUTE_DEPRECATED);
	Alut->SetAccessor(String::NewSymbol("API_MAJOR_VERSION"), GetALUT_API_MAJOR_VERSION);
	Alut->SetAccessor(String::NewSymbol("API_MINOR_VERSION"), GetALUT_API_MINOR_VERSION);
	Alut->SetAccessor(String::NewSymbol("ERROR_NO_ERROR"), GetALUT_ERROR_NO_ERROR);
	Alut->SetAccessor(String::NewSymbol("ERROR_OUT_OF_MEMORY"), GetALUT_ERROR_OUT_OF_MEMORY);
	Alut->SetAccessor(String::NewSymbol("ERROR_INVALID_ENUM"), GetALUT_ERROR_INVALID_ENUM);
	Alut->SetAccessor(String::NewSymbol("ERROR_INVALID_VALUE"), GetALUT_ERROR_INVALID_VALUE);
	Alut->SetAccessor(String::NewSymbol("ERROR_INVALID_OPERATION"), GetALUT_ERROR_INVALID_OPERATION);
	Alut->SetAccessor(String::NewSymbol("ERROR_NO_CURRENT_CONTEXT"), GetALUT_ERROR_NO_CURRENT_CONTEXT);
	Alut->SetAccessor(String::NewSymbol("ERROR_AL_ERROR_ON_ENTRY"), GetALUT_ERROR_AL_ERROR_ON_ENTRY);
	Alut->SetAccessor(String::NewSymbol("ERROR_ALC_ERROR_ON_ENTRY"), GetALUT_ERROR_ALC_ERROR_ON_ENTRY);
	Alut->SetAccessor(String::NewSymbol("ERROR_OPEN_DEVICE"), GetALUT_ERROR_OPEN_DEVICE);
	Alut->SetAccessor(String::NewSymbol("ERROR_CLOSE_DEVICE"), GetALUT_ERROR_CLOSE_DEVICE);
	Alut->SetAccessor(String::NewSymbol("ERROR_CREATE_CONTEXT"), GetALUT_ERROR_CREATE_CONTEXT);
	Alut->SetAccessor(String::NewSymbol("ERROR_MAKE_CONTEXT_CURRENT"), GetALUT_ERROR_MAKE_CONTEXT_CURRENT);
	Alut->SetAccessor(String::NewSymbol("ERROR_DESTROY_CONTEXT"), GetALUT_ERROR_DESTROY_CONTEXT);
	Alut->SetAccessor(String::NewSymbol("ERROR_GEN_BUFFERS"), GetALUT_ERROR_GEN_BUFFERS);
	Alut->SetAccessor(String::NewSymbol("ERROR_BUFFER_DATA"), GetALUT_ERROR_BUFFER_DATA);
	Alut->SetAccessor(String::NewSymbol("ERROR_IO_ERROR"), GetALUT_ERROR_IO_ERROR);
	Alut->SetAccessor(String::NewSymbol("ERROR_UNSUPPORTED_FILE_TYPE"), GetALUT_ERROR_UNSUPPORTED_FILE_TYPE);
	Alut->SetAccessor(String::NewSymbol("ERROR_UNSUPPORTED_FILE_SUBTYPE"), GetALUT_ERROR_UNSUPPORTED_FILE_SUBTYPE);
	Alut->SetAccessor(String::NewSymbol("ERROR_CORRUPT_OR_TRUNCATED_DATA"), GetALUT_ERROR_CORRUPT_OR_TRUNCATED_DATA);
	Alut->SetAccessor(String::NewSymbol("WAVEFORM_SINE"), GetALUT_WAVEFORM_SINE);
	Alut->SetAccessor(String::NewSymbol("WAVEFORM_SQUARE"), GetALUT_WAVEFORM_SQUARE);
	Alut->SetAccessor(String::NewSymbol("WAVEFORM_SAWTOOTH"), GetALUT_WAVEFORM_SAWTOOTH);
	Alut->SetAccessor(String::NewSymbol("WAVEFORM_WHITENOISE"), GetALUT_WAVEFORM_WHITENOISE);
	Alut->SetAccessor(String::NewSymbol("WAVEFORM_IMPULSE"), GetALUT_WAVEFORM_IMPULSE);
	Alut->SetAccessor(String::NewSymbol("LOADER_BUFFER"), GetALUT_LOADER_BUFFER);
	Alut->SetAccessor(String::NewSymbol("LOADER_MEMORY"), GetALUT_LOADER_MEMORY);

	Alut->Set(String::NewSymbol("init"), FunctionTemplate::New(ALUTInitCallback));
	Alut->Set(String::NewSymbol("initWithoutContext"), FunctionTemplate::New(ALUTInitWithoutContextCallback));
	Alut->Set(String::NewSymbol("exit"), FunctionTemplate::New(ALUTExitCallback));
	Alut->Set(String::NewSymbol("getError"), FunctionTemplate::New(ALUTGetErrorCallback));
	Alut->Set(String::NewSymbol("getErrorString"), FunctionTemplate::New(ALUTGetErrorStringCallback));
	Alut->Set(String::NewSymbol("createBufferFromFile"), FunctionTemplate::New(ALUTCreateBufferFromFileCallback));
	Alut->Set(String::NewSymbol("createBufferFromFileImage"), FunctionTemplate::New(ALUTCreateBufferFromFileImageCallback));
	Alut->Set(String::NewSymbol("createBufferHelloWorld"), FunctionTemplate::New(ALUTCreateBufferHelloWorldCallback));
	Alut->Set(String::NewSymbol("createBufferWaveform"), FunctionTemplate::New(ALUTCreateBufferWaveformCallback));
	Alut->Set(String::NewSymbol("loadMemoryFromFile"), FunctionTemplate::New(ALUTLoadMemoryFromFileCallback));
	Alut->Set(String::NewSymbol("loadMemoryFromFileImage"), FunctionTemplate::New(ALUTLoadMemoryFromFileImageCallback));
	Alut->Set(String::NewSymbol("loadMemoryHelloWorld"), FunctionTemplate::New(ALUTLoadMemoryHelloWorldCallback));
	Alut->Set(String::NewSymbol("loadMemoryWaveform"), FunctionTemplate::New(ALUTLoadMemoryWaveformCallback));
	Alut->Set(String::NewSymbol("getMIMETypes"), FunctionTemplate::New(ALUTGetMIMETypesCallback));
	Alut->Set(String::NewSymbol("getMajorVersion"), FunctionTemplate::New(ALUTGetMajorVersionCallback));
	Alut->Set(String::NewSymbol("getMinorVersion"), FunctionTemplate::New(ALUTGetMinorVersionCallback));
	Alut->Set(String::NewSymbol("sleep"), FunctionTemplate::New(ALUTSleepCallback));
	Alut->Set(String::NewSymbol("loadWAVFile"), FunctionTemplate::New(ALUTLoadWAVFileCallback));
	Alut->Set(String::NewSymbol("loadWAVMemory"), FunctionTemplate::New(ALUTLoadWAVMemoryCallback));
	Alut->Set(String::NewSymbol("loadWAVFile"), FunctionTemplate::New(ALUTLoadWAVFileCallback));
	Alut->Set(String::NewSymbol("loadWAVMemory"), FunctionTemplate::New(ALUTLoadWAVMemoryCallback));
	Alut->Set(String::NewSymbol("unloadWAV"), FunctionTemplate::New(ALUTUnloadWAVCallback));

	// Again, return the result through the current handle scope.
	return handle_scope.Close(Alut);
}	
