//
// Created by Jorge on 07/03/2023.
//

#include "gtest/gtest.h"
#include "Grade.h"

TEST(GradeClass, valueInit) {
    Grade g = Grade(15, "Math");
    EXPECT_EQ(g.getSubject(), "Math");
    EXPECT_DOUBLE_EQ(g.getValue(), 15);
}

//some tests are missing