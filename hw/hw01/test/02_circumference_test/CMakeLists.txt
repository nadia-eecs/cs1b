include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(02_runHW01CircumferenceTest circumference_test.cpp)
target_link_libraries(02_runHW01CircumferenceTest hw01_library gtest gtest_main)
