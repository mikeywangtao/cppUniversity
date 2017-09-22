#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "Args01.h"

using namespace std;

Args01::Args01() {}
Args01::~Args01() {}

void Args01::disArgs01() {
	int x = 3;
	int &y = x;

	cout << "x= " << x << "    y= " << y << endl;
	y = 7; 
	cout << "x= " << x << "    y= " << y << endl;
}
