#pragma once
#include "Employee.h"


class PartTime : public Employee
{
public:
	PartTime();
	PartTime(double totalHours, double hourlyPay, int shift);
	~PartTime();
	void setTotalHours(double totalHours);
	void setHourlyPay(double hourlyPay);
	void setWorkStartTime(vector<double> startTime);
	void setWorkEndTime(vector<double> endTime);
	void setWorkDays(vector<string> workDays);
	void setWorkShift(int shift);

	double getTotalHours();
	double getHourlyPay();
    vector<double> getWorkStart();
    vector<double> getWorkEnd();
    vector<string> getWorkDays();
	int getWorkShift();

	void display(bool workTime);
private:
	int shift;
	double totalHours;
	double hourlyPay;
	vector<double> workStartTime;
	vector<double> workEndTime;
	vector<string> workDays;



};
