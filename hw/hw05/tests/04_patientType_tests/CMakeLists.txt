include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(04_runHW05PatientTypeTest patientType_tests.cpp)
target_link_libraries(04_runHW05PatientTypeTest hw05_library gtest gtest_main)
