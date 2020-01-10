# C++ Coding Standard

- use `.clang_format`
- filenames are snake case
```c++
file_name.hpp
```
- extension for headers .hpp
```c++
header.hpp
```
- extension for source files is .cpp
```c++
my_source.cpp
```
- classes, namespaces and enums are camel case, and first letter is capital
```c++
class BaseClass
{};
```
- method and functions are camel case, and first letter is lower case
```c++
void myFunc();
```
- macro all capital snake case
```c++
#define MY_SCARY_MACRO
```
- member variables do not have any prefix and suffix
```c++
class MyClass
{
private:
  int myVar1;
  int myVar2;
}
```
- use `#pragma once`
- abbreviation are camel case
```
class RpcHtml
{};
```
