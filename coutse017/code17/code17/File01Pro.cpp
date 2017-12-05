#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"
#include "memory"

using namespace std;

void disFile01Pro() {
	ofstream outClientFile("clients.dat", ios::out);

	if(!outClientFile){
		cerr << "File could not be opened" << endl;
		exit(1);
	}

	cout << "Enter the account, name, and balance. " << endl
		<< "Enter end-of-file to end input. \n";

	int account;
	char name[30];
	double balance;

	while (cin >> account >> name >> balance) {
		outClientFile << account << ' ' << name << ' ' << balance << endl;
		cout << "?";
	}

}