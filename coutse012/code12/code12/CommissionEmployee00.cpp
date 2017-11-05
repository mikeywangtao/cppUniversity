#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cctype"
#include "cstdlib"
#include "vector"
#include "string"


#include "CommissionEmployee00.h"


//CommissionEmployee_00::CommissionEmployee_00() {}
CommissionEmployee00::~CommissionEmployee00() {}

CommissionEmployee00::CommissionEmployee00(
	const string &first
	, const string &last
	, const string &ssn
	, double sales/*=0.0*/
	, double rate/*=0.0*/) {
	firstName = first;
	lastNmae = last;
	socialSecurityNumber = ssn;
	setGrossSales(sales);
	setCommissionRate(rate);
}

void CommissionEmployee00::setFirstName(const string &first) {
	firstName = first;
}

std::string CommissionEmployee00::getFirstName() const {
	return firstName;
}

void CommissionEmployee00::setLastName(const string &last) {
	lastNmae = last;
}

std::string CommissionEmployee00::getLastName() const {
	return lastNmae;
}

void CommissionEmployee00::setSocialSecurityNumber(const string &ssn) {
	socialSecurityNumber = ssn;
}

std::string CommissionEmployee00::getSocialSecurityNumber() const {
	return socialSecurityNumber;
}

void CommissionEmployee00::setGrossSales(double sales) {
	grossSales = (sales < 0.0) ? 0.0 : sales;
}

double CommissionEmployee00::getGrossSales() const {
	return grossSales;
}

void CommissionEmployee00::setCommissionRate(double rate) {
	commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}

double CommissionEmployee00::getCommissionRate() const {
	return commissionRate;
}

double CommissionEmployee00::earnings() const {
	return commissionRate * grossSales;
}

void CommissionEmployee00::print() const {
	cout << "commission employee: " << firstName << ' ' << lastNmae
		<< "\nsocial security number: " << socialSecurityNumber
		<< "\ngross sales: " << grossSales
		<< "\ncommission rate: " << commissionRate;

}






