#pragma once
#include <string>
#include <vector>

using std::string;
using std::vector;

class Employee
{
public:
	Employee();
	Employee(int ID, int companyLength, string email, string firstName, string lastName, string project, string position);
	~Employee();
	void setID();
	void setEmail();
	void setFirstName();
	void setLastName();
	void setProject();
	void setCompanyLength();
	void setPosition();

	void getID();
	void getEmail();
	void getFirstName();
	void getLastName();
	void getPosition();
	void getCompanyLength();

	void display();
private:
	int ID;
	int companyLength;
	string email;
	string firstName;
	string lastName;
	string project;
	string position;
	
};

