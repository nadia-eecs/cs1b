include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(04_runHW02RaisePow234Test raisePow2_3_4_test.cpp)
target_link_libraries(04_runHW02RaisePow234Test hw02_library gtest gtest_main)
