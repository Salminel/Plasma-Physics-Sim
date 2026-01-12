cmake_minimum_required(VERSION 3.16)
project(plasma_sim LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_library(particles
    src/particles/particle.cpp
)

add_executable(plasma
    src/main.cpp
)

target_link_libraries(plasma particles)