include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(02_runHW04aEntryTest aEntry_test.cpp)
target_link_libraries(02_runHW04aEntryTest hw04_library gtest gtest_main)
