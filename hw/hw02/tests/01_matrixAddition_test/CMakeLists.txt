include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(01_runHW02matrixAdditionTest matrixAddition_test.cpp)
target_link_libraries(01_runHW02matrixAdditionTest hw02_library gtest gtest_main)
