include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(07_runHW04removeLastArtistTest removeLastArtist_test.cpp)
target_link_libraries(07_runHW04removeLastArtistTest hw04_library gtest gtest_main)
