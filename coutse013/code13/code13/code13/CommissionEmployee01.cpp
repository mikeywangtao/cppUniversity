#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "CommissionEmployee01.h"

using namespace std;

CommissionEmployee01::CommissionEmployee01(const string &first
  , const string &last
  , const string &ssn
  , double sales/*=0.0*/
  , double rate/*=0.0*/)
    : firstName(first), lastName(last), soicalSecurityNumber(ssn){
	setGrossSales(sales);
	setCommissionRate(rate);
}

CommissionEmployee01::~CommissionEmployee01() {}

void CommissionEmployee01::setFirstName(const string &first) {
	firstName = first;
}

std::string CommissionEmployee01::getFistName() const {
	return firstName;
}

void CommissionEmployee01::setLastName(const string &last) {
	lastName = last;
}

std::string CommissionEmployee01::getLastName() const {
	return lastName;
}

void CommissionEmployee01::setSocialSecurityNumber(const string &ssn) {
	soicalSecurityNumber = ssn;
}

std::string CommissionEmployee01::getSoicalSecurityNumber() const {
	return soicalSecurityNumber;
}

void CommissionEmployee01::setGrossSales(double sales ) {
	grossSales = (sales < 0.0) ? 0.0 : sales;
}

double CommissionEmployee01::getGrossSales() const {
	return grossSales;
}

void CommissionEmployee01::setCommissionRate(double rate ) {
	commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}

double CommissionEmployee01::getCommissionRate() const {
	return commissionRate;
}

double CommissionEmployee01::earnings() const {
	return getCommissionRate() * getGrossSales();
}

void CommissionEmployee01::print() const {
	cout << "commission employee: " << getFistName() << ' ' << getLastName()
		<< "\nsocial security number: " << getSoicalSecurityNumber()
		<< "\ngross sales: " << getGrossSales()
		<< "\ncommission rate: " << getCommissionRate();
}











