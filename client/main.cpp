#include "game_loop.hpp"
#include "log/log.hpp"
#include "login.hpp"

int main(int /*argc*/, char ** /*argv*/)
{
  LOGINFO("Game is starting");
  for (;;)
  {
    auto conn = login();
    if (!conn)
    {
      LOGINFO("Game is ending from login")
      return 0;
    }
    auto state = gameLoop(*conn);
    if (state == GameState::Quit)
    {
      LOGINFO("Game is ending from game loop")
      return 0;
    }
  }
}
