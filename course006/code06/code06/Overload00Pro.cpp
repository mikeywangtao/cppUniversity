#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "Overload00.h"

using namespace std;

void disOverload00Pro() {
	Overload00 objOverload00;
	cout << objOverload00.disSquare(7);
	cout << endl;
	cout << objOverload00.disSquare(10.5);
}