#pragma once
#include "Employee.h"
class FullTime :
	private Employee
{
public:
	FullTime();
	~FullTime();
	void setSalary();
	void setBenefits();
	void setWorkTime();
	void setWorkShift();
};

