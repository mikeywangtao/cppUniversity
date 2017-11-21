#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "SalariedEmployee03.h"

using namespace std;

//SalariedEmployee03::SalariedEmployee03() {}
SalariedEmployee03::SalariedEmployee03(const string &first
	, const string &last
	, const string &ssn
	, double salary/*=0.0*/)
    : Employee03(first, last, ssn){
	setWeeklySalary(salary);
}

SalariedEmployee03::~SalariedEmployee03() {}

void SalariedEmployee03::setWeeklySalary(double salary) {
	weeklySalary = salary;
}

double SalariedEmployee03::getWeeklySalary() const {
	return weeklySalary;
}

double SalariedEmployee03::earnings() const {
	return getWeeklySalary();
}

void SalariedEmployee03::print() const {
	cout << "salaried employee: ";
	Employee03::print();
	cout << "\nweekly salary: " << getWeeklySalary();
}



