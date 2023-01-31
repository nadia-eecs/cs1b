project(hw02_library)

set(HEADER_FILES matrix.h)

set(SOURCE_FILES matrix.cpp)

add_library(hw02_library ${SOURCE_FILES} ${HEADER_FILES})
