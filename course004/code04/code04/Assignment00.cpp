#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "Assignment00.h"

using namespace std;

Assignment00::Assignment00() {}
Assignment00::~Assignment00() {}

void Assignment00::disAssignment00() {

	int intFlg = 0;

	cout << "intFlg = 3; ----- " << endl;

	intFlg = 3;
	intFlg = intFlg + 1;
	cout << "intFlg = intFlg + 1; ----- " << intFlg << endl;
	intFlg = 0;

	intFlg = 3;
	intFlg += 3;
	cout << "intFlg += 3; ----- " << intFlg << endl;
	intFlg = 0;

	intFlg = 3;
	intFlg -= 1;
	cout << "intFlg -= 1; ----- " << intFlg << endl;
	intFlg = 0;

	intFlg = 3;
	intFlg *= 4;
	cout << "intFlg *= 4; ----- " << intFlg << endl;
	intFlg = 0;

	intFlg = 3;
	intFlg /= 3;
	cout << "intFlg /= 3; ----- " << intFlg << endl;
	intFlg = 0;

	intFlg = 3;
	intFlg %= 2;
	cout << "intFlg %= 2; ----- " << intFlg << endl;
	intFlg = 0;

	intFlg = 3;
	cout << "intFlg++; ----- " << intFlg++ << endl;
	cout << "intFlg; ----- " << intFlg << endl;
	intFlg = 0;

	intFlg = 3;
	cout << "++intFlg; ----- " << ++intFlg << endl;
	cout << "intFlg; ----- " << intFlg << endl;
	intFlg = 0;

	intFlg = 3;
	cout << "intFlg--; ----- " << intFlg-- << endl;
	cout << "intFlg; ----- " << intFlg << endl;
	intFlg = 0;

	intFlg = 3;
	cout << "--intFlg; ----- " << --intFlg << endl;
	cout << "intFlg; ----- " << intFlg << endl;
	intFlg = 0;
}
