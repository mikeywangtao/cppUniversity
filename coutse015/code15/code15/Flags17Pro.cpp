#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

using namespace std;

/* 15.7.8*/
void disFlags17Pro() {
	int integerValue = 1000;
	double doubleValue = 0.0947628;

	cout << "The value of the flags variable is: \n" << cout.flags()
		<< "Print int and double in original format: \n"
		<< integerValue << '\t' << doubleValue << endl << endl;

	ios_base::fmtflags originalFormat = cout.flags();
	cout << showbase << oct << scientific;

	cout << "The value of the flags variable is: \n" << cout.flags()
		<< "Print int and double in a new format: \n"
		<< integerValue << '\t' << doubleValue << endl << endl;

	cout.flags(originalFormat);

	cout << "The restored value of the flags variable is : \n" << cout.flags()
		<< "Print values int original format again: \n"
		<< integerValue << '\t' << doubleValue << endl;
}