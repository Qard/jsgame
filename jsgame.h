/*
 * jsgame.h
 */
#ifndef JSGAME_H_
#define JSGAME_H_

#include <v8-debug.h>
#include <string>
#include <cstring>

#include "utils.h"

// Include Graphics bindings.
#include "bindings/OpenGL/bind.h"
#include "bindings/OpenGLES/bind.h"
#include "bindings/GLU/bind.h"
#include "bindings/GLUT/bind.h"

// Include Audio bindings
#include "bindings/OpenAL/bind.h"
// ALUT is not ready yet--tons of compilation errors!!
//#include "bindings/ALUT/bind.h"

// (TODO) Include Network bindings? ProtoLib? APR? Asio?

using namespace std;
using namespace v8;

class JSGame
{
	public:
		bool initialize(int* pargc, char** argv, string scriptname);
		bool executeScript(string scriptname);

		//keep a reference to the global context.
		static Persistent<Context> context;
};

#endif /* V8GL_H_ */
