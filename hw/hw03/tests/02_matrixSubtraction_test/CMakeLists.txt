include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(02_runHW03matrixSubtractionTest matrixSubtraction_test.cpp)
target_link_libraries(02_runHW03matrixSubtractionTest hw03_library gtest gtest_main)
