#include "stdafx.h"
#include "FullTime.h"

/*
 * int shift;
	double salary;
	vector<double>workStartTime;
	vector<double>workEndTime;
	string benefits;
 */

FullTime::FullTime()
= default;

FullTime::FullTime(double salary, int shift, bool medical, bool _401k, bool dental) {
    this->salary = salary;
    this->shift = shift;
    this->medical = medical;
    this->_401k = _401k;
    this->dental = dental;
}

FullTime::~FullTime()
= default;


void FullTime::setSalary(double salary) {
    this->salary = salary;
}

void FullTime::setBenefits(bool medical, bool _401k, bool dental) {
    this->medical = medical;
    this->_401k = _401k;
    this->dental = dental;
}

void FullTime::setWorkStartTime(vector<double> startTime) {
    this->workStartTime = move(startTime);
}

void FullTime::setWorkEndTime(vector<double> endTime) {
    this->workEndTime = move(endTime);
}

void FullTime::setWorkShift(int shift) {
    this->shift = shift;
}

double FullTime::getSalary() {
    return salary;
}

void FullTime::getBenefits() {

    if(medical){
        cout << "Medical: True" << endl;
    }else{
        cout << "Medical: False" << endl;
    }

    if(_401k){
        cout << "401K: True" << endl;
    }else{
        cout << "401K: False" << endl;
    }

    if(dental){
        cout << "Dental: True" << endl;
    }else{
        cout << "Dental: False" << endl;
    }
}

vector<double> FullTime::getWorkStartTime() {
    return workStartTime;
}

vector<double> FullTime::getWorkEndTime() {
    return workEndTime;
}

int FullTime::getWorkShift() {
    return shift;
}

void FullTime::display(bool workTime) {
    Employee::display();
    cout << "Employee is Full Time" << endl;
    cout << "Shift: " << getWorkShift() << endl;
    cout << "Salary: $" << setprecision(10) << getSalary() << endl;
    getBenefits();
    if(workTime){
        cout << "Employee Work Hours" << endl;
        //Show Work time
    }
}
