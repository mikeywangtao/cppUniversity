//#pragma once
#include "string"

#include "CommissionEmployee01.h"

using namespace std;

#ifndef	BASEPLUSCOMMISSIONEMPLOYEE01
#define BASEPLUSCOMMISSIONEMPLOYEE01

class BasePlusCommissionEmployee01 :public CommissionEmployee01 {
public:
	BasePlusCommissionEmployee01(const string &
	  , const string &
	  , const string &
	  , double =0.0
	  , double =0.0
	  , double =0.0);
	virtual ~BasePlusCommissionEmployee01();

	void setBaseSalary(double );
	double getBaseSalary() const;

	double earnings() const;
	void print() const;

private:
	double baseSalary;
};
#endif

