cmake_minimum_required(VERSION 3.0)
project(CppLearning)
set(CMAKE_CXX_STANDARD  17)

add_executable(CppLearning
       9_Lambda_Expression/Lambda_Expression.cpp
)

# Support thread
find_package(Threads REQUIRED)
target_link_libraries(CppLearning PRIVATE ${CMAKE_THREAD_LIBS_INIT})