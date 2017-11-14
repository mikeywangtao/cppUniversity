#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "BasePlusCommissionEmployee04.h"

using namespace std;

BasePlusCommissionEmployee04::BasePlusCommissionEmployee04(const string &first
  , const string &last
  , const string &ssn
  , double sales
  , double rate
  , double salary)
    : CommissionEmployee04(first, last, ssn, sales, rate) {
	setBaseSalary(salary);
	cout << "BasePlusCommissionEmployee constructor: " << endl;
	print();
	cout << "\n\n";
}

BasePlusCommissionEmployee04::~BasePlusCommissionEmployee04() {
	cout << "BasePlusCommissionEmployee destructor: " << endl;
	print();
	cout << "\n\n";
}

void BasePlusCommissionEmployee04::setBaseSalary(double salary ) {
	baseSalary = (salary < 0.0) ? 0.0 : salary;
}

double BasePlusCommissionEmployee04::getBaseSalary() const {
	return baseSalary;
}

double BasePlusCommissionEmployee04::earnings() const {
	return getBaseSalary() + CommissionEmployee04::earnings();
}

void BasePlusCommissionEmployee04::print() const {
	cout << "base-salaried ";
	CommissionEmployee04::print();
	cout << "\nbase salary: " << getBaseSalary();
}


