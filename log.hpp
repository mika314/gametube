#pragma once

// Output of log should have line filename. Example:
// file_name.cpp:2: error: cannot open file
// file_name.cpp:13: warning: IP address may be missing
// file_name.cpp:16: info: Starting the service

#define LOGFAIL
#define LOGWARN
#define LOGINFO
#define LOGDEBUG
