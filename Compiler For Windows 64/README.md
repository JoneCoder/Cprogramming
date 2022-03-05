Commands used :
Update the package database and base packages using
pacman -Syu

Update rest of the base packages 
pacman -Su

Now open up the Msys MinGW terminal
To install gcc and g++ for C and C++ 
For 64 bit
pacman -S mingw-w64-x86_64-gcc
For 32 bit
pacman -S mingw-w64-i686-gcc

To install the debugger ( gdb ) for C and C++
For 64 bit
pacman -S mingw-w64-x86_64-gdb
For 32 bit
pacman -S mingw-w64-i686-gdb

To check
gcc version : gcc --version
g++ version : g++ --version
gdb version : gdb --version