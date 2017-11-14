#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "CommissionEmployee04.h"

using namespace std;

CommissionEmployee04::CommissionEmployee04(const string &first
  , const string &last
  , const string &ssn
  , double sales
  , double rate)
    : firstName(first), lastName(last), socialSecurityNumber(ssn){
	setGrossSales(sales);
	setCommissionRate(rate);

	cout << "CommissionEmployee constructor: " << endl;
	print();
	cout << "\n\n";
}

CommissionEmployee04::~CommissionEmployee04() {
	cout << "CommissionEmployee destructor: " << endl;
	print();
	cout << "\n\n";
}

void CommissionEmployee04::setFirstName(const string &first ) {
	firstName = first;
}

std::string CommissionEmployee04::getFirstName() const {
	return firstName;
}

void CommissionEmployee04::setLastName(const string &last ) {
	lastName = last;
}

std::string CommissionEmployee04::getLastName() const {
	return lastName;
}

void CommissionEmployee04::setSocialSecurityNumber(const string &ssn ) {
	socialSecurityNumber = ssn;
}

std::string CommissionEmployee04::getSocialSecurityNumber() const {
	return socialSecurityNumber;
}

void CommissionEmployee04::setGrossSales(double sales ) {
	grossSales = (sales < 0.0) ? 0.0 : sales;
}

double CommissionEmployee04::getGrossSales() const {
	return grossSales;
}

void CommissionEmployee04::setCommissionRate(double rate ) {
	commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}

double CommissionEmployee04::getCommissionRate() const {
	return commissionRate;
}

double CommissionEmployee04::earnings() const {
	return getCommissionRate() * getGrossSales();
}

void CommissionEmployee04::print() const {
	cout << "commission employee: " << getFirstName() << ' ' << getLastName()
		<< "\nsocial security number: " << getSocialSecurityNumber()
		<< "\ngross sales: " << getGrossSales()
		<< "\ncommission rate: " << getCommissionRate();
}







