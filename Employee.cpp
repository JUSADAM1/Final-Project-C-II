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
= default;

Employee::Employee(int ID, int companyLength, string firstName, string lastName, string project,string position)
{
    ID = checkEmpID(ID);
    this->companyLength = companyLength;
    email = createEmail(firstName, lastName);
    this->firstName = move(firstName);
    this->lastName = move(lastName);
    this->project = move(project);
    this->position = move(position);
}

Employee::~Employee()
= default;


void Employee::setID(int ID) {
    this->ID = ID;
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
    this->position = move(position);
}

int Employee::getID() {
    return ID;
}

string Employee::getEmail() {
    return createEmail(this->firstName, this->lastName);
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

string Employee::getProject() {
    return project;
}

int Employee::getCompanyLength() {
    return companyLength;
}

void Employee::display() {
    cout << "ID: " << getID() << endl;
    cout << "First Name: " << getFirstName() << endl;
    cout << "Last Name: " << getLastName() << endl;
    cout << "Email: " << getEmail() << endl;
    cout << "Position: " << getPosition() << endl;
    cout << "Current Project: " << getProject() << endl;
    cout << "Been with the company for " << getCompanyLength() << " years." << endl;
}

int Employee::checkEmpID(int ID) {

    for(int i = 0; i < empIDList.size(); i++){

        if(empIDList[i] == ID){
            ID++;
        }else{
            empIDList.push_back(ID);
        }

    }

    return ID;
}

string Employee::createEmail(string firstName, string lastName) {
    string companyWebsite = "@myCompany.com";
    string fNameString;
    string lNameString;
    int fNameLength = 3;
    int lNameLength = 4;

    for(int i = 0; i < fNameLength; i++){
        fNameString += firstName[i];
    }

    for(int i = 0; i < lNameLength; i++){
        lNameString += lastName[i];
    }

    return fNameString + lNameString + companyWebsite;
}
