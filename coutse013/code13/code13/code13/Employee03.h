//#pragma once
#include "string"

#ifndef EMPLOYEE03
#define EMPLOYEE03

using namespace std;

class Employee03 {
public:
	Employee03(const string &
	  , const string &
	  , const string & );
	virtual ~Employee03();

	void setFirstName(const string & );
	string getFirstName() const;

	void setLastName(const string & );
	string getLastName() const;

	void setSocialSecurityNumber(const string & );
	string getSocialSecurityNumber() const;

	virtual double earnings() const = 0;
	virtual void print() const;

private:
	string firstName;
	string lastName;
	string socialSecurityNumber;
};

#endif

