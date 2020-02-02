#pragma once
#include <chrono>
#include <chrono>
#include <functional>

class Socket;
class Listener;

class Sched
{
public:
  void processOnes();

  using Canceler = std::function<void()>;

  // system events
  enum class AudioDeviceEventType { Added, Removed };
  Canceler regAudioDevice(std::function<void(AudioDeviceEventType /*TODO*/)> &&);
  Canceler regController(std::function<void(/*TODO*/)> &&);
  Canceler regDollar(std::function<void(/*TODO*/)> &&);
  Canceler regDropFile(std::function<void(/*TODO*/)> &&);
  Canceler regFinger(std::function<void(/*TODO*/)> &&);
  Canceler regJoyAxisMotion(std::function<void(/*TODO*/)> &&);
  Canceler regJoyBallMotion(std::function<void(/*TODO*/)> &&);
  Canceler regJoyButton(std::function<void(/*TODO*/)> &&);
  Canceler regJoyDevice(std::function<void(/*TODO*/)> &&);
  Canceler regJoyHatMotion(std::function<void(/*TODO*/)> &&);
  Canceler regKey(std::function<void(/*TODO*/)> &&);
  Canceler regMouse(std::function<void(/*TODO*/)> &&);
  Canceler regMultiGesture(std::function<void(/*TODO*/)> &&);
  Canceler regQuit(std::function<void()> &&);
  Canceler regSysWmEvent(std::function<void(/*TODO*/)> &&);
  Canceler regText(std::function<void(/*TODO*/)> &&);
  Canceler regUserEvent(std::function<void(/*TODO*/)> &&);
  Canceler regWindowEvent(std::function<void(/*TODO*/)> &&);

  // timer
  Canceler regTimer(std::function<void()> &&, std::chrono::milliseconds = std::chrono::milliseconds{0}, bool repeat = false);

  // network events
  Canceler regTcpSocket(std::function<void()> &&readyToRead,
                        std::function<void()> &&readyToWrite,
                        std::function<void(/*TODO*/)> &&netEvent,
                        Socket &);
  Canceler regTcpListener(std::function<void()> &&readyToAccept, Listener &);
  // TODO UDP
};
