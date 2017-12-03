#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

using namespace std;

/* 15.6.1*/
void disDohs06Pro() {
	int number;
	cout << "Enter a decimal number: ";
	cin >> number;

	cout << number << " in hexadecimal is : " << hex
		<< number << endl;

	cout << dec << number << " in octal is : "
		<< oct << number << endl;

	cout << setbase(10) << number << " in decimal is: "
		<< number << endl;
}