include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(04_runHW03AppendArtistTest appendArtist_test.cpp)
target_link_libraries(04_runHW03AppendArtistTest hw03_library gtest gtest_main)
