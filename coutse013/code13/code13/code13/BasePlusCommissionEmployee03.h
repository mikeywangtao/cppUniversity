//#pragma once
#include "string"

#include "CommissionEmployee03.h"

using namespace std;

#ifndef	BASEPLUSCOMMISSIONEMPLOYEE03
#define BASEPLUSCOMMISSIONEMPLOYEE03

class BasePlusCommissionEmployee03 :public CommissionEmployee03 {
public:
	BasePlusCommissionEmployee03(const string &
	  , const string &
	  , const string &
	  , double =0.0
	  , double =0.0
	  , double =0.0);
	virtual ~BasePlusCommissionEmployee03();

	void setBaseSalary(double );
	double getBaseSalary() const;

	virtual double earnings() const;
	virtual void print()const;

private:
	double baseSalary;
};

#endif


