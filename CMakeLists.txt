cmake_minimum_required(VERSION 3.24)
project(remoteDesktop)

set(CMAKE_CXX_STANDARD 17)

add_executable(remoteDesktop main.cpp)
target_link_libraries(remoteDesktop winmm.lib)