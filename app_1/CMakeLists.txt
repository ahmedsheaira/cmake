cmake_minimum_required(VERSION 3.28.3)

project(APP1 VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SRC_FILES 
    main.cpp 
    src/calc.cpp)

add_subdirectory(${CMAKE_SOURCE_DIR}/lib)
add_executable(app1 ${SRC_FILES})
target_include_directories(app1 PUBLIC include/ lib/)

target_link_libraries(app1 PUBLIC wifi_lib)
########################################################################
# 1. Important Variables

# message(STATUS "CMAKE SOURCE DIR ${CMAKE_SOURCE_DIR}")
# message(STATUS "CMAKE CURRENT SOURCE DIR ${CMAKE_CURRENT_SOURCE_DIR}")

# message(STATUS "CMAKE BINARY DIR ${CMAKE_BINARY_DIR}")
# message(STATUS "CMAKE CURRENT BINARY DIR ${CMAKE_CURRENT_BINARY_DIR}")

# message(STATUS "CMAKE GENERATOR ${CMAKE_GENERATOR}")
########################################################################
# 2. Set values on builtin variable

# set(CMAKE_CXX_STANDARD 14)
# set(CMAKE_CXX_STANDARD_REQUIRED True)
# message(STATUS "Show C++ standard: ${CMAKE_CXX_STANDARD}")
# message(STATUS "Show C++ standard: ${CMAKE_CXX_STANDARD_REQUIRED}")
########################################################################
# 3. Commands can be uppercase or lowercase

# MESSAGE(STATUS "Test !!")
########################################################################
# 4. Assign on variables

# set(SRC_FILES
#     main.cpp
#     src/app.cpp)

# set(SRC_FILES "main.cpp;src/app.cpp")
########################################################################
# 5. Environment variables

# set(p $ENV{PATH})
# MESSAGE(STATUS "PATH : ${p}")
########################################################################
# 6. Set values on argument options

# message(STATUS "Argument value is ${Myvalue}")
# message(STATUS "CMAKE_CXX_STANDARD is ${CMAKE_CXX_STANDARD}")

########################################################################
# 7. Set configure_file

set(PRODUCT_YEAR "2024")
configure_file(defaultconfig.h.in defaultconfig.h)
target_include_directories(app1 PUBLIC ${PROJECT_BINARY_DIR})
########################################################################
# 8. if condition statement
# OFF 0 NO FALSE N "NOTFOUND" "IGNORE" ---> False

if(DEBUG)
    set(DEBUGINFO "Author is Ahmed Sheaira")
endif()

# if(NOT var)       --->    if(!var)
# if(var1 or var2)  --->    if(var1 || var2)
# if(var1 and var2) --->    if(var1 && var2)
# if(myval MATCHES regularexpression)
# if(EXISTS file)
# if(var1 LESS var2)    --->    if(var1 < var2)
# if(var1 GREATER var2) --->    if(var1 > var2)
# if(var1 EQUAL var2)   --->    if(var == var2)
# if(TARGET lib)    ---> add_executable, add_library, and add_custom_target

if(TARGET wifi_lib)
    message(STATUS "WIFI is available")
else()
    message(FATAL_ERROR "Library is not found")
endif()
########################################################################
# 9. for loop

# foreach(F1 IN ITEMS A H M E D)
#     message(STATUS ${F1})    
# endforeach()

# # With list
# set(varfor A H M E D)
# foreach(F2 IN LISTS varfor)
#     message(STATUS ${F2})
# endforeach()
########################################################################
# 10. while loop

# set(varwhile 10)
# while(varwhile)
#     message(${varwhile})
#     math(EXPR varwhile "${varwhile} - 1")
# endwhile()
########################################################################
# 11. function

# function(happynewyear arg1)
#     message("ARG1 ${arg1}")     # Show the name of the argument
#     message("ARG1 ${${arg1}}")  # Show the value of the argument
#     message("ARG1 ${ARGN}")     # Show the extra agument
#     message("ARG1 ${ARGC}")     # Show the count of arguments
# endfunction()

# set(varfunction 2 0 2 4)
# happynewyear(varfunction jan)
########################################################################
# 12. CMAKECache

# option(CVar "BOOL Var" TRUE)
# set(Var2 TRUE CACHE BOOL "bool variable")
# message("Cache is ${Var2}")
########################################################################
# 13. Compiler Info

# target_compile_definitions(app1 PUBLIC "STD_CXX=17")
# target_compile_options(app1 PUBLIC -march=native)
########################################################################
# 14. Install

# install(FILES
#         "${PROJECT_BINARY_DIR}/app1"
#         DESTINATION "${PROJECT_BINARY_DIR}/executable")

# install(FILES
#         "${CMAKE_SOURCE_DIR}/lib/wifi.hpp"
#         "${CMAKE_SOURCE_DIR}/include/calc.hpp"
#         DESTINATION "${PROJECT_BINARY_DIR}/include")
########################################################################
# 15. File

# FILE(READ "main.cpp" MAIN_Text)
# message(STATUS "${MAIN_Text}")
# MESSAGE("----------------------")
# FILE(STRINGS "main.cpp" MAIN_Text)
# message(STATUS "${MAIN_Text}")
# MESSAGE("----------------------")
# FILE(STRINGS "main.cpp" MAIN_Text REGEX "^int.")
# message(STATUS "${MAIN_Text}")
# MESSAGE("----------------------")
# file(GLOB_RECURSE SRCS "*.cpp")
# message(STATUS "${SRCS}")
########################################################################
# 16. Strings

# FILE(READ "main.cpp" MAIN_Text)
# STRING(REGEX REPLACE "int" "void" OUT ${MAIN_Text})
# message("${OUT}")
########################################################################
# 17. Macro

# set(globalvariable 10)
# macro(funname x)
#     message("${x}")
#     message("${${x}}")
#     set(globalvariable 15)
# endmacro()

# message("${globalvariable}")
# funname(globalvariable)
# message("${globalvariable}")
########################################################################
# 18. break continue

# while(True)
#     message("hello")
#     break()
# endwhile()

# while(True)
#     message("hello")
#     continue()
# endwhile()
########################################################################
# 19. execute_process

# execute_process(COMMAND "ls")
########################################################################
# 