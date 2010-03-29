/*
 * glutbind.h
 *
 *  Created on: Jun 15, 2009
 *      Author: nicolas
 */

#ifndef ALUTBIND_H_
#define ALUTBIND_H_

#include <v8-debug.h>

#if defined(_MSC_VER)
#include <alc.h>
#include <al.h>
#include <alut.h>
#elif defined(__APPLE__)
#include <OpenAL/alc.h>
#include <OpenAL/al.h>
#include <OpenAL/alut.h>
#else
#include <AL/alc.h>
#include <AL/al.h>
#include <AL/alut.h>
#endif

#include <stdio.h>
using namespace std;
using namespace v8;

class AlutFactory {
public:
	static Handle<ObjectTemplate> createAlut(int* pargc, char** argv);
	static Persistent<Context> alut_persistent_context;
};

#endif /* GLUTBIND_H_ */
