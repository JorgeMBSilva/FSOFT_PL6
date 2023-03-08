//
// Created by Jorge on 07/03/2023.
//

#ifndef PROFESSORAPPLICATION_GRADE_H
#define PROFESSORAPPLICATION_GRADE_H

#include <string>
using namespace std;

class Grade {
private:
    float value;
    string subject;
    bool isValidValue(int v);
public:
    Grade();
    Grade(float v, string s);
    float getValue();
    void setValue(float v);
    string getSubject();
    void setSubject(string s);
};

#endif //PROFESSORAPPLICATION_GRADE_H
