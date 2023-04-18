cmake_minimum_required(VERSION 2.8)

project(hw05library)

## Check for Windows ##
if (WIN32) # true if windows (32 and64 bit)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++0x")
else ()
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif()

set(HEADER_FILES billType.h dateType.h patientType.h doctorType.h personType.h)


set(SOURCE_FILES billType.cpp dateType.cpp patientType.cpp doctorType.cpp personType.cpp)

add_library(hw05_library ${SOURCE_FILES} ${HEADER_FILES})

set_target_properties(hw05_library PROPERTIES LINKER_LANGUAGE CXX)
