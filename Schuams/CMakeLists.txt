project(Schuams)
cmake_minimum_required(VERSION 3.15)
include_directories(functions, arrays)

set(FUNCTIONS functions/function_practice.cpp functions/function_practice.h functions/function_problems.cpp functions/function_problems.h)
set(ARRAYS arrays/array_problems.cpp arrays/array_problems.h)

aux_source_directory(. SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST} ${FUNCTIONS} ${ARRAYS})
