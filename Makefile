# Pull in platform specific settings.
include Makefile.$(firstword $(subst _, ,$(shell uname -s)))

CC = g++
CFLAGS := $(CFLAGS) -m32 -Wall -Iexternal/v8/include
PROG = jsgame

# ALUT isn't ready yet.
#SRCS = main.cpp imageloader.cpp utils.cpp jsgame.cpp bindings/OpenGL/bind.cpp bindings/OpenGLES/bind.cpp bindings/GLU/bind.cpp bindings/GLUT/bind.cpp bindings/OpenAL/bind.cpp bindings/ALUT/bind.cpp
SRCS = main.cpp imageloader.cpp utils.cpp jsgame.cpp bindings/OpenGL/bind.cpp bindings/OpenGLES/bind.cpp bindings/GLU/bind.cpp bindings/GLUT/bind.cpp bindings/OpenAL/bind.cpp

all: $(PROG)

$(PROG):	$(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(PROG) $(LIBS)

clean:
	rm -f $(PROG)
