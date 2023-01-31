include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(00_runHW04ArtistTest artist_test.cpp)
target_link_libraries(00_runHW04ArtistTest hw04_library gtest gtest_main)
