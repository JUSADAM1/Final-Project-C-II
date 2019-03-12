
#include "Employee.h"
class PartTime : private Employee
{
public:
	PartTime();
	~PartTime();
	void setHours();
	void setHourlyPay();
	void setWorkTime();
	void setWorkDays();
	void setWorkShift();

};
