#include "bind.h"

Persistent<Context> AlFactory::al_persistent_context;

Handle<Value> GetAL_INVALID(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_INVALID);
}

Handle<Value> GetAL_ILLEGAL_ENUM(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_ILLEGAL_ENUM);
}

Handle<Value> GetAL_ILLEGAL_COMMAND(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_ILLEGAL_COMMAND);
}

Handle<Value> GetAL_NONE(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_NONE);
}

Handle<Value> GetAL_FALSE(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_FALSE);
}

Handle<Value> GetAL_TRUE(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_TRUE);
}

Handle<Value> GetAL_SOURCE_RELATIVE(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_SOURCE_RELATIVE);
}

Handle<Value> GetAL_CONE_INNER_ANGLE(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_CONE_INNER_ANGLE);
}

Handle<Value> GetAL_CONE_OUTER_ANGLE(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_CONE_OUTER_ANGLE);
}

Handle<Value> GetAL_PITCH(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_PITCH);
}

Handle<Value> GetAL_POSITION(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_POSITION);
}

Handle<Value> GetAL_DIRECTION(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_DIRECTION);
}

Handle<Value> GetAL_VELOCITY(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_VELOCITY);
}

Handle<Value> GetAL_LOOPING(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_LOOPING);
}

Handle<Value> GetAL_BUFFER(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_BUFFER);
}

Handle<Value> GetAL_GAIN(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_GAIN);
}

Handle<Value> GetAL_MIN_GAIN(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_MIN_GAIN);
}

Handle<Value> GetAL_MAX_GAIN(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_MAX_GAIN);
}

Handle<Value> GetAL_ORIENTATION(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_ORIENTATION);
}

Handle<Value> GetAL_SOURCE_STATE(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_SOURCE_STATE);
}

Handle<Value> GetAL_INITIAL(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_INITIAL);
}

Handle<Value> GetAL_PLAYING(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_PLAYING);
}

Handle<Value> GetAL_PAUSED(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_PAUSED);
}

Handle<Value> GetAL_STOPPED(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_STOPPED);
}

Handle<Value> GetAL_BUFFERS_QUEUED(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_BUFFERS_QUEUED);
}

Handle<Value> GetAL_BUFFERS_PROCESSED(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_BUFFERS_PROCESSED);
}

Handle<Value> GetAL_SEC_OFFSET(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_SEC_OFFSET);
}

Handle<Value> GetAL_SAMPLE_OFFSET(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_SAMPLE_OFFSET);
}

Handle<Value> GetAL_BYTE_OFFSET(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_BYTE_OFFSET);
}

Handle<Value> GetAL_SOURCE_TYPE(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_SOURCE_TYPE);
}

Handle<Value> GetAL_STATIC(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_STATIC);
}

Handle<Value> GetAL_STREAMING(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_STREAMING);
}

Handle<Value> GetAL_UNDETERMINED(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_UNDETERMINED);
}

Handle<Value> GetAL_FORMAT_MONO8(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_FORMAT_MONO8);
}

Handle<Value> GetAL_FORMAT_MONO16(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_FORMAT_MONO16);
}

Handle<Value> GetAL_FORMAT_STEREO8(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_FORMAT_STEREO8);
}

Handle<Value> GetAL_FORMAT_STEREO16(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_FORMAT_STEREO16);
}

Handle<Value> GetAL_REFERENCE_DISTANCE(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_REFERENCE_DISTANCE);
}

Handle<Value> GetAL_ROLLOFF_FACTOR(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_ROLLOFF_FACTOR);
}

Handle<Value> GetAL_CONE_OUTER_GAIN(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_CONE_OUTER_GAIN);
}

Handle<Value> GetAL_MAX_DISTANCE(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_MAX_DISTANCE);
}

Handle<Value> GetAL_FREQUENCY(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_FREQUENCY);
}

Handle<Value> GetAL_BITS(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_BITS);
}

Handle<Value> GetAL_CHANNELS(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_CHANNELS);
}

Handle<Value> GetAL_SIZE(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_SIZE);
}

Handle<Value> GetAL_UNUSED(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_UNUSED);
}

Handle<Value> GetAL_PENDING(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_PENDING);
}

Handle<Value> GetAL_PROCESSED(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_PROCESSED);
}

Handle<Value> GetAL_NO_ERROR(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_NO_ERROR);
}

Handle<Value> GetAL_INVALID_NAME(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_INVALID_NAME);
}

Handle<Value> GetAL_INVALID_ENUM(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_INVALID_ENUM);
}

Handle<Value> GetAL_INVALID_VALUE(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_INVALID_VALUE);
}

Handle<Value> GetAL_INVALID_OPERATION(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_INVALID_OPERATION);
}

Handle<Value> GetAL_OUT_OF_MEMORY(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_OUT_OF_MEMORY);
}

Handle<Value> GetAL_VENDOR(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_VENDOR);
}

Handle<Value> GetAL_VERSION(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_VERSION);
}

Handle<Value> GetAL_RENDERER(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_RENDERER);
}

Handle<Value> GetAL_EXTENSIONS(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_EXTENSIONS);
}

Handle<Value> GetAL_DOPPLER_FACTOR(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_DOPPLER_FACTOR);
}

Handle<Value> GetAL_DOPPLER_VELOCITY(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_DOPPLER_VELOCITY);
}

Handle<Value> GetAL_SPEED_OF_SOUND(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_SPEED_OF_SOUND);
}

Handle<Value> GetAL_DISTANCE_MODEL(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_DISTANCE_MODEL);
}

Handle<Value> GetAL_INVERSE_DISTANCE(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_INVERSE_DISTANCE);
}

Handle<Value> GetAL_INVERSE_DISTANCE_CLAMPED(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_INVERSE_DISTANCE_CLAMPED);
}

Handle<Value> GetAL_LINEAR_DISTANCE(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_LINEAR_DISTANCE);
}

Handle<Value> GetAL_LINEAR_DISTANCE_CLAMPED(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_LINEAR_DISTANCE_CLAMPED);
}

Handle<Value> GetAL_EXPONENT_DISTANCE(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_EXPONENT_DISTANCE);
}

Handle<Value> GetAL_EXPONENT_DISTANCE_CLAMPED(Local<String> property, const AccessorInfo &info) {
	return Uint32::New(AL_EXPONENT_DISTANCE_CLAMPED);
}

Handle<Value> ALEnableCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//get arguments
	int arg0 = args[0]->IntegerValue();

	//make call
	alEnable((ALenum)arg0);
	
	return v8::Undefined();
}

Handle<Value> ALDisableCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//get arguments
	int arg0 = args[0]->IntegerValue();

	//make call
	alDisable((ALenum)arg0);
	
	return v8::Undefined();
}

Handle<Value> ALIsEnabledCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//get arguments
	int arg0 = args[0]->IntegerValue();

	//make call
	alIsEnabled((ALenum)arg0);
	
	return v8::Undefined();
}

Handle<Value> ALGetBooleanCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//get arguments
	int arg0 = args[0]->IntegerValue();

	//make call
	alGetBoolean((ALenum)arg0);
	
	return v8::Undefined();
}

Handle<Value> ALGetIntegerCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//get arguments
	int arg0 = args[0]->IntegerValue();

	//make call
	alGetInteger((ALenum)arg0);
	
	return v8::Undefined();
}

Handle<Value> ALGetFloatCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//get arguments
	int arg0 = args[0]->IntegerValue();

	//make call
	alGetFloat((ALenum)arg0);
	
	return v8::Undefined();
}

Handle<Value> ALGetDoubleCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//get arguments
	int arg0 = args[0]->IntegerValue();

	//make call
	alGetDouble((ALenum)arg0);
	
	return v8::Undefined();
}

Handle<Value> ALGetErrorCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 0)
		return v8::Undefined();
	
	//get arguments

	//make call
	alGetError();
	
	return v8::Undefined();
}

Handle<Value> ALIsSourceCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//get arguments
	int arg0 = args[0]->IntegerValue();

	//make call
	alIsSource((ALuint)arg0);
	
	return v8::Undefined();
}

Handle<Value> ALSourcePlayCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//get arguments
	int arg0 = args[0]->IntegerValue();

	//make call
	alSourcePlay((ALuint)arg0);
	
	return v8::Undefined();
}

Handle<Value> ALSourceStopCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//get arguments
	int arg0 = args[0]->IntegerValue();

	//make call
	alSourceStop((ALuint)arg0);
	
	return v8::Undefined();
}

Handle<Value> ALSourceRewindCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//get arguments
	int arg0 = args[0]->IntegerValue();

	//make call
	alSourceRewind((ALuint)arg0);
	
	return v8::Undefined();
}

Handle<Value> ALSourcePauseCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//get arguments
	int arg0 = args[0]->IntegerValue();

	//make call
	alSourcePause((ALuint)arg0);
	
	return v8::Undefined();
}

Handle<Value> ALIsBufferCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//get arguments
	int arg0 = args[0]->IntegerValue();

	//make call
	alIsBuffer((ALuint)arg0);
	
	return v8::Undefined();
}

Handle<Value> ALDopplerFactorCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//get arguments
	double arg0 = args[0]->NumberValue();

	//make call
	alDopplerFactor((ALfloat)arg0);
	
	return v8::Undefined();
}

Handle<Value> ALDopplerVelocityCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//get arguments
	double arg0 = args[0]->NumberValue();

	//make call
	alDopplerVelocity((ALfloat)arg0);
	
	return v8::Undefined();
}

Handle<Value> ALSpeedOfSoundCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//get arguments
	double arg0 = args[0]->NumberValue();

	//make call
	alSpeedOfSound((ALfloat)arg0);
	
	return v8::Undefined();
}

Handle<Value> ALDistanceModelCallback(const Arguments& args) {
	//if less that nbr of formal parameters then do nothing
	if (args.Length() < 1)
		return v8::Undefined();
	
	//get arguments
	int arg0 = args[0]->IntegerValue();

	//make call
	alDistanceModel((ALenum)arg0);
	
	return v8::Undefined();
}

Handle<ObjectTemplate> AlFactory::createAl(int* pargc, char** argv) {
	HandleScope handle_scope;
	Handle<ObjectTemplate> Al = ObjectTemplate::New();

	Al->SetInternalFieldCount(1);

	Al->SetAccessor(String::NewSymbol("INVALID"), GetAL_INVALID);
	Al->SetAccessor(String::NewSymbol("ILLEGAL_ENUM"), GetAL_ILLEGAL_ENUM);
	Al->SetAccessor(String::NewSymbol("ILLEGAL_COMMAND"), GetAL_ILLEGAL_COMMAND);
	Al->SetAccessor(String::NewSymbol("NONE"), GetAL_NONE);
	Al->SetAccessor(String::NewSymbol("FALSE"), GetAL_FALSE);
	Al->SetAccessor(String::NewSymbol("TRUE"), GetAL_TRUE);
	Al->SetAccessor(String::NewSymbol("SOURCE_RELATIVE"), GetAL_SOURCE_RELATIVE);
	Al->SetAccessor(String::NewSymbol("CONE_INNER_ANGLE"), GetAL_CONE_INNER_ANGLE);
	Al->SetAccessor(String::NewSymbol("CONE_OUTER_ANGLE"), GetAL_CONE_OUTER_ANGLE);
	Al->SetAccessor(String::NewSymbol("PITCH"), GetAL_PITCH);
	Al->SetAccessor(String::NewSymbol("POSITION"), GetAL_POSITION);
	Al->SetAccessor(String::NewSymbol("DIRECTION"), GetAL_DIRECTION);
	Al->SetAccessor(String::NewSymbol("VELOCITY"), GetAL_VELOCITY);
	Al->SetAccessor(String::NewSymbol("LOOPING"), GetAL_LOOPING);
	Al->SetAccessor(String::NewSymbol("BUFFER"), GetAL_BUFFER);
	Al->SetAccessor(String::NewSymbol("GAIN"), GetAL_GAIN);
	Al->SetAccessor(String::NewSymbol("MIN_GAIN"), GetAL_MIN_GAIN);
	Al->SetAccessor(String::NewSymbol("MAX_GAIN"), GetAL_MAX_GAIN);
	Al->SetAccessor(String::NewSymbol("ORIENTATION"), GetAL_ORIENTATION);
	Al->SetAccessor(String::NewSymbol("SOURCE_STATE"), GetAL_SOURCE_STATE);
	Al->SetAccessor(String::NewSymbol("INITIAL"), GetAL_INITIAL);
	Al->SetAccessor(String::NewSymbol("PLAYING"), GetAL_PLAYING);
	Al->SetAccessor(String::NewSymbol("PAUSED"), GetAL_PAUSED);
	Al->SetAccessor(String::NewSymbol("STOPPED"), GetAL_STOPPED);
	Al->SetAccessor(String::NewSymbol("BUFFERS_QUEUED"), GetAL_BUFFERS_QUEUED);
	Al->SetAccessor(String::NewSymbol("BUFFERS_PROCESSED"), GetAL_BUFFERS_PROCESSED);
	Al->SetAccessor(String::NewSymbol("SEC_OFFSET"), GetAL_SEC_OFFSET);
	Al->SetAccessor(String::NewSymbol("SAMPLE_OFFSET"), GetAL_SAMPLE_OFFSET);
	Al->SetAccessor(String::NewSymbol("BYTE_OFFSET"), GetAL_BYTE_OFFSET);
	Al->SetAccessor(String::NewSymbol("SOURCE_TYPE"), GetAL_SOURCE_TYPE);
	Al->SetAccessor(String::NewSymbol("STATIC"), GetAL_STATIC);
	Al->SetAccessor(String::NewSymbol("STREAMING"), GetAL_STREAMING);
	Al->SetAccessor(String::NewSymbol("UNDETERMINED"), GetAL_UNDETERMINED);
	Al->SetAccessor(String::NewSymbol("FORMAT_MONO8"), GetAL_FORMAT_MONO8);
	Al->SetAccessor(String::NewSymbol("FORMAT_MONO16"), GetAL_FORMAT_MONO16);
	Al->SetAccessor(String::NewSymbol("FORMAT_STEREO8"), GetAL_FORMAT_STEREO8);
	Al->SetAccessor(String::NewSymbol("FORMAT_STEREO16"), GetAL_FORMAT_STEREO16);
	Al->SetAccessor(String::NewSymbol("REFERENCE_DISTANCE"), GetAL_REFERENCE_DISTANCE);
	Al->SetAccessor(String::NewSymbol("ROLLOFF_FACTOR"), GetAL_ROLLOFF_FACTOR);
	Al->SetAccessor(String::NewSymbol("CONE_OUTER_GAIN"), GetAL_CONE_OUTER_GAIN);
	Al->SetAccessor(String::NewSymbol("MAX_DISTANCE"), GetAL_MAX_DISTANCE);
	Al->SetAccessor(String::NewSymbol("FREQUENCY"), GetAL_FREQUENCY);
	Al->SetAccessor(String::NewSymbol("BITS"), GetAL_BITS);
	Al->SetAccessor(String::NewSymbol("CHANNELS"), GetAL_CHANNELS);
	Al->SetAccessor(String::NewSymbol("SIZE"), GetAL_SIZE);
	Al->SetAccessor(String::NewSymbol("UNUSED"), GetAL_UNUSED);
	Al->SetAccessor(String::NewSymbol("PENDING"), GetAL_PENDING);
	Al->SetAccessor(String::NewSymbol("PROCESSED"), GetAL_PROCESSED);
	Al->SetAccessor(String::NewSymbol("NO_ERROR"), GetAL_NO_ERROR);
	Al->SetAccessor(String::NewSymbol("INVALID_NAME"), GetAL_INVALID_NAME);
	Al->SetAccessor(String::NewSymbol("INVALID_ENUM"), GetAL_INVALID_ENUM);
	Al->SetAccessor(String::NewSymbol("INVALID_VALUE"), GetAL_INVALID_VALUE);
	Al->SetAccessor(String::NewSymbol("INVALID_OPERATION"), GetAL_INVALID_OPERATION);
	Al->SetAccessor(String::NewSymbol("OUT_OF_MEMORY"), GetAL_OUT_OF_MEMORY);
	Al->SetAccessor(String::NewSymbol("VENDOR"), GetAL_VENDOR);
	Al->SetAccessor(String::NewSymbol("VERSION"), GetAL_VERSION);
	Al->SetAccessor(String::NewSymbol("RENDERER"), GetAL_RENDERER);
	Al->SetAccessor(String::NewSymbol("EXTENSIONS"), GetAL_EXTENSIONS);
	Al->SetAccessor(String::NewSymbol("DOPPLER_FACTOR"), GetAL_DOPPLER_FACTOR);
	Al->SetAccessor(String::NewSymbol("DOPPLER_VELOCITY"), GetAL_DOPPLER_VELOCITY);
	Al->SetAccessor(String::NewSymbol("SPEED_OF_SOUND"), GetAL_SPEED_OF_SOUND);
	Al->SetAccessor(String::NewSymbol("DISTANCE_MODEL"), GetAL_DISTANCE_MODEL);
	Al->SetAccessor(String::NewSymbol("INVERSE_DISTANCE"), GetAL_INVERSE_DISTANCE);
	Al->SetAccessor(String::NewSymbol("INVERSE_DISTANCE_CLAMPED"), GetAL_INVERSE_DISTANCE_CLAMPED);
	Al->SetAccessor(String::NewSymbol("LINEAR_DISTANCE"), GetAL_LINEAR_DISTANCE);
	Al->SetAccessor(String::NewSymbol("LINEAR_DISTANCE_CLAMPED"), GetAL_LINEAR_DISTANCE_CLAMPED);
	Al->SetAccessor(String::NewSymbol("EXPONENT_DISTANCE"), GetAL_EXPONENT_DISTANCE);
	Al->SetAccessor(String::NewSymbol("EXPONENT_DISTANCE_CLAMPED"), GetAL_EXPONENT_DISTANCE_CLAMPED);

	Al->Set(String::NewSymbol("enable"), FunctionTemplate::New(ALEnableCallback));
	Al->Set(String::NewSymbol("disable"), FunctionTemplate::New(ALDisableCallback));
	Al->Set(String::NewSymbol("isEnabled"), FunctionTemplate::New(ALIsEnabledCallback));
	Al->Set(String::NewSymbol("getBoolean"), FunctionTemplate::New(ALGetBooleanCallback));
	Al->Set(String::NewSymbol("getInteger"), FunctionTemplate::New(ALGetIntegerCallback));
	Al->Set(String::NewSymbol("getFloat"), FunctionTemplate::New(ALGetFloatCallback));
	Al->Set(String::NewSymbol("getDouble"), FunctionTemplate::New(ALGetDoubleCallback));
	Al->Set(String::NewSymbol("getError"), FunctionTemplate::New(ALGetErrorCallback));
	Al->Set(String::NewSymbol("isSource"), FunctionTemplate::New(ALIsSourceCallback));
	Al->Set(String::NewSymbol("sourcePlay"), FunctionTemplate::New(ALSourcePlayCallback));
	Al->Set(String::NewSymbol("sourceStop"), FunctionTemplate::New(ALSourceStopCallback));
	Al->Set(String::NewSymbol("sourceRewind"), FunctionTemplate::New(ALSourceRewindCallback));
	Al->Set(String::NewSymbol("sourcePause"), FunctionTemplate::New(ALSourcePauseCallback));
	Al->Set(String::NewSymbol("isBuffer"), FunctionTemplate::New(ALIsBufferCallback));
	Al->Set(String::NewSymbol("dopplerFactor"), FunctionTemplate::New(ALDopplerFactorCallback));
	Al->Set(String::NewSymbol("dopplerVelocity"), FunctionTemplate::New(ALDopplerVelocityCallback));
	Al->Set(String::NewSymbol("speedOfSound"), FunctionTemplate::New(ALSpeedOfSoundCallback));
	Al->Set(String::NewSymbol("distanceModel"), FunctionTemplate::New(ALDistanceModelCallback));

	// Again, return the result through the current handle scope.
	return handle_scope.Close(Al);
}	
