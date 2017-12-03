#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

using namespace std;
/* 15.6*/
void disGetline04Pro() {
	const int SIZE = 80;
	char buffer[SIZE];

	cout << "Enter a sentence : " << endl;
	cin.getline(buffer, SIZE);

	cout << "\nThe sentence entered is : " << endl << buffer << endl;
}