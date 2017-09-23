#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "ctime"
#include "cstdlib"

#include "Array00.h"

using namespace std;


Array00::Array00() {}
Array00::~Array00() {}

void Array00::disArray0000() {
	cout << "this is disArray0000 : " << endl;
	int sunInt[10];

	for (int i = 0; i < 10; i++) {
		sunInt[i] = i * 3;
	}
	cout << setw(7) << "Element" << setw(13) << "Value" << endl;
	for (int j = 0; j < 10; j++) {
		cout << setw(7) << j << setw(13) << sunInt[j] << endl;
	}
	cout << endl;
}

void Array00::disArray0001() {
	cout << "this is disArray0001 : " << endl;
	int sunInt[10] = { 12, 234, 3, 22, 44, 14, 563, 32, 54 };

	cout << setw(7) << "Element" << setw(13) << "Value" << endl;
	for (int j = 0; j < 10; j++) {
		cout << setw(7) << j << setw(13) << sunInt[j] << endl;
	}
	cout << endl;
}

void Array00::disArray0002() {
	cout << "this is disArray0002 : " << endl;
	const int intSize = 10;

	int sunInt[intSize] = { 122, 34, 73, 922, 47, 114, 53, 42, 54 };

	cout << setw(7) << "Element" << setw(13) << "Value" << endl;
	for (int j = 0; j < intSize; j++) {
		cout << setw(7) << j << setw(13) << sunInt[j] << endl;
	}
	cout << endl;
}

void Array00::disArray0003() {
	cout << "this is disArray0003 : " << endl;
	int intTotal = 0;
	const int intSize = 10;

	int sunInt[intSize] = { 122, 34, 73, 922, 47, 114, 16, 42, 54 };

	cout << setw(7) << "Element" << setw(13) << "Value" << endl;
	for (int j = 0; j < intSize; j++) {
		intTotal += sunInt[j];
		cout << setw(7) << j << setw(13) << sunInt[j] << endl;
	}
	cout << "Total of array elements: " << intTotal << endl;
	cout << endl;
}

void Array00::disArray0004() {
	cout << "this is disArray0004 : " << endl;
	const int intSize = 10;

	int sunInt[intSize] = { 22, 34, 72, 92, 62, 14, 53, 42, 54 };

	cout << "Grade distrbiution: " << endl;
	for (int i = 0; i < intSize; i++) {
		if (i==0) {
			cout << "   0~ 9: ";
		} else if (i==9) {
			cout << "    100: ";
		} else {
			cout << "  " << i * 10 << "~" << (i * 10) + 9 << ": ";
		}

		//for (int j = 0; j < sunInt[i] / 4; j++) {
		for (int j = 0; j < sunInt[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
}

void Array00::disArray0005() {
	cout << "this is disArray0005 : " << endl;
	const int intSize = 7;
	int subIntFrequency[intSize] = { 0 };

	srand(time(0));
	for (int i = 1; i < 6000000; i++) {
		subIntFrequency[1 + rand() % 6]++;
	}

	cout << "Face " << setw(13) << "Frequency " << endl;
	for (int i = 0; i < intSize; i++) {
		cout << setw(5) << i << setw(13) << subIntFrequency[i] << endl;
	}
	cout << endl;
}

void Array00::disArray0006() {
	cout << "this is disArray0006 : " << endl;
	const int intResSize = 40;
	const int intFreSize = 11;

	const int subIntRes[intResSize] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
		2, 2, 3, 3, 3, 6, 3, 8, 9, 10, 
		1, 4, 3, 4, 4, 4, 7, 4, 9, 10, 
		9, 2, 3, 8, 5, 7, 7, 8, 10, 10, };
	int subIntFre[intFreSize] = { 0 };

	for (int i = 0; i < intResSize; i++) {
		subIntFre[subIntRes[i]]++;
	}

	cout << "Rating" << setw(17) << "Frequency" << endl;
	for (int i = 0; i < intFreSize; i++) {
		cout << setw(6) << i << setw(17) << subIntFre[i] << endl;
	}
	cout << endl;
}

void Array00::disArray0007() {
	cout << "this is disArray0006 : " << endl;
	char subChr1[20];
	char sbuChr2[] = "string literal";

	cout << "Enter the string \"hello there\":";
	cin >> subChr1;

	cout << "string1 is: " << subChr1 << "\nstring2 is:" << sbuChr2;
	cout << "\nstring1 with spaces between characters is:\n";

	for (int i = 0; subChr1[i] != '\0'; i++) {
		cout << subChr1[i] << "";
	}

	cin >> subChr1;
	cout << "\nstring1 is:" << subChr1 << endl;
	cout << endl;
}
