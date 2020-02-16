You need:
- Windows 10
- msys2
- git
- clang
- coddle
- libuv
- libtommath
- libtomcrypt
- scons
- godot
- build the project

# msys2
msys2 is the POSIX layer on Windows; the project is focused on development tools which are suitable to build Windows-native application in POSIX friendly environment.
Go to https://www.msys2.org/ and download the 64bit version of msys2. Follow the installation instruction. Pay attention to the instructions after finishing the setup wizard; you need to update msys2 to the latest by running: 
```
# pacman -Syu
```
and
```
# pacman -Su
```

# git
Git is the source control tool.
Run inside msys2 terminal
```
# pacman -S git
```
# clang
clang is the C++ compiler.
Mingw version of clang appeared to work for me. To install clang run from msys2 terminal:
```
# pacman -S mingw-w64-x86_64-clang
```
# coddle 
Coddle is a C++ building tool.
You can find source code on this link:
https://github.com/coddle-cpp/coddle .
Follow the Windows instructions.

Note: you have to run MinGW msys2 terminal to be able to run clang. In the windows launcher, it called `MSYS2 MinGW 64bit`.
# libuv
libuv is the library for asynchronous I/O, and in this project, it
planned to be used for networking and scheduler.
To install libuv run from msys2 terminal:
```
# pacman -S mingw-w64-x86_64-libuv
```
# libtommath
libtommath is a big number math library needed for cryptography in particular libtomcrypt depends on libtommath.
To install libtommath run from msys2 terminal:
```
# pacman -S mingw-w64-x86_64-libtommath
```
# libtomcrypt
libtomcrypt is a cryptographic library. In this project, it used to implement RSA for asymmetric encryption, chacha for symmetric encryption, and cryptographic random number generator.
Unfortunately, libtomcrypt is not a part of the msys2 project. You have to build it from source code.
Clone the project from the git repository: https://github.com/libtom/libtomcrypt
```
# git clone https://github.com/libtom/libtomcrypt.git
```
From mingw msys2 terminal got into (use `cd` command) the cloned directory. And run `make`:
```
# make -f makefile.mingw
```
After compilation is finished, run `make install`:
```
# make install
```
# scons
scons is a build tool used by Godot. We need scons to be able to generate c++ binding for gdnative.
First, you need to install Python 3. 
```
# python -S python3-pip
```
Next step is installing scons, run:
```
# pip install scons
```
# godot
Godot is the game engine. You can download Godot from the following link: https://godotengine.org/ . Currently, I am using version 3.2, standard, 64 bit.
# Build the project
Currently, the project has three major parts: server, client, and native script. The server code is located in `server` directory. The client Godot project is located in `client` directory. And native script code is located in `gdnative` directory.

Clone the game from https://github.com/mika314/conway
Go to `server` directory and run coddle.
```
# cd conway/server
# coddle
```
Coddle will build server.exe executable. You can run it:
```
# ./server.exe
```
Go to gdnative directory and run coddle.
```
# cd conway/gdnative
# coddle
```
Coddle will build `gdnative.dll` dynamic library. You need to copy it into `client` directory:
```
# cd gdnative.dll ../client
```
Now you can open Godot project; it's located in `client` directory. 

# Reference video
I produced an on-boarding video in case if it easier for you to follow
video tutorial:

[![](http://img.youtube.com/vi/IfT5Q2EHBH0/0.jpg)](http://www.youtube.com/watch?v=IfT5Q2EHBH0 "GameTube on-boarding")
