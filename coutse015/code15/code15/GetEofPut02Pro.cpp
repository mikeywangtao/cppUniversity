#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

using namespace std;

void disGetEofPut02Pro() {
	int character;

	cout << "Before input, cin.eof() is: " << cin.eof() << endl
		<< "Enter a sentence followed by end-of-file: " << endl;

	while ((character = cin.get()) != EOF) {
		cout.put(character);
	}

	cout << "\nEOF in this system is : " << character << endl;
	cout << "After input of EOF, cin.eof() is " << cin.eof() << endl;
}