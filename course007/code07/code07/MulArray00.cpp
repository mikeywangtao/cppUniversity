#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "MulArray00.h"

using namespace std;


MulArray00::MulArray00() {}
MulArray00::~MulArray00() {}

void MulArray00::disMularray() {
	int array1[2][3] = { {1,2,4}, {4,5,6} };
	int array2[2][3] = {1,2,3,4,5};
	int array3[2][3] = { {1,2}, {4} };

	cout << "Values in array1 by row are:" << endl;
	printArray(array1);

	cout << "Values in array2 by row are:" << endl;
	printArray(array2);

	cout << "Values int array3 by row are:" << endl;
	printArray(array3);
}

void MulArray00::printArray(const int a[][3]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}
