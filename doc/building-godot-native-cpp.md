1. Get godot-CPP bindings https://github.com/GodotNativeTools/godot-cpp.git
2. install scons
3. copy scons files from pip python to the directory where scons
   complains
4. run scons platform=windows use_mingw=yes generate_bindings=yes, it will fail to run GCC, but bindings would be generated
5. copy all *.cpp files in src dir
6. copy all *.hpp files in includes dir
7. remove in #include <core/...> core/ part
8. copy *.dlls libgcc_s_seh-1.dll, libstdc++-6.dll,
   libwinpthread-1.dll from msys64 project use dependency walker to
   figure out missing dlls
