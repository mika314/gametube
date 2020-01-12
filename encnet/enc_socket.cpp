#include "enc_socket.hpp"

EncSocket::EncSocket(Sched &,
                     const std::string &/*host*/,
                     uint16_t /*port*/,
                     std::function<void()> &&/*onReadyToRecv*/,
                     std::function<void()> &&/*onReadyToSend*/,
                     std::function<void()> &&/*onErr*/)
{
  // TODO
}

size_t EncSocket::recv(char *, size_t)
{
  // TODO
  return 0;
}

size_t EncSocket::send(const char *, size_t)
{
  // TODO
  return 0;
}
