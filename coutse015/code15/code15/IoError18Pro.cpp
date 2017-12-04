#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

using namespace std;

/* 15.8*/
void disIoError18Pro() {
	int integerValue;

	cout << "Before a bad input operation: "
		<< "\ncin.rdstate()" << cin.rdstate()
		<< "\n    cin.eof()" << cin.eof()
		<< "\n   cin.fail()" << cin.fail()
		<< "\n    cin.bad()" << cin.bad()
		<< "\n   cin.good()" << cin.good()
		<< "\n\nExpects an integer, but enter a character: ";

	cin >> integerValue;
	cout << endl;

	cout << "After a bad input operation: "
		<< "\ncin.rdstate(): " << cin.rdstate()
		<< "\n    cin.eof(): " << cin.eof()
		<< "\n   cin.fail(): " << cin.fail()
		<< "\n    cin.bad(): " << cin.bad()
		<< "\n   cin.good(): " << cin.good()
		<< endl << endl;

	cin.clear();
	cout << "After cin.clear() " << "\ncin.faill(): " << cin.fail()
		<< "\ncin.good(): " << cin.good() << endl;
}