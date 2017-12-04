#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

using namespace std;
/* 15.7.2*/
void disLri11Pro() {
	int x = 12345;

	cout << "Default is right justified: " << endl
		<< setw(10) << x;

	cout << "\n\nUse std::left to left justify x:\n"
		<< left << setw(10) << x;

	cout << "\n\nUse std::right justfiy x:\n"
		<< right << setw(10) << x << endl;

	cout << internal << showpos << setw(10) << x << endl;
}