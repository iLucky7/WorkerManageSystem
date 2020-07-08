
cmake_minimum_required(VERSION 3.0)
project(EMPLOYEE_SYSTEM)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set( CMAKE_BUILD_TYPE Release)

include_directories(${CMAKE_SOURCE_DIR}/include)

aux_source_directory(src SRC)
aux_source_directory(. MAIN)

add_executable(EmployeeSystem ${SRC} ${MAIN})

