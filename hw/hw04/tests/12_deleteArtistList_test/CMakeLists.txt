include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(12_runHW04DeleteArtistListTest deleteArtistList_test.cpp)
target_link_libraries(12_runHW04DeleteArtistListTest hw04_library gtest gtest_main)
