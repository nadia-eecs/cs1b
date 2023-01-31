include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(01_runHW03matrixAdditionTest matrixAddition_test.cpp)
target_link_libraries(01_runHW03matrixAdditionTest hw03_library gtest gtest_main)
