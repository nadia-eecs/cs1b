include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(00_runHW01DistanceTest distance_test.cpp)
target_link_libraries(00_runHW01DistanceTest hw01_library gtest gtest_main)
