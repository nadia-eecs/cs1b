project(hw01_library)

set(HEADER_FILES circle.h)

set(SOURCE_FILES circle.cpp)

add_library(hw01_library ${SOURCE_FILES} ${HEADER_FILES})
