// FinalProjectCII.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include "Employee.h"
#include "PartTime.h"
#include "FullTime.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    //Part Time
    PartTime e (120.9, 21.67, 1);
    e.setID(1);
    e.setFirstName("Tommy");
    e.setLastName("Jones");
    e.setProject("Creating new Robots");
    e.setCompanyLength(12);
    e.setPosition("R & D");
    e.display(true);

    cout << "" << endl;

    FullTime f(120000.12, 1, true, true, false);
    f.setID(2);
    f.setFirstName("James");
    f.setLastName("Yason");
    f.setProject("Creating new Dashboards");
    f.setCompanyLength(2);
    f.setPosition("Programming");
    f.display(true);


    return 0;
}
