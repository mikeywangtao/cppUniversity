#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "CommissionEmployee03.h"

using namespace std;

//CommissionEmployee03::CommissionEmployee03() {}
CommissionEmployee03::CommissionEmployee03(const string &first
	, const string &last
	, const string &ssn
	, double sales/*=0.0 */
	, double rate/*=0.0*/)
    : Employee03(first, last, ssn){
	setGrossSales(sales);
	setCommissionRate(rate);

}

CommissionEmployee03::~CommissionEmployee03() {}

void CommissionEmployee03::setCommissionRate(double rate) {
	commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}

double CommissionEmployee03::getCommissionRate() const {
	return commissionRate;
}

void CommissionEmployee03::setGrossSales(double sales) {
	grossSales = (sales < 0.0) ? 0.0 : sales;
}

double CommissionEmployee03::getGrossSales() const {
	return grossSales;
}

double CommissionEmployee03::earnings() const {
	return getCommissionRate() * getGrossSales();
}

void CommissionEmployee03::print() const {
	cout << "commission employee: ";
	Employee03::print();
	cout << "\ngross sales: " << getGrossSales()
		<< "; commission rate: " << getCommissionRate();
}




