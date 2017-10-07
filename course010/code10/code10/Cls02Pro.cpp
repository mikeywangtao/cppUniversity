#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "Cls02Date.h"
#include "Cls02Employee.h"

using namespace std;

void disCls02Pro() {
	Cls02Date birth(7,24,1949);
	Cls02Date hire(3,12,1988);

	Cls02Employee manager("Bob", "Blue", birth, hire);

	cout << endl;
	manager.print();

	cout << "\nTest Date constructor with invalid values:\n";
	Cls02Date lastDayOff(14,35,1994);
	cout << endl;
}