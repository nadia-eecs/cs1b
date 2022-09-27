include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(03_runHW01AreaTest area_test.cpp)
target_link_libraries(03_runHW01AreaTest hw01_library gtest gtest_main)
