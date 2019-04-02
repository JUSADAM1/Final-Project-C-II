#pragma once
#include "Employee.h"

class FullTime : public Employee
{
public:
	FullTime();
	FullTime(double salary, int shift, bool medical, bool _401k, bool dental);
	~FullTime();
	void setSalary(double salary);
	void setBenefits(bool medical, bool _401k, bool dental);
	void setWorkStartTime(vector<double> startTime);
	void setWorkEndTime(vector<double> endTime);
	void setWorkShift(int shift);

	double getSalary();
	void getBenefits();//Also Displays
	vector<double> getWorkStartTime();
	vector<double> getWorkEndTime();
	int getWorkShift();

	void display(bool workTime);

private:
	int shift;
	double salary;
	vector<double>workStartTime;
	vector<double>workEndTime;
	bool medical;
	bool _401k;
	bool dental;

};

