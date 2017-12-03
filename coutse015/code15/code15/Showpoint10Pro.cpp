#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

using namespace std;

/* 15.7.1*/
void disShowpoint10Pro() {
	cout << "Before using showpoint " << endl
		<< "9.9900 prints as : " << 9.9900 << endl
		<< "9.9000 prints as : " << 9.9000 << endl
		<< "9.0000 prints as : " << 9.0000 << endl << endl;

	cout << showpoint
		<< "After using showpoint " << endl
		<< "9.9900 prints as : " << 9.9900 << endl
		<< "9.9000 prints as : " << 9.9000 << endl
		<< "9.0000 prints as : " << 9.0000 << endl << endl;
}