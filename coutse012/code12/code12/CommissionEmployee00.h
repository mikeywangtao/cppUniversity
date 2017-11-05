//#pragma once
#include "stdafx.h"
#include "string"

using namespace std;

#ifndef CommissionEmployee00_H
#define CommissionEmployee00_H


class CommissionEmployee00 {
public:
	virtual ~CommissionEmployee00();
	//CommissionEmployee_00();
	CommissionEmployee00(const string &, const string &, const string &,
		double=0.0, double=0.0 );

	void setFirstName(const string & );
	string getFirstName() const;

	void setLastName(const string & );
	string getLastName() const;

	void setSocialSecurityNumber(const string  &);
	string getSocialSecurityNumber() const;

	void setGrossSales(double );
	double getGrossSales() const;

	void setCommissionRate(double );
	double getCommissionRate() const;

	double earnings() const;
	void print() const;


private :
	string firstName;
	string lastNmae;
	string socialSecurityNumber;
	double grossSales;
	double commissionRate;

};
#endif

