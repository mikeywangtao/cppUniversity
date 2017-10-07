#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "ClsCount02.h"

using namespace std;


ClsCount02::ClsCount02() {}
ClsCount02::~ClsCount02() {}

void ClsCount02::setX(int intValuep) {
	x = intValuep;
}

void ClsCount02::print() {
	cout << x << endl;
}
