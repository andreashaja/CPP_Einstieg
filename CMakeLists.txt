cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project("Einstieg in C++")

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

message("Making ${CODE_ID}")    

if(CODE_ID STREQUAL "hello")
	add_executable (hello hello.cpp) 
elseif(CODE_ID STREQUAL "count")
	add_executable (count count.cpp)
endif()

