cmake_minimum_required(VERSION 3.16.3)
project(workflow-tests)

set(CMAKE_CXX_COMPILER g++)
set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)

set(SRC flowers.cpp)
set(NAME workflow-tests)
set(FLAGS -Wall -Wextra -Werror -pedantic -Wconversion -O3)

add_library(${NAME}-lib STATIC ${SRC})
add_executable(${NAME} main.cpp)
target_link_libraries(${NAME} ${NAME}-lib)
target_compile_options(${NAME}-lib PRIVATE ${FLAGS})
target_compile_options(${NAME} PRIVATE ${FLAGS})