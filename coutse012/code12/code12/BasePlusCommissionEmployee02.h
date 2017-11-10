//#pragma once
#include "stdafx.h"
#include "string"

#include "CommissionEmployee02.h"

using namespace std;

#ifndef BASEPLUSCOMMISSIONEMPLOYEE02_H
#define BASEPLUSCOMMISSIONEMPLOYEE02_H

class BasePlusCommissionEmployee02 : public CommissionEmployee02 {
public:
	//BasePlusCommissionEmployee02();
	virtual ~BasePlusCommissionEmployee02();
	BasePlusCommissionEmployee02(const string & 
	  , const string &
	  , const string &
	  , double = 0.0
	  , double = 0.0
	  , double = 0.0);

	void setBaseSalyary(double );
	double getBaseSalary() const;

	double earnings() const;
	void print() const;

private :
	double baseSalary;
};

#endif

