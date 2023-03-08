#include "gtest/gtest.h"
#include "tests/test_student.cpp"
#include "tests/test_grade.cpp"

int main (int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}