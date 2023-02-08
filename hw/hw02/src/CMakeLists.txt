project(hw02_library)

set(HEADERFILES gen_number.h post_process.h print_menu.h)
set(SOURCE_FILES gen_number.cpp post_process.cpp print_menu.cpp)

add_library(hw02_library ${SOURCE_FILES} ${HEADER_FILES})
