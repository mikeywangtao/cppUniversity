#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "vector"

#include "ClsCount02.h"

using namespace std;

void disClscount02Pro() {
	ClsCount02 counter;
	ClsCount02 *counterPtr = &counter;
	ClsCount02 &counterRef = counter;

	cout << "Set x to 1 and print using the object`s name: ";
	counter.setX(1);
	counter.print();

	cout << "Set x to 2 and print using a reference to an object: ";
	counterRef.setX(2);
	counterRef.print();

	cout << "Set x to 3 and print using a pointer to an object: ";
	counterPtr->setX(3);
	counterPtr->print();
}