include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(12_runHW03DeleteArtistListTest deleteArtistList_test.cpp)
target_link_libraries(12_runHW03DeleteArtistListTest hw03_library gtest gtest_main)
