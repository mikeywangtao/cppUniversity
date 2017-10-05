#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "InsertSort00.h"

using namespace std;


InsertSort00::InsertSort00() {}
InsertSort00::~InsertSort00() {}

void InsertSort00::disInsetsort() {
	const int arraySize = 10;
	int data[arraySize] = 
	  {34, 56, 4, 10, 77, 51, 93, 30, 5, 52};
	int insert;

	cout << "Unsorted array:\n";
	for (int i = 0; i < arraySize; i++) {
		cout << setw(4) << data[i];
	}

	for (int next = 0; next < arraySize; next++) {
		insert = data[next];
		int moveItem = next;

		while ((moveItem>0) && (data[moveItem-1]) > insert) {
			data[moveItem] = data[moveItem - 1];
			moveItem--;
		}
		data[moveItem] = insert;
	}

	cout << "\nSorted array:\n";

	for (int i = 0; i < arraySize; i++) {
		cout << setw(4) << data[i];
	}

	cout << endl;

}
