#pragma once
#include <ostream>

// Output of log should have line filename. Example:
// file_name.cpp:2: error: 2020.01.07 22:42:01.021 cannot open file
// file_name.cpp:13: warning: 2020.01.07 22:42:02.121  IP address may be missing
// file_name.cpp:16: info: 2020.01.07 22:42:02.466 Starting the service

#define LOGFAIL(message) printLog(__FILE__, __LINE__, "error") << message << std::endl;
#define LOGWARN(message) printLog(__FILE__, __LINE__, "warning") << message << std::endl;
#define LOGINFO(message) printLog(__FILE__, __LINE__, "info") << message << std::endl;
#define LOGDEBUG(message) printLog(__FILE__, __LINE__, "info") << message << std::endl;

std::ostream &printLog(const char *file, int line, const char *severity);