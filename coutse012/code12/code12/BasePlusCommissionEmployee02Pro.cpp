#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "BasePlusCommissionEmployee02.h"

using namespace std;

void disBpce02() {
	BasePlusCommissionEmployee02 employee("Bob", "Lewis", "333-44-5555", 5000, 0.04, 300);

	cout << fixed << setprecision(2);

	cout << "Employee information obtained by get functions: \n"
		<< "\nFirst name is : " << employee.getFirstName()
		<< "\nLast name is : " << employee.getLastName()
		<< "\nSocial security number is : " << employee.getSocialSecurityNumber()
		<< "\nGross sales is : " << employee.getGrossSales()
		<< "\nCommission rate is : " << employee.getCommissionRate()
		<< "\nBase salary is : " << employee.getBaseSalary() << endl;

	employee.setBaseSalyary(1000);
	cout << "\nUpdated employee information output by print function: \n" << endl;
	employee.print();

	cout << "\n\nEmployee`s earnings : $" << employee.earnings() << endl;

}