#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"



using namespace std;

/*  使用外部cpp编写 函数模板*/
#include "FunTemp01.cpp"
void disFunTemp01Pro() {
	const int ACOUNT = 5;
	const int BCOUNT = 7;
	const int CCOUNT = 9;

	int a[ACOUNT] = { 1,4,6,2,5 };
	double b[BCOUNT] = { 1.1, 3.4, 56.2, 3.0, 2.45, 4.5, 6.88 };
	char c[CCOUNT] = { 'H', 'e', 'l', 'l', 'o', '-', 'c', 'p', 'p' };

	cout << "\nArray a contains: " << endl;
	printArray(a, ACOUNT);

	cout << "\nArray b contains: " << endl;
	printArray(b, BCOUNT);

	cout << "\nArray c contains: " << endl;
	printArray(c, CCOUNT);

}

/* 使用当前cpp编写 函数模板*/
//template <typename T>
//void printArray(const T *array, int count) {
//	for (int i = 0; i < count; i++) {
//		cout << array[i] << " ";
//	}
//}
//
//void disFunTemp01Pro() {
//	const int ACOUNT = 5;
//	const int BCOUNT = 7;
//	const int CCOUNT = 9;
//
//	int a[ACOUNT] = { 1,4,6,2,5 };
//	double b[BCOUNT] = { 1.1, 3.4, 56.2, 3.0, 2.45, 4.5, 6.88 };
//	char c[CCOUNT] = { 'H', 'e', 'l', 'l', 'o', '-', 'c', 'p', 'p' };
//
//	cout << "\nArray a contains: " << endl;
//	printArray(a, ACOUNT);
//
//	cout << "\nArray b contains: " << endl;
//	printArray(b, BCOUNT);
//
//	cout << "\nArray c contains: " << endl;
//	printArray(c, CCOUNT);
//
//}