include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(10_runHW03DeleteArtistTest deleteArtist_test.cpp)
target_link_libraries(10_runHW03DeleteArtistTest hw03_library gtest gtest_main)
