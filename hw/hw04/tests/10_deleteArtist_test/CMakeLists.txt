include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(10_runHW04DeleteArtistTest deleteArtist_test.cpp)
target_link_libraries(10_runHW04DeleteArtistTest hw04_library gtest gtest_main)
