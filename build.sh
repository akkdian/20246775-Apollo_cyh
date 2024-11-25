#!/bin/bash

# 检查是否存在 build 目录
if [ ! -d "build" ]; then
  echo "Creating build directory..."
  mkdir build
fi

# 进入 build 目录
cd build

# 运行 CMake 配置
echo "Running cmake ..."
cmake ..

# 运行构建过程
echo "Building the project..."
make
