include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(00_runHW02GenerateNumTest generateNum_test.cpp)
target_link_libraries(00_runHW02GenerateNumTest hw02_library gtest gtest_main)
