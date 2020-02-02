#pragma once
#include <string>

template <typename T>
class Var
{
public:
  Var(const std::string &name, const T &defaultValue);
  T getValue() const;

private:
  std::string name;
  T value;
};

template <typename T>
Var<T>::Var(const std::string &name, const T &defaultValue) : name(name), value(defaultValue)
{
  // TODO
}

template <typename T>
T Var<T>::getValue() const
{
  return value;
}
