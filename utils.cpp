#include "utils.h"
#include <string>
#include <cstring>

namespace JSGameUtils {
	char separator = '/';
	char* root_path;

	void setRootPath(char* program_path, char* jsfile_path) {
		//Set the root_path for opening shader files with
		//relative paths
		//take path from executable
		char* pch = strrchr(program_path, JSGameUtils::separator);
		int last_index = pch - program_path +1;
		char* tmp_exec_path = new char[last_index +1];
		strncpy(tmp_exec_path, program_path, last_index);
		tmp_exec_path[last_index] = '\0';

		//take relative path from javascript file
		char* p1ch = strrchr(jsfile_path, JSGameUtils::separator);
		int last_index1 = p1ch - jsfile_path +1;
		char* tmp_js_path = new char[last_index1 +1];
		strncpy(tmp_js_path, jsfile_path, last_index1);
		tmp_js_path[last_index1] = '\0';

		JSGameUtils::root_path = new char[last_index + last_index1 +1];

		strcpy(JSGameUtils::root_path, tmp_exec_path);
		strcat(JSGameUtils::root_path, tmp_js_path);

		delete[] tmp_exec_path;
		delete[] tmp_js_path;
	}

	char* getRootPath(void) {
		return JSGameUtils::root_path;
	}

	char* getRealPath(char* filepath_str) {
		//read the file source
		char* filename = NULL;
		
		if(filepath_str[0] != JSGameUtils::separator) {
			filename = new char[strlen(JSGameUtils::root_path) + strlen(filepath_str) +1];
			strcpy(filename, JSGameUtils::root_path);
			strcat(filename, filepath_str);
		} else {
			filename = new char[strlen(filepath_str) +1];
			strcpy(filename, filepath_str);
		}
		
		return filename;
	}
};
