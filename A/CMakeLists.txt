cmake_minimum_required (VERSION 2.8.11)

project(lib)
add_library(lib INTERFACE)
target_sources(lib INTERFACE lib.h)

