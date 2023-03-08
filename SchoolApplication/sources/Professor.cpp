//
// Created by Jorge on 01/03/2023.
//

#include "Professor.h"

Professor::Professor() : Person() {
    this->initials = "---";
    this->n_students = 0;
}

Professor::Professor(string n, string i) : Person(n){
    this->initials = i;
    this->n_students = 0;
}

int Professor::getNStudents() {
    return this->n_students;
}

void Professor::increaseStudents() {
    this->n_students++;
}

string Professor::getInitials() {
    return this->initials;
}

string Professor::getId() {
    string id_str;
    id_str = this->getInitials() + " - " + this->getName();
    return id_str;
}