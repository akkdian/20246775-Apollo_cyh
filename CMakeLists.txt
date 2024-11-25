cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(MyProject)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)

# 包含头文件路径
include_directories(include)

# 添加源文件
set(SOURCES
    src/main.cpp
    src/b.cpp
)

# 定义可执行文件
add_executable(MyProject ${SOURCES})
# set_target_properties(MyProject OUTPUT_NAME "我是lyc")
