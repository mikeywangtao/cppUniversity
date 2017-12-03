#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

using namespace std;
/* 15.5*/
void disCinget03Pro() {
	const int SIZE = 80;
	char buffer1[SIZE];
	char buffer2[SIZE];

	cout << "Enter a sentence: " << endl;
	cin >> buffer1;

	cout << "\nThe string read with cin was: " << endl
		<< buffer1 << endl << endl;

	cin.get(buffer2, SIZE);

	cout << "The string read with cin.get was: " << endl
		<< buffer2 << endl;
}