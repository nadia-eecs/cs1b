project(circle_library)

set(HEADER_FILES circle.h)

set(SOURCE_FILES circle.cpp)

add_library(circle_library ${SOURCE_FILES} ${HEADER_FILES})
