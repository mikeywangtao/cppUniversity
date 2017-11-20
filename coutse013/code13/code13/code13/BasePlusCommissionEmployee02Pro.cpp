#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "CommissionEmployee02.h"
#include "BasePlusCommissionEmployee02.h"

using namespace std;

void disBpce02Pro() {
	CommissionEmployee02 commissionEmployee02("Sue", "Jones", "222-22-2222", 10000, 0.06);
	CommissionEmployee02 *ptrCommissionEmployee02 = 0;

	BasePlusCommissionEmployee02 basePlusCommissionEmployee02("Bob", "Lewis", "333-33-3333", 5000, 0.04, 300);
	BasePlusCommissionEmployee02 *ptrBasePlusCommissionEmployee02 = 0;

	cout << fixed << setprecision(2);

	cout << "Invoking print function on base-class and derived-class "
		<< "\nobjects with static binding\n\n ";
	commissionEmployee02.print();
	cout << "\n\n";
	basePlusCommissionEmployee02.print();

	cout << "\n\nInvoking print function on base-class and "
		<< "derived-class \nobjects with dynamic binding";

	ptrCommissionEmployee02 = &commissionEmployee02;
	cout << "\n\nCalling virtual function print with base-class pointer "
		<< "\nto base-class object invokes base-class "
		<< "print function:\n\n";
	ptrCommissionEmployee02->print();

	ptrBasePlusCommissionEmployee02 = &basePlusCommissionEmployee02;
	cout << "\n\nCalling virtual function print with derived-class "
		<< "pointer \nto derived-class object invokes derived-class "
		<< "print function: \n\n";
	ptrBasePlusCommissionEmployee02->print();

	ptrCommissionEmployee02 = &basePlusCommissionEmployee02;
	cout << "\n\nCalling virtual function print with base-class pointer "
		<< "\nto derived-class object invokes derived-class "
		<< "print function: \n\n";
	ptrCommissionEmployee02->print();
	cout << endl;
}