#pragma once

//Handles actual filesystem interactions (I hope so)
#include <dirent.h>
#include <string>
#include <vector>
#include <iostream>
#include <utility>

#include "util/exceptions.h"

/*!
 * @author kovlev
 */


/*!
 * @class FilesystemHandler contains helper functions on listing all files and directories in a folder
 * Also can be used for dealing with extensions
 */
class FilesystemHandler {
public:
	//Filesystem traversing methods
	static std::vector<std::string> getFilesInDir(std::string path);
	static std::vector<std::string> getDirsInDir(std::string path);
	static std::pair< std::vector<std::string>, std::vector<std::string> > getFilesAndDirsInDir(std::string path);
	
	//Extension handling methods
	static std::string removeExtension(std::string filename);
	static std::string getExtension(std::string filename);
};
