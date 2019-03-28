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

FullTime::FullTime(double salary, int shift, string benefits) {
    this->salary = salary;
    this->shift = shift;
    this->benefits = move(benefits);
}

FullTime::~FullTime()
= default;


void FullTime::setSalary(double salary) {
    this->salary = salary;
}

void FullTime::setBenefits(string benefits) {
    this->benefits = move(benefits);
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

string FullTime::getBenefits() {
    return benefits;
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

void FullTime::display() {
    Employee::display();
}

void FullTime::display(bool workTime) {

}
