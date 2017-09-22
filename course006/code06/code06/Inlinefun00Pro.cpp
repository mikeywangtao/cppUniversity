#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

using namespace std;

inline double disCube(const double douSidep) {
	return douSidep * douSidep * douSidep;
}

void disInlinefun00Pro() {
	double douSindeval;
	cout << "Enter the side length of you cube: ";
	cin >> douSindeval;

	cout << "Volume of cube with side:  " << douSindeval 
		<< "\n is :  " << disCube(douSindeval) << endl;
}