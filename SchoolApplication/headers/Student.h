//
// Created by Jorge on 23/02/2023.
//

#ifndef SCHOOLAPPLICATION_STUDENT_H
#define SCHOOLAPPLICATION_STUDENT_H

#define MAX_GRADES 20
#include <string>
#include "Person.h"
#include "Grade.h"

using namespace std;

class Student : public Person {
private:
    static int NUMBER;
    int number;
    int n_grades;
    Grade grades [MAX_GRADES];

public:
    Student();
    Student(string n);
    int getNumber();
    void addGrade(string s, float v);
    float getAverageGrades();
    void printGrades();
    string getId();

};

#endif //SCHOOLAPPLICATION_STUDENT_H
