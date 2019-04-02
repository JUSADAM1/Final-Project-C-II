#ifndef FINAL_PROJECT_C_II_EMPLOYEE_H
#define FINAL_PROJECT_C_II_EMPLOYEE_H

#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>

using std::string;
using std::vector;
using std::move;
using std::cout;
using std::endl;
using std::setprecision;


class Employee
{
public:
	Employee();
	Employee(int ID, int companyLength, string firstName, string lastName, string project, string position);
	~Employee();
	void setID(int ID);
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
	string getProject();
	int getCompanyLength();

	int checkEmpID(int ID);
	string createEmail(string firstName, string LastName);

    virtual void display();
private:
	int ID = 0;
	int companyLength;
	string email;
	string firstName;
	string lastName;
	string project;
	string position;
	vector<int> empIDList;
	
};

#endif