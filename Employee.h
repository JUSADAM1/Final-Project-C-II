#pragma once
#include <string>

using std::string;

class Employee
{
public:
	Employee();
	~Employee();
	void setID();
	void setEmail();
	void setFirstName();
	void setLastName();
	void setProject();
	void setCompanyLength();
	void setPosition();
	void getID();
private:
	int ID;
	string email;
	string firstName;
	string lastName;
	string project;
	//TestS
};

