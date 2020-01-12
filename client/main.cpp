#include "game_loop.hpp"
#include "login.hpp"
#include <log/log.hpp>

int main(int /*argc*/, char ** /*argv*/)
{
  LOGINFO("Game is starting");
  for (;;)
  {
    auto sock = login();
    if (!sock)
    {
      LOGINFO("Game is ending from login")
      return 0;
    }
    auto state = gameLoop(*sock);
    if (state == GameState::Quit)
    {
      LOGINFO("Game is ending from game loop")
      return 0;
    }
  }
}
