//#pragma once
#include "string"

#include "Employee03.h"

#ifndef COMMISSIONEMPLOYEE03
#define	COMMISSIONEMPLOYEE03

class CommissionEmployee03 :public Employee03 {
public:
	CommissionEmployee03(const string &
	  , const string &
	  , const string &
	  , double =0.0
	  , double =0.0);
	virtual ~CommissionEmployee03();

	void setCommissionRate(double );
	double getCommissionRate() const;

	void setGrossSales(double );
	double getGrossSales() const;

	virtual double earnings() const;
	virtual void print() const;

private:
	double grossSales;
	double commissionRate;
};

#endif



