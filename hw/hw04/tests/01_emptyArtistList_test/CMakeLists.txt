include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(01_runHW04EmptyArtistListTest emptyArtistList_test.cpp)
target_link_libraries(01_runHW04EmptyArtistListTest hw04_library gtest gtest_main)
