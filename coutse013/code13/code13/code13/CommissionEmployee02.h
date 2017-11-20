//#pragma once
#include "string"

using namespace std;

#ifndef	COMMISSIONEMPLOYEE02
#define COMMISSIONEMPLOYEE02

class CommissionEmployee02 {
public:
	CommissionEmployee02(const string &
	  , const string &
	  , const string &
	  , double =0.0
	  , double =0.0);
	virtual ~CommissionEmployee02();

	void setFirstName(const string & );
	string getFirstName() const;

	void setLastName(const string & );
	string getLastName() const;

	void setSocialSecutityNumber(const string & );
	string getSocialSecurityNumber() const;

	void setGrossSales(double );
	double getGrossSales() const;

	void setCommissionRate(double );
	double getCommissionRate() const;

	virtual double earnings() const;
	virtual void print() const;

private:
	string firstName;
	string lastName;
	string socialSecurityNumber;
	double grossSales;
	double commissionRate;
};

#endif

