#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cctype"
#include "cstdlib"
#include "string"
#include "vector"

using namespace std;

/* 15.6.2*/
void disPs07Pro() {
	double root2 = sqrt(2.0);
	int places;

	cout << "Square root of 2 with precisions 0-9. " << endl
		<< " Precision set by ios_base member function "
		<< " Precision: " << endl;

	cout << fixed;
	for (places = 0; places <= 9; places++) {
		cout.precision(places);
		cout << root2 << endl;
	}

	cout << "\nPrecision set by stream manipulator "
		<< " setPrecision: " << endl;
	for (places = 0; places <= 9; places++) {
		cout << setprecision(places) << root2 << endl;
	}

}