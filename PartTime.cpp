#include "PartTime.h"
/*
 * 	int shift;
	double totalHours;
	double hourlyPay;
	vector<double> workStartTime;
	vector<double> workEndTime;
	vector<string> workDays;
 */

PartTime::PartTime()
= default;

PartTime::PartTime(double totalHours, double hourlyPay, int shift){
    setTotalHours(totalHours);
    this->hourlyPay = hourlyPay;
    this->shift = shift;
}

PartTime::~PartTime()
= default;

void PartTime::setTotalHours(double totalHours) {

    try {
        if(totalHours > 20){
            throw "Part Time Employee must be less then 20 hours, Setting to Max Hours.";
        }

        this->totalHours = totalHours;

    }catch (char *mes){
        cout << mes << endl;
        this->totalHours = 20;
    }

}

void PartTime::setHourlyPay(double hourlyPay) {
    this->hourlyPay = hourlyPay;
}

void PartTime::setWorkStartTime(vector<double> startTime) {
    this->workStartTime = move(startTime);
}

void PartTime::setWorkEndTime(vector<double> endTime) {
    this->workEndTime = move(endTime);
}

void PartTime::setWorkDays(vector<string> workDays) {
    this->workDays = move(workDays);
}

void PartTime::setWorkShift(int shift) {
    this->shift = shift;
}

double PartTime::getTotalHours() {
    return totalHours;
}

double PartTime::getHourlyPay() {
    return hourlyPay;
}

vector<double> PartTime::getWorkStart() {
    return workStartTime;
}

vector<double> PartTime::getWorkEnd() {
    return workEndTime;
}

vector<string> PartTime::getWorkDays() {
    return workDays;
}

int PartTime::getWorkShift() {
    return shift;
}

void PartTime::display(bool workTime) {
    Employee::display();
    cout << "Employee is Part Time" << endl;
    cout << "Shift: " << getWorkShift() << endl;
    cout << "Pay Rate: $" << getHourlyPay() << "/h" << endl;
    if(workTime){
    cout << "Employee Work Hours" << endl;
    cout << "Total Hours: " << getTotalHours() << endl;
        //Show Work time
    }
}
