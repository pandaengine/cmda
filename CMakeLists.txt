cmake_minimum_required(VERSION 3.6)

set(APP_NAME cmda)

project(${APP_NAME})
set(CODE_DIR ${CMAKE_CURRENT_LIST_DIR})

if(MSVC)
	# add_compile_options(/Z7 /utf-8 /MP)
    add_compile_options(/Z7)
	set(CMAKE_CXX_STANDARD 17)
    # add_definitions(-DUNICODE -D_UNICODE)
endif()

# 头文件包含目录
include_directories(${CODE_DIR})

# add_executable(${APP_NAME} ${CODE_DIR}/main.c)
add_executable(${APP_NAME} ${CODE_DIR}/main.cpp)

