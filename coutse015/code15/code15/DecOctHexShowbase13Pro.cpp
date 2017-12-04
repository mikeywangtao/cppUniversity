#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

using namespace std;

/* 15.7.4*/
void disDohs13Pro() {
	int x = 100;

	cout << "Printing integers preceded by their base: " << endl << showbase;

	cout << x << endl;
	cout << oct << x << endl;
	cout << hex << x << endl;
}