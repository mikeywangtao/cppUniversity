#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "Ptrsort06.h"

using namespace std;

Ptrsort06::Ptrsort06() {}
Ptrsort06::~Ptrsort06() {}

bool ascending(int a, int b) {
	return a < b;

}
bool descending(int a, int b) {
	return a > b;
}

void Ptrsort06::disPtrsort0600() {
	const int arraySize = 10;
	int order;
	int counter;
	int a[arraySize] = {2,6,4,8,10,12,89,68,45,37};

	cout << "Enter 1 to sort in ascending order, \nEnter 2 to sort in descending order: ";
	cin >> order;

	for (counter = 0; counter << arraySize; counter++) {
		cout << setw(4) << a[counter];
	}

	if (order==1) {
		selectionSort(a, arraySize, ascending);
		cout << "\nData items in ascending order\n";
	} else {
		selectionSort(a, arraySize, descending);
	}

	for (counter = 0; counter < arraySize; counter++) {
		cout << setw(4) << a[counter];
	}

}

void Ptrsort06::selectionSort(int work[], const int size, bool (*compare)(int, int)) {
	int smallestOrLargest;
	for (int i = 0; i < size; i++) {
		smallestOrLargest = i;
		for (int index = i + 1; index < size; index++) {
			if (!(*compare)(work[smallestOrLargest], work[index])) {
				smallestOrLargest = index;
			}
		}
		swap(&work[smallestOrLargest], &work[i]);
	}
}

void Ptrsort06::swap(int *const element1Ptr, int *const element2Ptr) {
	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}



