//#pragma once
#ifndef ClsSalesPerson03_H
#define ClsSalesPerson03_H

#include "string"

using namespace std;

class ClsSalesPerson03 {
public:
	ClsSalesPerson03();
	virtual ~ClsSalesPerson03();

	void getSalesFromUser();
	void setSales(int, double);
	void printAnnualSales();

private:
	double totalAnnualSalues();
	double sales[12];
};
#endif

