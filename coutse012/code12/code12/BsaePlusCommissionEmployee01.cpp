#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "BsaePlusCommissionEmployee01.h"

using namespace std;

//BsaePlusCommissionEmployee01::BsaePlusCommissionEmployee01() {}
BsaePlusCommissionEmployee01::~BsaePlusCommissionEmployee01() {}

BsaePlusCommissionEmployee01::BsaePlusCommissionEmployee01(const string &first
	, const string &last
	, const string &ssn
	, double sales/*= 0.0 */
	, double rate/*= 0.0 */
	, double salary/*= 0.0*/) {
	firstName = first;
	lastName = last;
	socialSecurityNumber = ssn;
	setGrossSales(sales);
	setCommissionRate(rate);
	setBaseSalary(salary);
}

void BsaePlusCommissionEmployee01::setFirstName(const string &first) {
	firstName = first;
}

std::string BsaePlusCommissionEmployee01::getFirstName() const {
	return firstName;
}

void BsaePlusCommissionEmployee01::setLastName(const string &last) {
	lastName = last;
}

std::string BsaePlusCommissionEmployee01::getLastName() const {
	return lastName;
}

void BsaePlusCommissionEmployee01::setSocialSecurityNumber(const string &ssn) {
	socialSecurityNumber = ssn;
}

std::string BsaePlusCommissionEmployee01::getSocialSecurityNumber() const {
	return socialSecurityNumber;
}

void BsaePlusCommissionEmployee01::setGrossSales(double sales) {
	grossSales = (sales < 0.0) ? 0.0 : sales;
}

double BsaePlusCommissionEmployee01::getGrossSales() const {
	return grossSales;
}

void BsaePlusCommissionEmployee01::setCommissionRate(double rate) {
	commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}

double BsaePlusCommissionEmployee01::getCommissionRate() const {
	return commissionRate;
}

void BsaePlusCommissionEmployee01::setBaseSalary(double salary) {
	baseSalary = (salary < 0.0) ? 0.0 : salary;
}

double BsaePlusCommissionEmployee01::getBaseSalary() const {
	return baseSalary;
}

double BsaePlusCommissionEmployee01::earnings() const {
	return baseSalary + (commissionRate * grossSales);
}

void BsaePlusCommissionEmployee01::print() const {
	cout << "base-salaried commission employee: " << firstName << ' ' << lastName
		<< "\nsocial security number: " << socialSecurityNumber
		<< "\ngross sales: " << grossSales
		<< "\ncommission rate: " << commissionRate
		<< "\nbase salary: " << baseSalary;
}









