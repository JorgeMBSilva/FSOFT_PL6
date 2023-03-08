//
// Created by Jorge on 23/02/2023.
//
#ifndef SCHOOLAPPLICATION_SCHOOLAPPLICATIONUI_H
#define SCHOOLAPPLICATION_SCHOOLAPPLICATIONUI_H

#include "Student.h"

class SchoolApplicationUI {
private:
    Student student;
public:
    int getOption();
    bool getGrade(string& subject, float& value);
    void printMenu();
    void run();
    bool exit();

};

#endif //SCHOOLAPPLICATION_SCHOOLAPPLICATIONUI_H
