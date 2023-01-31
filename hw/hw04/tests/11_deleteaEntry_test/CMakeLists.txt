include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(11_runHW04DeleteAEntryTest deleteAEntry_test.cpp)
target_link_libraries(11_runHW04DeleteAEntryTest hw04_library gtest gtest_main)
