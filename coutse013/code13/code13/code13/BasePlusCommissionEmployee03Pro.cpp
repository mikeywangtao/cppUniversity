#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "Employee03.h"
#include "SalariedEmployee03.h"
#include "HourlyEmployee03.h"
#include "CommissionEmployee03.h"
#include "BasePlusCommissionEmployee03.h"

using namespace std;

void virtualViaPointer(const Employee03 *const baseClassPtr);
void virtualViaRerence(const Employee03 &baseClassRef);

void disBpce03Pro() {
	cout << fixed << setprecision(2);

	SalariedEmployee03 salaried03(
	  "John", "Smith", "111-11-1111", 800);
	HourlyEmployee03 hourly03(
	  "Karen", "Price", "222-22-2222", 16.75, 40);
	CommissionEmployee03 commission03(
		"Sue", "Jones", "333-33-3333", 10000, 0.06);
	BasePlusCommissionEmployee03 base03(
	  "Bob", "Lewis", "444-44-4444", 5000, 0.04, 300);

	cout << "Employee processed individually using static binding:\n\n";

	salaried03.print();
	cout << "\nearned $ " << salaried03.earnings() << "\n\n";

	hourly03.print();
	cout << "\nearned $ " << hourly03.earnings() << "\n\n";

	commission03.print();
	cout << "\nearned $ " << commission03.earnings() << "\n\n";

	base03.print();
	cout << "\nearned $ " << base03.earnings() << "\n\n";

	vector < Employee03* > employee03(4);
	employee03[0] = &salaried03;
	employee03[1] = &hourly03;
	employee03[2] = &commission03;
	employee03[3] = &base03;

	cout << "Employee processed polymorphically via dynamic binding: \n\n";
	cout << "Virtual function calls made off base-class pointers: \n\n";
	for (size_t i = 0; i < employee03.size(); i++) {
		virtualViaPointer(employee03[i]);
	}

	cout << "Virtual function calls made off base-class references: \n\n";
	for (size_t i = 0; i<employee03.size(); i++){
		virtualViaRerence(*employee03[i]);
	}

}

void virtualViaPointer(const Employee03 *const baseClassPtr) {
	baseClassPtr->print();
	cout << "\nearned $ " << baseClassPtr->earnings() << "\n\n";
}

void virtualViaRerence(const Employee03 &baseClassRef) {
	baseClassRef.print();
	cout << "\nearned $ " << baseClassRef.earnings() << "\n\n";
}

