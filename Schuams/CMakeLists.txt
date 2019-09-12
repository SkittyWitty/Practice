project(Schuams)
cmake_minimum_required(VERSION 2.8)
include_directories(Functions)

set(TEST Functions/function_practice.cpp Functions/function_practice.h Functions/function_problems.cpp Functions/function_problems.h)

aux_source_directory(. SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST} ${TEST})
