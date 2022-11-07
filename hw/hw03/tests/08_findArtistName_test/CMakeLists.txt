include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(08_runHW03findArtistbyNameTest findArtistbyName_test.cpp)
target_link_libraries(08_runHW03findArtistbyNameTest hw03_library gtest gtest_main)
