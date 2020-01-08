#include "game_loop.hpp"
#include "log.hpp"
#include "login.hpp"

int main(int argc, char **argv)
{
  LOGINFO("Game is starting");
  for (;;)
  {
    auto token = login();
    if (!token)
    {
      LOGINFO("Game is ending from login")
      return 0;
    }
    if (!gameLoop(*token))
    {
      LOGINFO("Game is ending from game loop")
      return 0;
    }
  }
}
