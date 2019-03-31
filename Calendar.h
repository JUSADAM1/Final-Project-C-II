#pragma once
#include <String>

using std::string;

class Calendar
{
public:
	Calendar();
	~Calendar();
    void setDays(string day);
    void setHours(double hours);
    void setTimeSlot(double timeSlot);

    string getDays();
    double getHours();
    double getTimeSlot();

    void display();
};

