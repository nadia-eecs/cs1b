include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(07_runHW02IsPrimeTest isPrime_test.cpp)
target_link_libraries(07_runHW02IsPrimeTest hw02_library gtest gtest_main)
