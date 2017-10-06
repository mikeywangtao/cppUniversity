#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "PtrSort03.h"

using namespace std;

PtrSort03::PtrSort03() {}
PtrSort03::~PtrSort03() {}

void PtrSort03::disPtrsort0300() {
	const int arraySize = 10;
	int a[arraySize] = { 2,6,4,8,10,12,89,68,45,37 };
	cout << "Data items in original order \n";
	for (int i = 0; i < arraySize; i++) {
		cout << setw(4) << a[i];
	}

	selectionSort(a, arraySize);

	cout << "\nData items in ascending order \n";

	for (int j = 0; j < arraySize; j++) {
		cout << setw(4) << a[j];
	}
	cout << endl;
}

void PtrSort03::selectionSort(int *const array, const int size) {
	int smallest;
	for (int i = 0; i < size; i++) {
		smallest = i;
		for (int index = i + 1; index < size; index++) {
			if (array[index]< array[smallest]) {
				smallest = index;
			}
		}
		swap(&array[i], &array[smallest]);
	}
}

void PtrSort03::swap(int *const element1Ptr, int *const element2Ptr) {
	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}
