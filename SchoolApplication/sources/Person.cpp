//
// Created by Jorge on 07/03/2023.
//

#include <Person.h>
#include <iostream>

using namespace std;

Person::Person() {
    setName("Undefined");
}
Person::Person(string n) {
    setName(n);
}
Person::~Person() {

}

bool Person::isValidName(string n) {
    if (n.length() < 3) {
        return false;
    }
    return true;
}

void Person::setName(string n) {
    if (isValidName(n)) {
        this->name = n;
    }
    else {
        cout << "Name is not valid" << endl;
    }
}

string Person::getName() {
    return this->name;
}