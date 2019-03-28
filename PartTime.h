#pragma once
#include "Employee.h"
class PartTime : private Employee
{
public:
	PartTime();
	PartTime(double totalHours, double hourlyPay, int shift);
	~PartTime();
	void setTotalHours();
	void setHourlyPay();
	void setWorkStartTime();
	void setWorkEndTime();
	void setWorkDays();
	void setWorkShift();

	void getTotalHours();
	void getHourlyPay();
	void getWorkStart();
	void getWorkEnd();
	void getWorkDays();
	void getWorkShift();

	void display();
	void display(bool workTime);
private:
	int shift;
	double totalHours;
	double hourlyPay;
	vector<double> workStartTime;
	vector<double> workEndTime;
	vector<string> workDays;


};
