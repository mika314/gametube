#pragma once
#include <memory>

class Socket;

class Listener
{
public:
  Listener(uint16_t port);
  std::unique_ptr<Socket> accept();
};