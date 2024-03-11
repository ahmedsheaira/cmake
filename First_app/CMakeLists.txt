cmake_minimum_required(VERSION 3.22)

project(SumApp)

add_executable(calcbinary main.cpp src/calc.cpp)

target_include_directories(calcbinary PUBLIC include/)