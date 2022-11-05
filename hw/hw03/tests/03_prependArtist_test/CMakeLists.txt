include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(03_runHW03PrependArtistTest prependArtist_test.cpp)
target_link_libraries(03_runHW03PrependArtistTest hw03_library gtest gtest_main)
