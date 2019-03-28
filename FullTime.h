#pragma once
#include "Employee.h"

class FullTime : private Employee
{
public:
	FullTime();
	FullTime(double salary, int shift, string benefits);
	~FullTime();
	void setSalary();
	void setBenefits();
	void setWorkStartTime();
	void setWorkEndTime();
	void setWorkShift();

	void getSalary();
	void getBenefits();
	void getWorkStartTime();
	void getWorkEndTime();
	void getWorkShift();

	void display();
	void display(bool workTime);
private:
	int shift;
	double salary;
	vector<double>workStartTime;
	vector<double>workEndTime;
	string benefits;

};

