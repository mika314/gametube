#pragma once
#include <memory>
#include <sched/sched.hpp>

class EncSocket;

class EncListener
{
public:
  EncListener(Sched &,
              uint16_t port,
              std::function<void(std::unique_ptr<EncSocket> &)> &&onNewConn);
};