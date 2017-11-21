//#pragma once
#include "string"

#include "Employee03.h"

using namespace std;

#ifndef HOURLYEMPLOYEE03
#define HOURLYEMPLOYEE03

class HourlyEmployee03 : public Employee03 {
public:
	HourlyEmployee03(const string &
	  , const string &
	  , const string &
	  , double =0.0
	  , double =0.0);
	virtual ~HourlyEmployee03();

	void setWage(double );
	double getWage() const;

	void setHours(double );
	double getHours() const;

	virtual double earnings() const;
	virtual void print() const;

private:
	double wage;
	double hours;
};
#endif


