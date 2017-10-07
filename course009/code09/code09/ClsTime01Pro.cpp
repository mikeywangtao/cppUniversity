#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "ClsTime01.h"


using namespace std;

void disClstime00Pro() {
	ClsTime01 objCt01;
	objCt01.setTime(12, 33, 5);
	objCt01.printStandard();
	objCt01.printUniversal();


	ClsTime01 t;

	cout << "The initial universal time is ";
	t.printUniversal();
	cout << "\nThe initial standard time is ";
	t.printStandard();

	t.setTime(13, 27, 6);
	cout << "\n\nUniversal time after setTime is ";
	t.printUniversal();
	cout << "\nStandard time after setTime is ";
	t.printStandard();

	t.setTime(99, 99, 99);
	cout << "\n\nAfter attempting invalid settings:"
		<< "\nUniversal time:";
	t.printUniversal();
	cout << "\nStandard time:";
	t.printStandard();

	cout << endl;

}