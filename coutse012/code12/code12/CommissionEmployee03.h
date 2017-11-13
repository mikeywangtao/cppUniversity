//#pragma once
#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

using namespace std;

#ifndef COMMISSIONEMPLOYEE03
#define COMMISSIONEMPLOYEE03

class CommissionEmployee03 {
public:
	//CommissionEmployee03();
	virtual ~CommissionEmployee03();
	CommissionEmployee03(const string &
	  , const string &
	  , const string &
	  , double =0.0
	  , double =0.0);

	void setFirstName(const string & );
	string getFirsrtName() const;

	void setLastName(const string & );
	string getLastName() const;

	void setSocialSecurityNumber(const string & );
	string getSocialSecurityNumber() const;

	void setGrossSales(double );
	double getGrossSales() const;

	void setCommissionRate(double );
	double getCommissionRate() const;

	double earnings() const;
	void print() const;

private:
	string firstName;
	string lastName;
	string socialSecurityNumber;
	double grossSales;
	double commissionRate;

};

#endif


