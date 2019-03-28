#include <utility>

#include "Employee.h"
/*
 * int ID;
	int companyLength;
	string email;
	string firstName;
	string lastName;
	string project;
	string position;
 */

Employee::Employee()
{
}

Employee::Employee(int ID, int companyLength, string email, string firstName, string lastName, string project,string position)
{
    this->ID = ID;
    this->companyLength = companyLength;
    this->email = move(email);
    this->firstName = move(firstName);
    this->lastName = move(lastName);
    this->project = move(project);
    this->position = move(position);
}

Employee::~Employee()
{
}


void Employee::setID(int ID) {
    this->ID = ID;
}

void Employee::setEmail(string email) {
    this->email = move(email);
}

void Employee::setFirstName(string firstName) {
    this->firstName = move(firstName);
}

void Employee::setLastName(string lastName) {
    this->lastName = move(lastName);
}

void Employee::setProject(string project) {
    this-> project = move(project);
}

void Employee::setCompanyLength(int companyLength) {
    this-> companyLength = companyLength;
}

void Employee::setPosition(string position) {
    this->project = move(position);
}

int Employee::getID() {
    return ID;
}

string Employee::getEmail() {
    return email;
}

string Employee::getFirstName() {
    return firstName;
}

string Employee::getLastName() {
    return lastName;
}

string Employee::getPosition() {
    return position;
}

int Employee::getCompanyLength() {
    return companyLength;
}

void Employee::display() {

}
