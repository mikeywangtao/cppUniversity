#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "Cls03Employee.h"

using namespace std;


Cls03Employee::Cls03Employee(const char *const first, const char *const last) {
	firstName = new char[strlen(first)+1];
	strcpy(firstName, first);
	lastName = new char[strlen(last)+1];
	strcpy(lastName, last);

	objCls03static.setAddIntNumber();

	cout << "Employee constructor for " << firstName << ' ' << lastName << " called." << endl;
}

Cls03Employee::~Cls03Employee() {
	cout << "~Emplyee() called for  " << firstName << ' ' << lastName << endl;

	delete[]firstName;
	delete[]lastName;

	objCls03static.setSubIntNumber();
}

char * Cls03Employee::getFirstName() {
	return firstName;
}

char * Cls03Employee::getLastName() {
	return lastName;
}
