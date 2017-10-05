#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "LineSearch00.h"

using namespace std;

LineSearch00::LineSearch00() {}
LineSearch00::~LineSearch00() {}

void LineSearch00::disLineSearch00() {
	const int arraySize = 100;
	int a[arraySize];
	int searchKey;

	for (int i = 0; i < arraySize; i++) {
		a[i] = 2 * i;
	}
	cout << "Enter integer search key: ";
	cin >> searchKey;

	int element = linearSearch(a, searchKey, arraySize);

	if (element != -1) {
		cout << "Found value int element " << element << endl;
	} else {
		cout << "Value not found " << endl;
	}
}

int LineSearch00::linearSearch(const int array[], int key , int sizeOfArray) {
	for (int j = 0; j < sizeOfArray; j++) {
		if (array[j] == key) {
			return j;
		}
	}
	return -1;
}
