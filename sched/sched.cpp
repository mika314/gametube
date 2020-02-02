#include "sched.hpp"

#include "listener.hpp"
#include "socket.hpp"

void Sched::processOnes()
{
  // TODO
}

Sched::Canceler Sched::regAudioDevice(std::function<void(AudioDeviceEventType /*TODO*/)> &&)
{
  // TODO
  return []() {};
}

Sched::Canceler Sched::regController(std::function<void(/*TODO*/)> &&)
{
  // TODO
  return []() {};
}

Sched::Canceler Sched::regDollar(std::function<void(/*TODO*/)> &&)
{
  // TODO
  return []() {};
}

Sched::Canceler Sched::regDropFile(std::function<void(/*TODO*/)> &&)
{
  // TODO
  return []() {};
}

Sched::Canceler Sched::regFinger(std::function<void(/*TODO*/)> &&)
{
  // TODO
  return []() {};
}

Sched::Canceler Sched::regJoyAxisMotion(std::function<void(/*TODO*/)> &&)
{
  // TODO
  return []() {};
}

Sched::Canceler Sched::regJoyBallMotion(std::function<void(/*TODO*/)> &&)
{
  // TODO
  return []() {};
}

Sched::Canceler Sched::regJoyButton(std::function<void(/*TODO*/)> &&)
{
  // TODO
  return []() {};
}

Sched::Canceler Sched::regJoyDevice(std::function<void(/*TODO*/)> &&)
{
  // TODO
  return []() {};
}

Sched::Canceler Sched::regJoyHatMotion(std::function<void(/*TODO*/)> &&)
{
  // TODO
  return []() {};
}

Sched::Canceler Sched::regKey(std::function<void(/*TODO*/)> &&)
{
  // TODO
  return []() {};
}

Sched::Canceler Sched::regMouse(std::function<void(/*TODO*/)> &&)
{
  // TODO
  return []() {};
}

Sched::Canceler Sched::regMultiGesture(std::function<void(/*TODO*/)> &&)
{
  // TODO
  return []() {};
}

Sched::Canceler Sched::regQuit(std::function<void()> &&)
{
  // TODO
  return []() {};
}

Sched::Canceler Sched::regSysWmEvent(std::function<void(/*TODO*/)> &&)
{
  // TODO
  return []() {};
}

Sched::Canceler Sched::regText(std::function<void(/*TODO*/)> &&)
{
  // TODO
  return []() {};
}

Sched::Canceler Sched::regUserEvent(std::function<void(/*TODO*/)> &&)
{
  // TODO
  return []() {};
}

Sched::Canceler Sched::regWindowEvent(std::function<void(/*TODO*/)> &&)
{
  // TODO
  return []() {};
}

Sched::Canceler Sched::regTimer(std::function<void()> &&,
                                std::chrono::milliseconds,
                                bool /*repeat*/)
{
  // TODO
  return []() {};
}

Sched::Canceler Sched::regTcpSocket(std::function<void()> && /*readyToRead*/,
                                    std::function<void()> && /*readyToWrite*/,
                                    std::function<void()> && /*netEvent*/,
                                    Socket &)
{
  // TODO
  return []() {};
}

Sched::Canceler Sched::regTcpListener(std::function<void()> && /*readyToAccept*/, Listener &)
{
  // TODO
  return []() {};
}
