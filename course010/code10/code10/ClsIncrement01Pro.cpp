#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "ClsIncrement01.h"

using namespace std;

void disClsIncrement01Pro() {
	ClsIncrement01 objIc01(10, 5);

	cout << "Before incrementing: ";
	objIc01.print();

	for (int j = 1; j <= 3; j++) {
		objIc01.addIncerement();
		cout << "After increment " << j << ": ";
		objIc01.print();
	}

	ClsIncrement01 objIc02(50, 20);
	objIc01.print();
	objIc02.print();
}