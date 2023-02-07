include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(02_runHW02ReverseDigitTest reverseDigit_test.cpp)
target_link_libraries(02_runHW02ReverseDigitTest hw02_library gtest gtest_main)
