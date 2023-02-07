include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(08_runHW02AddTenTest addTen_test.cpp)
target_link_libraries(08_runHW02AddTenTest hw02_library gtest gtest_main)
