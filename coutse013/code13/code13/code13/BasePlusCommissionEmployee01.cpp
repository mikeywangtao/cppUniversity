#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "BasePlusCommissionEmployee01.h"

using namespace std;

BasePlusCommissionEmployee01::BasePlusCommissionEmployee01(const string &first
	, const string &last
	, const string &ssn
	, double sales/*=0.0 */
	, double rate/*=0.0 */
	, double salary/*=0.0*/)
    : CommissionEmployee01(first, last, ssn, sales, rate){
	setBaseSalary(salary);
}

BasePlusCommissionEmployee01::~BasePlusCommissionEmployee01() {}

void BasePlusCommissionEmployee01::setBaseSalary(double salary ) {
	baseSalary = (salary < 0.0) ? 0.0 : salary;
}

double BasePlusCommissionEmployee01::getBaseSalary() const {
	return baseSalary;
}

double BasePlusCommissionEmployee01::earnings() const {
	return getBaseSalary() + CommissionEmployee01::earnings();
}

void BasePlusCommissionEmployee01::print() const {
	cout << "base-salaried \n  ";
	CommissionEmployee01::print();
	cout << "\nbase salary: " << getBaseSalary();
}






