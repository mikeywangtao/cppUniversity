#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

using namespace std;

/* 15.6.3*/
void disWidthSetw08Pro() {
	int widthValue = 4;
	char sentence[10];

	cout << "Enter a sentence: " << endl;
	cin.width(5);

	while (cin>> sentence) {
		cout.width(widthValue++);
		cout << sentence << endl;
		cin.width(5);
	}
}