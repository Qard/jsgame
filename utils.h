#ifndef V8GLUTILS_H_
#define V8GLUTILS_H_

namespace JSGameUtils
{
	void setRootPath(char* program_path, char* jsfile_path);

	char* getRootPath(void);
	char* getRealPath(char* file_path);
};

#endif
