//#pragma once
#include "string"

#include "CommissionEmployee04.h"

using namespace std;

#ifndef BASEPLUSCOMMISSIONEMPLOYEE04
#define BASEPLUSCOMMISSIONEMPLOYEE04

class BasePlusCommissionEmployee04 : public CommissionEmployee04 {
public:
	BasePlusCommissionEmployee04(const string &
	  , const string &
	  , const string &
	  , double =0.0
	  , double =0.0
	  , double =0.0);
	virtual ~BasePlusCommissionEmployee04();

	void setBaseSalary(double );
	double getBaseSalary() const;

	double earnings() const;
	void print() const;

private:
	double baseSalary;
};
#endif


