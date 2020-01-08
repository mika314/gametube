#include "log.hpp"
#include <iostream>

std::ostream &printLog(const char *file, int line, const char *severity)
{
  // file_name.cpp:2: error: 2020.01.07 22:42:01.021 cannot open file
  std::clog << file << ":" << line << ": " << severity << ": datetime TODO ";
  return std::clog;
}
