include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(02_runHW05DateTypeTest dateType_tests.cpp)
target_link_libraries(02_runHW05DateTypeTest hw05_library gtest gtest_main)
