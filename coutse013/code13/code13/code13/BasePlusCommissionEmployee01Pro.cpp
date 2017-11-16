#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include  "string"
#include "vector"

#include "CommissionEmployee01.h"
#include "BasePlusCommissionEmployee01.h"

using namespace std;

void dis01Pro() {
	CommissionEmployee01 commissionEmployee01("Sue", "Jones", "222-22-2222", 10000, 0.06);
	CommissionEmployee01 *ptr_comissionEmployee01 = 0;

	BasePlusCommissionEmployee01 basePlusCommissionEmployee01("Bob", "Lewis", "333-33-3333", 5000, 0.04, 300);
	BasePlusCommissionEmployee01 *ptr_baseCommissionEmployee01 = 0;
	
	cout << fixed << setprecision(2);

	cout << "Print base-class and derived-class objects: \n\n";
	commissionEmployee01.print();
	cout << "\n\n";
	basePlusCommissionEmployee01.print();

	ptr_comissionEmployee01 = &commissionEmployee01;
	cout << "\n\nCalling print with base-class pointer to "
		<< "\nbase-class object invokes base-class print function: \n\n";
	ptr_comissionEmployee01->print();

	ptr_baseCommissionEmployee01 = &basePlusCommissionEmployee01;
	cout << "\n\nCalling print with derived-class pointer to "
		<< "\nderived-class object invokes derived-class "
		<< "print function: \n\n";
	ptr_baseCommissionEmployee01->print();

	ptr_comissionEmployee01 = &basePlusCommissionEmployee01;
	cout << "\n\nCalling print with base-class pointer to "
		<< "derived-class object\n  invokes base-class print "
		<< "function on that derived-class object: \n\n";
	ptr_comissionEmployee01->print();
	cout << endl;
}