include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(04_runHW03matrixTransposeTest matrixTranspose_test.cpp)
target_link_libraries(04_runHW03matrixTransposeTest hw03_library gtest gtest_main)
