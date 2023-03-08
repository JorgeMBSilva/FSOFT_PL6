//
// Created by Jorge on 24/02/2023.
//

#include "gtest/gtest.h"
#include "Student.h"

TEST(Initialization, Init) {
    Student s = Student("Pedro");
    EXPECT_EQ("Pedro", s.getName());
}

TEST(AddGrade, newGrade) {
    Student s = Student("Pedro");
    s.addGrade("Math", 10.0);
    EXPECT_EQ(s.getAverageGrades(),10.0);
}

TEST(AverageFunction, average) {
    Student s = Student();
    s.addGrade("Math", 5.0);
    s.addGrade("FSOFT", 15.0);
    s.addGrade("APROG", 10.0);
    EXPECT_DOUBLE_EQ(s.getAverageGrades(), 10.0);
}
//some tests are missing...