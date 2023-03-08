//
// Created by Jorge on 07/03/2023.
//

#ifndef PROFESSORAPPLICATION_PERSON_H
#define PROFESSORAPPLICATION_PERSON_H

#include <string>
using namespace std;

class Person  {
protected:
    string name;
    bool isValidName(string n);
public:
    Person();
    Person (string n);
    void setName(string n);
    string getName();
    virtual string getId() = 0; //pure virtual function that has to be implemented by derived classes
    ~Person();

};



#endif //PROFESSORAPPLICATION_PERSON_H
