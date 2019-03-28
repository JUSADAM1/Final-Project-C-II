#pragma once
#include "Employee.h"

class FullTime : private Employee
{
public:
	FullTime();
	FullTime(double salary, int shift, string benefits);
	~FullTime();
	void setSalary(double salary);
	void setBenefits(string benefits);
	void setWorkStartTime(vector<double> startTime);
	void setWorkEndTime(vector<double> endTime);
	void setWorkShift(int shift);

	double getSalary();
	string getBenefits();
	vector<double> getWorkStartTime();
	vector<double> getWorkEndTime();
	int getWorkShift();

	void display() override;
	void display(bool workTime);
private:
	int shift;
	double salary;
	vector<double>workStartTime;
	vector<double>workEndTime;
	string benefits;

};

