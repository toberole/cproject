cmake_minimum_required (VERSION 3.8)

project ("CProject")

add_compile_options(-std=c++14)


message("SYSTEM_NAME = ${CMAKE_SYSTEM_NAME}")
message("PROJECT_BINARY_DIR = ${PROJECT_BINARY_DIR}")
message("PROJECT_SOURCE_DIR = ${PROJECT_SOURCE_DIR}")

# 包含子项目。
# add_subdirectory ("CProject")
include(CProject/CMakeLists.txt)