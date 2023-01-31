include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(00_runHW03fileIOTest fileIO_test.cpp)
target_link_libraries(00_runHW03fileIOTest hw03_library gtest gtest_main)
