include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(04_runHW02matrixTransposeTest matrixTranspose_test.cpp)
target_link_libraries(04_runHW02matrixTransposeTest hw02_library gtest gtest_main)
