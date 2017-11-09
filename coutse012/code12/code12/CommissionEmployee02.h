//#pragma once
#include "stdafx.h"
#include "string"

using namespace std;

#ifndef COMMISSIONEMPLOYEE02
#define COMMISSIONEMPLOYEE02

class CommissionEmployee02 {
public:
	//CommissionEmployee02();
	virtual ~CommissionEmployee02();
	CommissionEmployee02(const string &
		, const string &
	  , const string &
	  , double =0.0
	  , double =0.0);

	void setFirstName(const string & );
	string getFirstName() const;

	void setLastName(const string &);
	string getLastName() const;

	void setSocialSecurityNumber(const string & );
	string getSocialSecurityNumber() const;

	void setGrossSales(double );
	double gtGrossSales() const;

	void setCommissionRate(double );
	double getCommissionRate() const;

	double earnings() const;
	void print() const;

protected:
	string firstName;
	string lastName;
	string socialSecurityNumber;
	double grossSales;
	double commissionRate;
};
#endif


