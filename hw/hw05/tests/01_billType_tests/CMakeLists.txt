include_directories(${gtest_SOURCE_DIR}/include${gtest_SOURCE_DIR})

add_executable(01_runHW05BillTypeTest billType_tests.cpp)
target_link_libraries(01_runHW05BillTypeTest hw05_library gtest gtest_main)
