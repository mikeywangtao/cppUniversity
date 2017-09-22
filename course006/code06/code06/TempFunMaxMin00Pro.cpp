#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "TempFunMaxMin00.h"

using namespace std;

void disTempFunMaxMin00Pro() {
	int int1, int2, int3;
	cout << "Input three integer values : ";
	cin >> int1 >> int2 >> int3;
	cout << "The Max integer value is : " 
		<< disMax(int1, int2, int3) << endl;

	double dou1, dou2, dou3;
	cout << "Input three double values : ";
	cin >> dou1 >> dou2 >> dou3;
	cout << "The Max double value is : "
		<< disMax(dou1, dou2, dou3) << endl;

	char chr1, chr2, chr3;
	cout << "Input three char values : ";
	cin >> chr1 >> chr2 >> chr3;
	cout << "The Max char value is : "
		<< disMax(chr1, chr2, chr3) << endl;

}