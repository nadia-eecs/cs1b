include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(03_runHW05DoctorTypeTest doctorType_tests.cpp)
target_link_libraries(03_runHW05DoctorTypeTest hw05_library gtest gtest_main)
