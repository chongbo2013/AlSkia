# Generated by gn_to_cmake.py.
cmake_minimum_required(VERSION 2.8.8 FATAL_ERROR)
cmake_policy(VERSION 2.8.8)
project(Skia)

file(WRITE "${SRC_SKIA}/cmake/empty.cpp")
execute_process(COMMAND
  ninja -C "${SRC_SKIA}/cmake/" build.ninja
  RESULT_VARIABLE ninja_result)
if (ninja_result)
  message(WARNING "Regeneration failed running ninja: ${ninja_result}")
endif()
include("${SRC_SKIA}/cmake/CMakeLists.ext")
