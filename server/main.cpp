#include <config/var.hpp>
#include <encnet/enc_listener.hpp>
#include <log/log.hpp>
#include <sched/sched.hpp>

static auto serverPort = Var<uint16_t>{"serverPort", 9999};

int main()
{
  LOGINFO("Server is starting");
  World world;
  auto ret = world.run();
  LOGINFO("Server is exiting");
  return ret;
  
  auto done = false;
  Sched sched;
  sched.regQuit([&done]() { done = true; });
  EncListener listener(sched, serverPort.getValue(), [](std::unique_ptr<EncSocket> &) {
    // TODO
  });
  while (!done)
    sched.processOnes();
  return 0;
}
