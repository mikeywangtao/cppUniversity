//#pragma once
#include "string"

#include "CommissionEmployee03.h"

using namespace std;

#ifndef BASEPLUSCOMMISSIONEMPLOYEE03
#define	BASEPLUSCOMMISSIONEMPLOYEE03

class BasePlusCommissionEmployee03 : public CommissionEmployee03 {
public:
	//BasePlusCommissionEmployee03();
	virtual ~BasePlusCommissionEmployee03();
	BasePlusCommissionEmployee03(const string &
	  , const string &
	  , const string &
	  , double =0.0
	  , double =0.0
	  , double =0.0);

	void setBaseSalary(double );
	double getBaseSalary() const;

	double earnings() const;
	void print() const;

private:
	double baseSalary;
};
#endif


