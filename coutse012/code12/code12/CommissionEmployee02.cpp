#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "CommissionEmployee02.h"

using namespace std;

//CommissionEmployee02::CommissionEmployee02() {}


CommissionEmployee02::~CommissionEmployee02() {}

CommissionEmployee02::CommissionEmployee02(const string &first
	, const string &last
	, const string &ssn
	, double sales/*=0.0 */
	, double rate/*=0.0*/) {
	firstName = first;
	lastName = last;
	socialSecurityNumber = ssn;
	setGrossSales(sales);
	setCommissionRate(rate);
}

void CommissionEmployee02::setFirstName(const string &first) {
	firstName = first;
}

std::string CommissionEmployee02::getFirstName() const {
	return firstName;
}

void CommissionEmployee02::setLastName(const string &last) {
	lastName = last;
}

std::string CommissionEmployee02::getLastName() const {
	return lastName;
}

void CommissionEmployee02::setSocialSecurityNumber(const string &ssn) {
	socialSecurityNumber = ssn;
}

std::string CommissionEmployee02::getSocialSecurityNumber() const {
	return socialSecurityNumber;
}

void CommissionEmployee02::setGrossSales(double sales) {
	grossSales = (sales < 0.0) ? 0.0 : sales;
}

double CommissionEmployee02::gtGrossSales() const {
	return grossSales;
}

void CommissionEmployee02::setCommissionRate(double rate) {
	commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}

double CommissionEmployee02::getCommissionRate() const {
	return commissionRate;
}

double CommissionEmployee02::earnings() const {
	return commissionRate * grossSales;
}

void CommissionEmployee02::print() const {
	cout << "commission employee: " << firstName << ' ' << lastName
		<< "\nsocial security number: " << socialSecurityNumber
		<< "\ngross sales: " << grossSales
		<< "\ncommission rate: " << commissionRate;
}






