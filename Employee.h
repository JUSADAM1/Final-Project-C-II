#ifndef FINAL_PROJECT_C_II_EMPLOYEE_H
#define FINAL_PROJECT_C_II_EMPLOYEE_H

#pragma once
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::move;
class Employee
{
public:
	Employee();
	Employee(int ID, int companyLength, string email, string firstName, string lastName, string project, string position);
	~Employee();
	void setID(int ID);
	void setEmail(string email);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setProject(string project);
	void setCompanyLength(int companyLength);
	void setPosition(string position);

	int getID();
	string getEmail();
	string getFirstName();
	string getLastName();
	string getPosition();
	int getCompanyLength();

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

#endif