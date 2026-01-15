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

enable_testing()

add_executable(test_particle_motion
    test/test_particle_motion.cpp
)
target_link_libraries(test_particle_motion particles)
add_test(NAME ParticleMotion COMMAND test_particle_motion)


add_executable(test_leapfrog
    test/test_leapfrog_energy.cpp
)
target_link_libraries(test_leapfrog particles)
add_test(NAME LeapfrogEnergy COMMAND test_leapfrog)