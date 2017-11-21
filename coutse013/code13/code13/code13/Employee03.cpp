#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "Employee03.h"

using namespace std;

//Employee03::Employee03() {}
Employee03::Employee03(const string &first
	, const string &last
	, const string &ssn)
    : firstName(first), lastName(last), socialSecurityNumber(ssn){
}

Employee03::~Employee03() {}

void Employee03::setFirstName(const string &first) {
	firstName = first;
}

std::string Employee03::getFirstName() const {
	return firstName;
}

void Employee03::setLastName(const string &last) {
	lastName = last;
}

std::string Employee03::getLastName() const {
	return lastName;
}

void Employee03::setSocialSecurityNumber(const string &ssn) {
	socialSecurityNumber = ssn;
}

std::string Employee03::getSocialSecurityNumber() const {
	return socialSecurityNumber;
}

void Employee03::print() const {
	cout << getFirstName() << ' ' << getLastName()
		<< "\nsocial security number : " << getSocialSecurityNumber();
}







