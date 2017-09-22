#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "Args03.h"

using namespace std;

Args03::Args03() {
	intNumber = 7;
}
Args03::~Args03() {}

void Args03::disArgs03() {
	int intNumber = 99;

	cout << "Local value : " << intNumber
		<< "\nClass value : " << this->intNumber << endl;
}
