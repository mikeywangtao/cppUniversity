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
void disReadWrite05Pro() {
	const int SIZE = 80;
	char buffer[SIZE];

	cout << "Enter a sentence: " << endl;
	cin.read(buffer, 20);

	cout << "\nThe sentence entered was: " << endl;
	cout.write(buffer, cin.gcount());
	cout << endl;
}