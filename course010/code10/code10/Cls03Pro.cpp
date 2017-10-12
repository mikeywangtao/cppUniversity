#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "Cls03Employee.h"
#include "Cls03Static.h"

using namespace std;


void disCls03EmployeePro() {
	cout << "Number of employee before instantiation of any objects is" 
		<< Cls03Static::getIntNumber()
		<< endl;

	Cls03Employee *e1Ptr = new Cls03Employee("Susan", "Baker");
	cout << "\n\nEmployee 1 is : " 
		<< e1Ptr->getFirstName() << "" << e1Ptr->getLastName() 
		<< "\nNumber of employees after objects are instantiated is " 
		<< Cls03Static::getIntNumber()
		<< endl;

	Cls03Employee *e2Ptr = new Cls03Employee("Robert", "Jones");
	cout << "\n\nEmployee 2 is : "
		<< e2Ptr->getFirstName() << "" << e2Ptr->getLastName()
		<< "\nNumber of employees after objects are instantiated is "
		<< Cls03Static::getIntNumber()
		<< endl;

	delete e1Ptr;
	e1Ptr = 0;
	cout << "\n\nNumber if employees after objects are deleted is " 
		<< Cls03Static::getIntNumber() 
		<< endl;
	delete e2Ptr;
	e2Ptr = 0;
	cout << "\n\nNumber if employees after objects are deleted is "
		<< Cls03Static::getIntNumber() 
		<< endl;

}