cmake_minimum_required (VERSION 3.8)

project ("CProject")

message("PROJECT_BINARY_DIR = ${PROJECT_BINARY_DIR}")
message("PROJECT_SOURCE_DIR = ${PROJECT_SOURCE_DIR}")

# 包含子项目。
add_subdirectory ("CProject")
# include(CProject/CMakelists.txt)