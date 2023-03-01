## Specify minimum version of CMAKE
cmake_minimum_required(VERSION 3.16)

## Project's Name
project(hw03)

## Check for Windows ##
if (WIN32) # true if windows (32 and 64 bit)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++0x")
else ()
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif()

set(SOURCE_FILES main.cpp)

add_executable(hw03_run ${SOURCE_FILES})

include_directories(src)

add_subdirectory(src)
add_subdirectory(tests)

target_link_libraries(hw03_run hw03_library)
