set(TEST_EXECUTABLE some_test)
set(TEST_SOURCE ${TEST_EXECUTABLE}.cc)

add_executable(${TEST_EXECUTABLE} ${TEST_SOURCE})

target_include_directories(${TEST_EXECUTABLE} PRIVATE ../cmake-tester)
add_test(NAME ${TEST_EXECUTABLE}
         COMMAND ${TEST_EXECUTABLE})

add_dependencies(${TEST_EXECUTABLE} cmake-tester)
