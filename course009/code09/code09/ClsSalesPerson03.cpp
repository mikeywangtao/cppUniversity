#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "ClsSalesPerson03.h"

using namespace std;


ClsSalesPerson03::ClsSalesPerson03() {
	for (int i = 0; i < 12; i++) {
		sales[i] = 0.0;
	}
}
ClsSalesPerson03::~ClsSalesPerson03() {}

void ClsSalesPerson03::getSalesFromUser() {
	double salesFigure;
	for (int i = 1; i <= 12; i++) {
		cout << "Enter sales amount for month " << i << ": ";
		cin >> salesFigure;
		setSales(i, salesFigure);
	}
}

void ClsSalesPerson03::setSales(int month, double amount) {
	if (month>=1 && month<=12 && amount>0) {
		sales[month - 1] = amount;
	} else {
		cout << "Invalid month or sales figure" << endl;
	}
}

void ClsSalesPerson03::printAnnualSales() {
	cout << setprecision(2) << fixed
		<< "\nThe total annual sales are : $"
		<< totalAnnualSalues() << endl;
}

double ClsSalesPerson03::totalAnnualSalues() {
	double total = 0.0;
	for (int i = 0; i < 12; i++) {
		total += sales[i];
	}
	return total;
}
