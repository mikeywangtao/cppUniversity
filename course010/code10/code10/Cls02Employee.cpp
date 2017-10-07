#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "Cls02Employee.h"

using namespace std;


Cls02Employee::Cls02Employee(const char *const first
	, const char *const last
	, const Cls02Date &dateOfBirth
	, const Cls02Date &dateOfHire):
    birtDate(dateOfBirth),
		hireDate(dateOfHire){
	int length = strlen(first);
	length = (length<25? length : 24);
	strncpy(firstName, first, length);
	firstName[length] = '\0';

	length = strlen(last);
	length = (length<25? length : 24);
	strncpy(lastName, last, length);
	lastName[length] = '\0';

	cout << "Employee object constructor: " 
		<< firstName << " " << lastName << endl;
}

Cls02Employee::~Cls02Employee() {
	cout << "Employee object destructor: " << lastName << ", " << firstName << endl;
}

void Cls02Employee::print() const {
	cout << lastName << ", " << firstName << "  Hired: ";
	hireDate.print();

	cout << "  Birthday: ";
	birtDate.print();

	cout << endl;
}
