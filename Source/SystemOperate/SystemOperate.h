#pragma once

#include <io.h>
#include <direct.h>

#include <string>
#include <cstring>
#include <vector>

#include <Tlhelp32.h>

#include "../../Lib/Bitscode/Bitscode.h"

#pragma comment(lib,"../../Lib/Bitscode/Bitscode.lib")

bool ExeCmd(char* cmd,char* result);

bool CopyFile(std::string destDir,std::string sourcePath);

std::vector<std::string> DirList(std::string &dirPath);

DWORD QueryProcessID(std::string processName);

bool IsProcessExist(DWORD processID);