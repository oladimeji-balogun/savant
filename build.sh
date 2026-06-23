#!/bin/bash
cmake -B build -DCMAKE_TOOLCHAIN_FILE=/home/eigen/vcpkg/scripts/buildsystems/vcpkg.cmake
cmake --build build