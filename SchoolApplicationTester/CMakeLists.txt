cmake_minimum_required(VERSION 3.21)
project(SchoolApplicationTester)

set(CMAKE_CXX_STANDARD 14)

set(PROJECT_HEADERS_DIR ../SchoolApplication/headers)
set(PROJECT_SOURCES_DIR ../SchoolApplication/sources)
include_directories(${PROJECT_HEADERS_DIR})
include_directories(${PROJECT_SOURCES_DIR})
set(GOOGLE_TEST_LIB ${PROJECT_SOURCE_DIR}/googleTestLib/googletest-main)
set(GOOGLE_TEST_LIB_INCLUDE ${GOOGLE_TEST_LIB}/googletest/include)
add_subdirectory(${GOOGLE_TEST_LIB})
include_directories(${GOOGLE_TEST_LIB_INCLUDE})
set(SOURCE_FILES
        main.cpp
        ${PROJECT_HEADERS_DIR}/Person.h
        ${PROJECT_SOURCES_DIR}/Person.cpp
        ${PROJECT_HEADERS_DIR}/Professor.h
        ${PROJECT_SOURCES_DIR}/Professor.cpp
        ${PROJECT_HEADERS_DIR}/Student.h
        ${PROJECT_SOURCES_DIR}/Student.cpp
        ${PROJECT_HEADERS_DIR}/Grade.h
        ${PROJECT_SOURCES_DIR}/Grade.cpp
        tests/test_professor.cpp)

add_executable(SchoolApplicationTester  ${SOURCE_FILES} )
target_link_libraries(SchoolApplicationTester gtest gtest_main)
