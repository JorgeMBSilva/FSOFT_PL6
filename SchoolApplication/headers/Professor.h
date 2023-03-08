//
// Created by Jorge on 28/02/2023.
//

#ifndef PROFESSORAPPLICATION_PROFESSOR_H
#define PROFESSORAPPLICATION_PROFESSOR_H

#include "Person.h"
#include <string>
using namespace std;

class Professor : public Person {
private:
    string initials;
    int n_students;

public:
    Professor();
    Professor(string n, string i);
    string getInitials();
    int getNStudents();
    void increaseStudents();
    string getId();

};

#endif //PROFESSORAPPLICATION_PROFESSOR_H

