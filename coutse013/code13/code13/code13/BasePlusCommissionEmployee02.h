//#pragma once

#include "string"

#include "CommissionEmployee02.h"

using namespace std;

#ifndef BASEPLUSCOMMISSIONPLOYEE02
#define	BASEPLUSCOMMISSIONPLOYEE02

class BasePlusCommissionEmployee02 :	public CommissionEmployee02 {
public:
	BasePlusCommissionEmployee02(const string & 
	  , const string &
	  , const string &
	  , double =0.0
	  , double =0.0
	  , double =0.0);
	virtual ~BasePlusCommissionEmployee02();

	void setBaseSalary(double );
	double getBaseSalary() const;

	virtual double earnings() const;
	virtual void print() const;

private:
	double baseSalary;
};
#endif

