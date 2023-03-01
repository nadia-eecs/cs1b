project(hw03_library)

set(HEADERFILES matrix.h)
set(SOURCE_FILES matrix.cpp)

add_library(hw03_library ${SOURCE_FILES} ${HEADER_FILES})
