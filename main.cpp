#include <v8.h>

#include "jsgame.h"
#include <string>

using namespace v8;

void ParseOptions(int argc, char* argv[], string* file) {
	for (int i = 1; i < argc; i++) {
		std::string arg = argv[i];
		size_t index = arg.find('=', 0);
		
		if (index == std::string::npos) {
			*file = arg;
		} else {
			std::string key = arg.substr(0, index);
			std::string value = arg.substr(index+1);
		}
	}
}

int main(int argc, char* argv[]) {
	string file;
	ParseOptions(argc, argv, &file);
	
	if (file.empty()) {
		file = "program.js";
		//fprintf(stderr, "No script was specified.\n");
		//return 1;
	}

	JSGame jsgame;
	
	if(!jsgame.initialize(&argc, argv, file)) {
		fprintf(stderr, "Error initializing script.\n");
		return 1;
	}

	return 0;
}
