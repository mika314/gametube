#include "game_loop.hpp"
#include "sched/sched.hpp"

GameState gameLoop(Conn &)
{
  Sched sched;
  GameState state = GameState::Running;
  sched.regQuit([&state]() { state = GameState::Quit; });
  while (state == GameState::Running)
    sched.processOnes();
  return state;
}
