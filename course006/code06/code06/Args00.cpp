#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "Args00.h"

using namespace std;

Args00::Args00() {}
Args00::~Args00() {}

int Args00::disSquareByValue(int intNump) {
	return intNump *= intNump;
}

void Args00::disSquareByReference(int &intNump) {
	intNump *= intNump;
}
