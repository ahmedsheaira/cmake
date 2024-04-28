cmake_minimum_required(VERSION 3.28.3)
project(APP1)

set(SRC_FILES 
    main.cpp 
    src/calc.cpp)

message(STATUS "Source files have : ${SRC_FILES}")

message(STATUS "Path is ${CMAKE_SOURCE_DIR}")

if(EXISTS ${CMAKE_SOURCE_DIR}/main.c)
    message(STATUS "File is exist")
else()
    message(FATAL_ERROR " File is not exit")
endif()

add_executable(app1 ${SRC_FILES})
target_include_directories(app1 PUBLIC include/)