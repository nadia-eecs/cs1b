include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(03_runHW04PrependArtistTest prependArtist_test.cpp)
target_link_libraries(03_runHW04PrependArtistTest hw04_library gtest gtest_main)
