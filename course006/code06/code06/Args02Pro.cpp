#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "Args02.h"

using namespace std;

void disArgs02Pro() {
	Args02 objArgs02;

	cout << "The defaule box volume is : " << objArgs02.disBoxVolume();

	cout << "\n\nThe volume of a box with length 10 : " << objArgs02.disBoxVolume(10);

	cout << "\n\nThe volume of a box with length 10, width 5 : " << objArgs02.disBoxVolume(10, 5);

	cout << "\n\nThe volume of a box with length 10, width 5, height 2 : " << objArgs02.disBoxVolume(10, 5, 2);
}