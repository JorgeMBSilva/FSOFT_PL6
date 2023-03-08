cmake_minimum_required(VERSION 3.21)
project(ProfessorApplication)

set(CMAKE_CXX_STANDARD 14)

set(PROJECT_HEADERS_DIR ${PROJECT_SOURCE_DIR}/headers)
set(PROJECT_SOURCES_DIR ${PROJECT_SOURCE_DIR}/sources)

include_directories(${PROJECT_HEADERS_DIR})
include_directories(${PROJECT_SOURCES_DIR})

set (
        SOURCE_FILES
        main.cpp
        ${PROJECT_HEADERS_DIR}/Student.h
        ${PROJECT_SOURCES_DIR}/Student.cpp
        ${PROJECT_HEADERS_DIR}/Professor.h
        ${PROJECT_SOURCES_DIR}/Professor.cpp
        ${PROJECT_HEADERS_DIR}/Person.h
        ${PROJECT_SOURCES_DIR}/Person.cpp
        ${PROJECT_HEADERS_DIR}/SchoolApplicationUI.h
        ${PROJECT_SOURCES_DIR}/SchoolApplicationUI.cpp
        headers/Grade.h sources/Grade.cpp)

add_executable(ProfessorApplication ${SOURCE_FILES})