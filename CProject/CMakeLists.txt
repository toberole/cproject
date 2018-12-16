cmake_minimum_required(VERSION 3.8)

message(${CMAKE_CURRENT_LIST_DIR})

# 写路径的时候最好使用 ${CMAKE_CURRENT_LIST_DIR}
aux_source_directory(${CMAKE_CURRENT_LIST_DIR}/src SRC_DIR)

include_directories(
	${CMAKE_CURRENT_LIST_DIR}/include
)

add_library(main_lib_out SHARED ${SRC_DIR})
add_executable(main_exec ${SRC_DIR})