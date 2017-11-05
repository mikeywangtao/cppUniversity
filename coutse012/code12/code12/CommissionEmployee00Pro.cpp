#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cctype"
#include "cstdlib"
#include "string"
#include "vector"

#include "CommissionEmployee00.h"

using namespace std;

void disCe00Pro() {
	CommissionEmployee00 employee("Sue", "Jones", "222-22-2222", 10000, 0.06);
	cout << fixed << setprecision(2);

	cout << "Employee information obtained by get functions: \n"
		<< "\nFirst name is --" << employee.getFirstName()
		<< "\nLast name is --" << employee.getLastName()
		<< "\nSocial security number is --" << employee.getSocialSecurityNumber()
		<< "\nGross sales is --" << employee.getGrossSales()
		<< "\nCommission rate is --" << employee.getCommissionRate() << endl;

	employee.setGrossSales(8000);
	employee.setCommissionRate(0.1);
	cout << "\nUpdated employee information output by print function : \n" << endl;
	employee.print();

	cout << "\n\nEmployee`s earnings: $" << employee.earnings() << endl;
}