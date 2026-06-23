add_executable(savant_tests test_main.cpp)
target_link_libraries(savant_tests PRIVATE GTest::gtest GTest::gtest_main)
add_test(NAME savant_tests COMMAND savant_tests)