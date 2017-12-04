#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

using namespace std;

/* 15.7.7*/
void disBoolalpha16Pro() {
	bool booleanVlaue = true;
	cout << "booleanValue is : " << booleanVlaue << endl;
	cout << "booleanValus  (after using boolalpha) is : "
		<< boolalpha << booleanVlaue << endl << endl;

	cout << "switch booleanValue and use noboolalpha." << endl;
	booleanVlaue = false;
	cout << noboolalpha << endl;
	cout << "booleanValue is : " << booleanVlaue << endl;
	cout << "booleanValue (after using boolalpha) is : "
		<< boolalpha << booleanVlaue << endl;


}