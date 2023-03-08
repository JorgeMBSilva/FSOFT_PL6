//
// Created by Jorge on 07/03/2023.
//

#include "Grade.h"


bool Grade::isValidValue(int v) {
    if (v >= 0 && v <= 20) {
        return true;
    }
    return false;
}
Grade::Grade() {
    this->value = -1;
    this->subject = "";
}
Grade::Grade(float v, string s) {
    if (isValidValue(v)) {
        this->value = v;
    } else {
        this->value = -1;
    }
    this->subject = s;
}

float Grade::getValue() {
    return this->value;
}

void Grade::setValue(float v) {
    if (isValidValue(v)) {
        this->value=v;
    }
}

string Grade::getSubject() {
    return this->subject;
}
void Grade::setSubject(string s) {
    this->subject = s;
}
