include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(02_runHW03aEntryTest aEntry_test.cpp)
target_link_libraries(02_runHW03aEntryTest hw03_library gtest gtest_main)
