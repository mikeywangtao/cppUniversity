#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

using namespace std;

/* 15.7.6*/
void disUppercase15Pro() {
	cout << "Printing uppercase letters in scientific" << endl
		<< "notation exponents and hexadecimal values: " << endl;

	cout << uppercase << 4.345e10 << endl
		<< hex << showbase << 123456789 << endl;
}