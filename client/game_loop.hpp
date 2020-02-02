#pragma once

class EncSocket;

enum class GameState { Running, Relogin, Quit };

GameState gameLoop(EncSocket &);
