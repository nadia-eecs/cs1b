include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(01_runHW01RadiusTest radius_test.cpp)
target_link_libraries(01_runHW01RadiusTest hw01_library gtest gtest_main)
