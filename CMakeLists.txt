cmake_minimum_required(VERSION 3.14)
project(OOP_LABA_1)

set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)

add_executable(oop_laba_1
    src/main.cpp
    src/change_letter.cpp
)

add_executable(test_change_letter
    test/test_main.cpp
    test/test_change_letter.cpp
    src/change_letter.cpp
)

target_link_libraries(test_change_letter GTest::GTest GTest::Main)
target_include_directories(oop_laba_1 PRIVATE include)
target_include_directories(test_change_letter PRIVATE include)