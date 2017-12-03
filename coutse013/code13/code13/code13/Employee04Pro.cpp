#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "vector"
#include "string"

#include "Employee03.h"
#include "SalariedEmployee03.h"
#include "HourlyEmployee03.h"
#include "CommissionEmployee03.h"
#include "BasePlusCommissionEmployee03.h"

using namespace std;

void disEmployee04Pro() {
	cout << fixed << setprecision(2);

	vector <Employee03 *> employee04(4);
	employee04[0] = new SalariedEmployee03(
	  "John", "Smith", "111-11-1111", 800);
	employee04[1] = new HourlyEmployee03(
	  "Karen", "Price", "222-22-2222", 16.75, 40);
	employee04[2] = new CommissionEmployee03(
	  "Sue", "Jones", "333-33-3333", 10000, 0.06);
	employee04[3] = new BasePlusCommissionEmployee03(
	  "Bob", "Lewis", "444-44-4444", 5000, 0.04, 300);

	for (size_t i = 0; i < employee04.size(); i++) {
		employee04[i]->print();
		cout << endl;

		BasePlusCommissionEmployee03 *derivedPtr =
			dynamic_cast <BasePlusCommissionEmployee03 *> (employee04[i]);
		if (derivedPtr != 0) {
			double oldBaseSalary = derivedPtr->getBaseSalary();
			cout << "old base salary: $" << oldBaseSalary << endl;
			derivedPtr->setBaseSalary(1.10 * oldBaseSalary);
			cout << "new base salary with 10% increase is : $" << derivedPtr->getBaseSalary() << endl;
		}

		cout << "earned $ " << employee04[i]->earnings() << "\n\n";
	}

	for (size_t i = 0; i < employee04.size(); i++) {
		cout << "" << typeid( *employee04[i]).name() << endl;
		delete employee04[i];
	}

}