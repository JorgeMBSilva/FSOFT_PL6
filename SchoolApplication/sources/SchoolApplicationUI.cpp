//
// Created by Jorge on 23/02/2023.
//

#include <iostream>
#include "SchoolApplicationUI.h"

using namespace std;

bool SchoolApplicationUI::exit() {
    char op;
    do {
        cout << "Exit? (y/n):";
        cin >> op;
    } while (op != 'y' && op != 'n' && op != 'Y' && op != 'N');
    if (op == 'y' || op == 'Y') {
        return true;
    }
    return false;
}

void SchoolApplicationUI::printMenu() {
    cout << "1 - Enter a new grade" << endl;
    cout << "2 - Calculate average" << endl;
    cout << "3 - Print grades" << endl;
}

int SchoolApplicationUI::getOption() {
    int op;
    do {
        cout << "Select option 1,2 or 3:";
        cin >> op;
    } while (op != 1 && op != 2 && op != 3);
    return op;
}

bool SchoolApplicationUI::getGrade(string& subject, float& grade) {
    cout << "Insert the subject name:";
    cin >> subject;
    cout << "Insert the grade value:";
    cin >> grade;
    if (grade < 0 || grade > 20) {
        return false;
    }
    return true;
}

void SchoolApplicationUI::run() {
    int op;
    float value;
    string subject;
    bool finishing = false;
    do {
        this->printMenu();
        op = this->getOption();
        switch (op) {
            case 1:
                if (getGrade(subject, value)) {
                    this->student.addGrade(subject, value);
                } else {
                    cout << "Invalid value, grade not added!" << endl;
                }
                break;
            case 2:
                value = this->student.getAverageGrades();
                cout << "The average is " << value << endl;
                break;
            case 3:
                this->student.printGrades();
                break;
        }
        finishing = this->exit();
    }while(!finishing);
}