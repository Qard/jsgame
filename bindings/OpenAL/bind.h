/*
 * glbind.h
 *
 *  Created on: Jun 15, 2009
 *      Author: nicolas
 */

#ifndef ALBIND_H_
#define ALBIND_H_

#include <v8-debug.h>

#if defined(_MSC_VER)
#include <alc.h>
#include <al.h>
#elif defined(__APPLE__)
#include <OpenAL/alc.h>
#include <OpenAL/al.h>
#else
#include <AL/alc.h>
#include <AL/al.h>
#endif

#include <stdio.h>
using namespace std;
using namespace v8;

class AlFactory {
public:
	static Handle<ObjectTemplate> createAl(int* pargc, char** argv);
	static Persistent<Context> al_persistent_context;
};

#endif /* ALBIND_H_ */
