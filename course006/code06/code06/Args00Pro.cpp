#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "Args00.h"

using namespace std;

void disArgs00Pro() {
	int int1 = 2;
	int int2 = 3;
	Args00 objArge00;

	cout << "x =  " << int1 << "  before squareByValue." << endl;
	cout << "Value return by squareByValue:  " << objArge00.disSquareByValue(int1) << endl;
	cout << "x =  " << int1 << "  after squareByReference." << endl;

	cout << endl;

	cout << "z =  " << int2 << "  before squareByValue." << endl;
	objArge00.disSquareByReference(int2);
	cout << "z =  " << int2 << "  after squareByReference." << endl;
}