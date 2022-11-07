include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(00_runHW03ArtistTest artist_test.cpp)
target_link_libraries(00_runHW03ArtistTest hw03_library gtest gtest_main)
