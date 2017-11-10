#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cctype"
#include "cstdlib"
#include "string"
#include "vector"

#include "BasePlusCommissionEmployee02.h"

using namespace std;

//BasePlusCommissionEmployee02::BasePlusCommissionEmployee02() {}
BasePlusCommissionEmployee02::~BasePlusCommissionEmployee02() {}

BasePlusCommissionEmployee02::BasePlusCommissionEmployee02(const string &first
	, const string &last
	, const string &ssn
	, double sales/*= 0.0 */
	, double rate/*= 0.0 */
	, double salary/*= 0.0*/)
    : CommissionEmployee02(first, last, ssn, sales, rate){
	setBaseSalyary(salary);

}

void BasePlusCommissionEmployee02::setBaseSalyary(double salary ) {
	baseSalary = (salary < 0.0) ? 0.0 : salary;
}

double BasePlusCommissionEmployee02::getBaseSalary() const {
	return baseSalary;
}

double BasePlusCommissionEmployee02::earnings() const {
	return baseSalary + (commissionRate * grossSales);
}

void BasePlusCommissionEmployee02::print() const {
	cout << "base-salaried commission employee: " << firstName << ' ' << lastName
		<< "\nsocial security number: " << socialSecurityNumber
		<< "\ngross sales: " << grossSales
		<< "\ncommission rate: " << commissionRate
		<< "\nbase salary: " << baseSalary;
}



