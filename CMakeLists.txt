cmake_minimum_required(VERSION 3.10)
project(lab_oop_1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

add_subdirectory(googletest) 

add_executable(tests test.cpp func.cpp) 
add_executable(main main.cpp func.cpp)

target_link_libraries(tests PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(tests)