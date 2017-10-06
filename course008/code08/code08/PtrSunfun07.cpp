#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "PtrSunfun07.h"

using namespace std;

void disFun01(int a) {
	cout << "You entered " << a << " so disFun01 was called.";
	cout << endl;
}

void disFun02(int a) {
	cout << "You entered " << a << " so disFun02 was called.";
	cout << endl;
}

void disFun03(int a) {
	cout << "You entered " << a << " so disFun03 was called.";
	cout << endl;
}


PtrSunfun07::PtrSunfun07() {}
PtrSunfun07::~PtrSunfun07() {}

void PtrSunfun07::disSunfun0700() {
	void(*f[3])(int) = {disFun01, disFun02, disFun03};
	int choice;

	cout << "Enter a number between 0 and 2, 3 to end:";
	cin >> choice;

	while ((choice>=0) && (choice<3)) {
		(*f[choice])(choice);
		cout << "Enter a number between 0 and 2, 3 to end:";
		cin >> choice;
	}

	cout << "Program execution completed. " << endl;
}

