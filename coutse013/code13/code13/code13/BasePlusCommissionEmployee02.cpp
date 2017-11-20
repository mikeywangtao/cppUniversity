#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "BasePlusCommissionEmployee02.h"
#include "CommissionEmployee02.h"

using namespace std;

BasePlusCommissionEmployee02::BasePlusCommissionEmployee02(const string &first
	, const string &last
	, const string &ssn
	, double sales/*=0.0 */
	, double rate/*=0.0 */
	, double salary/*=0.0*/)
    : CommissionEmployee02(first, last, ssn, sales, rate){
	setBaseSalary(salary);
}

//BasePlusCommissionEmployee02::BasePlusCommissionEmployee02() {}


BasePlusCommissionEmployee02::~BasePlusCommissionEmployee02() {}

void BasePlusCommissionEmployee02::setBaseSalary(double salary ) {
	baseSalary = (salary < 0.0) ? 0.0 : salary;
}

double BasePlusCommissionEmployee02::getBaseSalary() const {
	return baseSalary;
}

double BasePlusCommissionEmployee02::earnings() const {
	return getBaseSalary() + CommissionEmployee02::earnings();
}

void BasePlusCommissionEmployee02::print() const {
	cout << "base-salaried \n  ";
	CommissionEmployee02::print();
	cout << "\nbase salary: " << getBaseSalary();
}

