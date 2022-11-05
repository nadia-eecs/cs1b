include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(11_runHW03DeleteAEntryTest deleteAEntry_test.cpp)
target_link_libraries(11_runHW03DeleteAEntryTest hw03_library gtest gtest_main)
