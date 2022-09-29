## Specify minimum version of CMAKE
cmake_minimum_required(VERSION 3.16)

## Project's Name
project(hw01)

## Check for Windows ##
if (WIN32) # true if windows (32 and 64 bit)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++0x")
else ()
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif()

set(SOURCE_FILES main.cpp)

add_executable(hw01_run ${SOURCE_FILES})

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)

target_link_libraries(hw01_run hw01_library)
