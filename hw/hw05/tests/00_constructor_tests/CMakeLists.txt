include_directories(${gtest_SOURCE_DIR}/include${gtest_SOURCE_DIR})

add_executable(00_runHW05ConstructorTest constructor_tests.cpp)
target_link_libraries(00_runHW05ConstructorTest hw05_library gtest gtest_main)
