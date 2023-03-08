//
// Created by Jorge on 23/02/2023.
//

#include "Student.h"
#include <iostream>

using namespace std;

int Student::NUMBER = 0;

Student::Student() : Person() {
    this->number = ++NUMBER;
    this->n_grades = 0;
    //initialize all the grades with value -1
    for (int i = 0; i < MAX_GRADES; i++) {
        this->grades[i] = Grade(-1, "");
    }

}

Student::Student(string n) : Person(n){
    this->number = ++NUMBER;
    this->n_grades = 0;
    //initialize all the grades with value -1
    for (int i = 0; i < MAX_GRADES; i++) {
        this->grades[i] = Grade(-1, "");
    }
}

int Student::getNumber() {
    return this->number;
}

void Student::addGrade(string s, float v) {
    //verify that it is possible to add another grade
    if (this->n_grades < MAX_GRADES) {
        this->grades[this->n_grades].setSubject(s);
        this->grades[this->n_grades].setValue(v);
        this->n_grades++;
    }
}

float Student::getAverageGrades() {
    float total = 0;
    for (int i=0; i < this->n_grades; i++) {
        total += this->grades[i].getValue();
    }
    return total / (float)this->n_grades;
}

void Student::printGrades() {
    cout << "Current grades:" << endl;
    for (int i=0; i<this->n_grades; i++) {
        cout << this->grades[i].getSubject() << " - ";
        cout << this->grades[i].getValue() << endl;
    }
}

string Student::getId() {
    string id_str;
    id_str = to_string(this->getNumber()) + " - " + this->getName();
    return id_str;
}