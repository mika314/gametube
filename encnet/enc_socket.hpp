#pragma once
#include <sched/sched.hpp>

class EncSocket
{
public:
  EncSocket(Sched &,
            const std::string &host,
            uint16_t port,
            std::function<void()> &&onReadyToRecv,
            std::function<void()> &&onReadyToSend,
            std::function<void()> &&onErr);
  size_t recv(char *, size_t);
  size_t send(const char *, size_t);
};
