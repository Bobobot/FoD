# Fall of Dyrangor
![Logo][logo] A small role-playing/strategy game that I developed using the SDL2 library on C++. ![Logo][logo]

[logo]: data/img/icon.png

# Libraries used
* C++ standard library (uses the c++14 standard)
* SDL2
* SDL2_image for texture loading
* SDL2_mixer for sounds
* SDL2_ttf for font rendering

# Compilation
## Windows
### Using gcc
First, get a gcc compiler. Since my buildscript calls g++ directly, it is recommended to set PATH correctly (or use a compiler which does this automatically). Using arguments for *winmake.bat*, one can specify the target architecture. When no argument is given, the script tries to do this by itself, however it is not recommended, since the architecture detection is inconsistent.

To resolve the include and lib stuff for SDL modules, you need to add them to your compiler. For file and directory handling, platform specific codebases have been written.

When you got all these, you can compile it with the *winmake.bat* script. Data and logs folders need to be at the same place as the executable as well as the SDL dll files.

### For those who like to follow simple instructions
1. Download and install a gcc compiler. I personally use [this](http://tdm-gcc.tdragon.net/) due to the pthread support. You can get either the 32 or the 64 bit version.
2. Download the SDL development libraries ([SDL][SDL], [SDL_image][SDL_image], [SDL_mixer][SDL_mixer], [SDL_ttf][SDL_ttf]). You are going to need the mingw ones.
3. Extract the downloaded files into your compiler. The source folder depends on the architecture, while the destination is always C:/TDM-GCC/mingw32 (sometimes there is a prefix before mingw). Either way, the folder structures (include, lib, (maybe share or bin)) should match. The .h files must not be in the SDL2 subdirectory, since the includation changed.
4. Clone this project. Use git clone, or download as zip, it does not matter.
5. Run winmake.bat with an argument ('32' or '64') for compilation. To add arguments, you likely need to have a cmd window opened here (shift-right click helps).
6. Once compilation is done, you can check the exe in build/. To make things work, you need to:
	* Move SDL .dlls (and the other needed ones, such as zlib or libpng) to the same directory as the exe. Be careful not to mix 32 and 64 bit dlls and executables, my [script](test/windows_arch_checker.py) helps in integrity checking.
	* Move the log and data folders to the exe's directory.

The game should run now.

### Visual studio
Not tested yet.

## GNU/Linux
Installing libraries is a lot more easier, also *dirent.h* actually works as intended. To get SDL devel libs under Ubuntu using apt-get, just type
```
sudo apt-get install libsdl2*
```
Under different distros and using different package managers you need different commands, but in that case I'm sure you already know that. Compilation should be easy now, just run the make script (not an actual makefile, just a shell script) with an 'm' or 'f' param. Uses g++.

## macOS
Not tested yet

[SDL]: https://www.libsdl.org/download-2.0.php
[SDL_image]: https://www.libsdl.org/projects/SDL_image/
[SDL_mixer]: https://www.libsdl.org/projects/SDL_mixer/
[SDL_ttf]: https://www.libsdl.org/projects/SDL_ttf/

# Notes and specs
Soon to be added.
