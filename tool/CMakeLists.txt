cmake_minimum_required(VERSION 3.10)

# set the project name
project(test)

# add the executable
add_executable(test main.cpp NalUtil.cpp ZBitStream.cpp public.cpp)