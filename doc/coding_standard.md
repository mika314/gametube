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
- methods and functions are camel case, and first letter is lower case
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

# GDScript Coding Standard
- as indentation use two spaces
- filenames are snake case
```
navmesh.gd
car_select.tscn
follow_camer.gd
```
- vars are snake case all characters are lower case
```
var camrot = 0.0
```
- consts are snake case all characters are capital
```
const SPEED = 4.0
```
- functions are snake case all characters are lower case
```
func set_process():
```
- Nodes in the tree named camel case first letter is capital
```
AnimationPlayer
```
