include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(03_runHW02SumDigitsTest sumDigits_test.cpp)
target_link_libraries(03_runHW02SumDigitsTest hw02_library gtest gtest_main)
