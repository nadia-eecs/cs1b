include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(05_runHW04insertArtistTest insertArtist_test.cpp)
target_link_libraries(05_runHW04insertArtistTest hw04_library gtest gtest_main)
