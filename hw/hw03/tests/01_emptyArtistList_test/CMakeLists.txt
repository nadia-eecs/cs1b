include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(01_runHW03EmptyArtistListTest emptyArtistList_test.cpp)
target_link_libraries(01_runHW03EmptyArtistListTest hw03_library gtest gtest_main)
