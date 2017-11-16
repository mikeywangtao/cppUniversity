//#pragma once
#include "string"

using namespace std;

#ifndef COMMISSIONEMPLOYEE01
#define COMMISSIONEMPLOYEE01

class CommissionEmployee01 {
public:
	CommissionEmployee01(const string &
	  , const string &
	  , const string &
	  , double =0.0
	  , double =0.0);
	virtual ~CommissionEmployee01();

	void setFirstName(const string & );
	string getFistName() const;

	void setLastName(const string & );
	string getLastName() const;

	void setSocialSecurityNumber(const string & );
	string getSoicalSecurityNumber() const;

	void setGrossSales(double);
	double getGrossSales() const;

	void setCommissionRate(double );
	double getCommissionRate() const;

	double earnings() const;
	void print() const;

private:
	string firstName;
	string lastName;
	string soicalSecurityNumber;
	double grossSales;
	double commissionRate;
};

#endif

