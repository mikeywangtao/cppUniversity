#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "While00.h"

using namespace std;


While00::While00() {}
While00::~While00() {}

void While00::disWhile0000() {

	int intCounter = 1;
	while (intCounter <= 10) {
		cout << intCounter << "  / ";
		//++intCounter;
		intCounter++;
	}
}
