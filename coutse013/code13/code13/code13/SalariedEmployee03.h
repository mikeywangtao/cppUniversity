//#pragma once
#include "string"

#include "Employee03.h"

using namespace std;

#ifndef SALARIEDEMPLOYEE03
#define	SALARIEDEMPLOYEE03

class SalariedEmployee03 : public Employee03 {
public:
	SalariedEmployee03(const string &
	  , const string &
	  , const string &
	  , double =0.0);
	virtual ~SalariedEmployee03();

	void setWeeklySalary(double );
	double getWeeklySalary() const;

	virtual double earnings() const;
	virtual void print() const;

private:
	double weeklySalary;
};
#endif


