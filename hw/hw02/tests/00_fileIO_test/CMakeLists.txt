include_directories(${gtest_SOUURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(00_runHW02fileIOTest fileIO_test.cpp)
target_link_libraries(00_runHW02fileIOTest hw02_library gtest gtest_main)
