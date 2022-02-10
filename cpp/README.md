## Setup example for Windows & MSYS2
1. Execute the following commands in MSYS2 MinGW x64 shell;
```bash
git clone https://github.com/ftexchange/ftx.git
cd ftx
git submodule update --init --recursive
cd cpp
mkdir bin
cd bin
cmake .. -G "MSYS Makefiles" -DCMAKE_BUILD_TYPE=Release
make
```
2. Check the examples (and use em as a starting point).
```bash
./bin/src/example/rest_test
./bin/src/example/ws_test
```
