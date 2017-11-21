#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "HourlyEmployee03.h"

using namespace std;

//HourlyEmployee03::HourlyEmployee03() {}
HourlyEmployee03::HourlyEmployee03(const string &first
	, const string &last
	, const string &ssn
	, double hourlyWage/*=0.0 */
	, double hoursWorked/*=0.0*/)
    : Employee03(first, last, ssn){
	setWage(hourlyWage);
	setHours(hoursWorked);
}

HourlyEmployee03::~HourlyEmployee03() {}

void HourlyEmployee03::setWage(double hourlyWage) {
	wage = (hourlyWage<0.0)? 0.0:hourlyWage;
}

double HourlyEmployee03::getWage() const {
	return wage;
}

void HourlyEmployee03::setHours(double hoursWorked) {
	hours = ((hoursWorked >= 0.0) && (hoursWorked <= 168.0)) ? hoursWorked : 0.0;
}

double HourlyEmployee03::getHours() const {
	return hours;
}

double HourlyEmployee03::earnings() const {
	if (getHours()<=40) {
		return getWage() * getHours();
	} else {
		return 40 * getWage() + ((getHours() - 40)*getWage()*1.5);
	}
}

void HourlyEmployee03::print() const {
	cout << "hourly employee: ";
	Employee03::print();
	cout << "\nhourly wage: " << getWage() << "; hours worked: " << getHours();
}



