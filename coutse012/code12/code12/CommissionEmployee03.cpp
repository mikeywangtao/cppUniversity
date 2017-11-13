#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "CommissionEmployee03.h"

using namespace std;

//CommissionEmployee03::CommissionEmployee03() {}
CommissionEmployee03::~CommissionEmployee03() {}

CommissionEmployee03::CommissionEmployee03(const string &first
	, const string &last
	, const string &ssn
	, double sales/*=0.0 */
	, double rate/*=0.0 */) 
    : firstName(first), lastName(last), socialSecurityNumber(ssn){
	setGrossSales(sales);
	setCommissionRate(rate);
}

void CommissionEmployee03::setFirstName(const string &first) {
	firstName = first;
}

std::string CommissionEmployee03::getFirsrtName() const {
	return firstName;
}

void CommissionEmployee03::setLastName(const string &last) {
	lastName = last;
}

std::string CommissionEmployee03::getLastName() const {
	return lastName;
}

void CommissionEmployee03::setSocialSecurityNumber(const string &ssn) {
	socialSecurityNumber = ssn;
}

std::string CommissionEmployee03::getSocialSecurityNumber() const {
	return socialSecurityNumber;
}

void CommissionEmployee03::setGrossSales(double sales) {
	grossSales = (sales < 0.0) ? 0.0 : sales;
}

double CommissionEmployee03::getGrossSales() const {
	return grossSales;
}

void CommissionEmployee03::setCommissionRate(double rate) {
	commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}

double CommissionEmployee03::getCommissionRate() const {
	return commissionRate;
}

double CommissionEmployee03::earnings() const {
	return getCommissionRate() * getGrossSales();
}

void CommissionEmployee03::print() const {
	cout << "commission employee: " << getFirsrtName() << ' ' << getLastName()
		<< "\nsocial security number: " << getSocialSecurityNumber()
		<< "\ngross sales: " << getGrossSales()
		<< "\ncommission rate: " << getCommissionRate();
}












