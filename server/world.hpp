#pragma once

class World
{
public:
  World();
  int run();

private:
  Sched sched;
  DB db;
  std::unordered_set<std::unique_ptr<Client>> clients;
};
