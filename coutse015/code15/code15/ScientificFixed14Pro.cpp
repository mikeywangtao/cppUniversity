#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

using namespace std;

void disSFixed14Pro() {
	double x = 0.001234567;
	double y = 1.946e9;

	cout << "Displayed in default format: " << endl
		<< x << '\t' << y << endl;

	cout << "\nDisplayed in scientific format: " << endl
		<< scientific << x << '\t' << y << endl;

	cout << "\nDisplay in fixed format: " << endl
		<< fixed << x << '\t' << y << endl;
}