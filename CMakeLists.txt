cmake_minimum_required(VERSION 2.9)
project(c-allocators)

file(GLOB SOURCES
  src/*.c
  src/*.h
)

add_executable(main ${SOURCES})
