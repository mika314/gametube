#pragma once
#include "conn.hpp"

enum class GameState { Running, Relogin, Quit };

GameState gameLoop(Conn &);