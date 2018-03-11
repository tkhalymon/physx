# PhysX

Lightweight Newton physics engine written in C++

## Build

### Requirements

#### Compiler

You can use any compiler that supports C++14 standard. That could be `clang` or `gcc`.

#### Packages

Project requires following packages:

* `xorg-dev` on Ubuntu can be installed by `apt-get`
* `glfw 3.2` or later is required. Currently avaliable only from [sources](https://github.com/glfw/glfw)

The `CMakeLists.txt` provided with project, so you can build it with `cmake` utility:

```bash
mkdir -p build/ # create build directory
cd build/ # enter build directory
cmake .. # generate Makefile
make # build project
```

Tested on Ubuntu 16.04.4, `gcc 5.4.0`, `cmake 3.5.1`.
