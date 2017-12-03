#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "BasePlusCommissionEmployee03.h"


//BasePlusCommissionEmployee03::BasePlusCommissionEmployee03() {}
BasePlusCommissionEmployee03::BasePlusCommissionEmployee03(const string &first
	, const string &last
	, const string &ssn
	, double sales/*=0.0 */
	, double rate/*=0.0 */
	, double salary/*=0.0*/)
    : CommissionEmployee03(first, last, ssn, sales, rate){
	setBaseSalary(salary);
}

BasePlusCommissionEmployee03::~BasePlusCommissionEmployee03() {}

void BasePlusCommissionEmployee03::setBaseSalary(double salary ) {
	baseSalary = (salary < 0.0) ? 0.0 : salary;
}

double BasePlusCommissionEmployee03::getBaseSalary() const {
	return baseSalary;
}

double BasePlusCommissionEmployee03::earnings() const {
	return getBaseSalary() + CommissionEmployee03::earnings();
}

void BasePlusCommissionEmployee03::print() const {
	cout << "base-salaried!";
	CommissionEmployee03::print();
	cout << "; base salary: " << getBaseSalary();
}

