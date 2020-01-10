#pragma once
#include <cstdint>
#include <string>

class Socket
{
public:
  friend class Sched;
  Socket(const std::string &host, uint16_t port);
  Socket(uint16_t port);
  size_t recv(char *, size_t);
  size_t send(const char *, size_t);
};
