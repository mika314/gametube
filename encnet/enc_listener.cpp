#include "enc_listener.hpp"

EncListener::EncListener(Sched &,
                         uint16_t /*port*/,
                         std::function<void(std::unique_ptr<EncSocket> &)> && /*onNewConn*/)
{
  // TODO
}
