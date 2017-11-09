//#pragma once
#include "stdafx.h"
#include "string"

using namespace std;

#ifndef BSAEPLUSCOMMISSIONEMPLOYEE01_H
#define BSAEPLUSCOMMISSIONEMPLOYEE01_H

class BsaePlusCommissionEmployee01 {
public:
	//BsaePlusCommissionEmployee01();
	virtual ~BsaePlusCommissionEmployee01();
	BsaePlusCommissionEmployee01(const string &
	  , const string &
	  , const string &
	  , double = 0.0
	  , double = 0.0
	  , double = 0.0);

	void setFirstName(const string & );
	string getFirstName() const;

	void setLastName(const string &);
	string getLastName() const;

	void setSocialSecurityNumber(const string & );
	string getSocialSecurityNumber() const;

	void setGrossSales(double );
	double getGrossSales() const;

	void setCommissionRate(double );
	double getCommissionRate() const;

	void setBaseSalary(double );
	double getBaseSalary() const;

	double earnings() const;
	void print() const;

private:
	string firstName;
	string lastName;
	string socialSecurityNumber;
	double grossSales;
	double commissionRate;
	double baseSalary;

};
#endif


