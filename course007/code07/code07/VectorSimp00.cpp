#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "vector"

#include "VectorSimp00.h"

using namespace std;

VectorSimp00::VectorSimp00() {}
VectorSimp00::~VectorSimp00() {}

void VectorSimp00::disVectorsimp00() {
	vector<int> integers1(7);
	vector<int> integers2(10);

	cout << "Size of vector integers1 is " << integers1.size() 
		<< "\nvector after initialization:" << endl;
	outputVector(integers1);

	cout << "\nSzie of vector integers2 is " << integers2.size()
		<< "\nvector after initialization:" << endl;
	outputVector(integers2);

	cout << "\nEnter 17 integers:" << endl;
	inputVector(integers1);
	inputVector(integers2);

	cout << "\nAfter input, the vectors contain:\n" << "integers1:" << endl;
	outputVector(integers1);
	cout << "integers2:" << endl;
	outputVector(integers2);

	cout << "\nEvaluating: integers1 != intergers2" << endl;
	if (integers1!=integers2) {
		cout << "integers1 and intrgers2 are nit equal" << endl;
	}

	vector<int> integers3(integers1);

	cout << "\nSize if vector integers3 is " << integers3.size()
		<< "\nvectorafter initialization:" << endl;
	outputVector(integers3);

	cout << "\nAssigning integers2 to integers1:" << endl;
	integers1 = integers2;

	cout << "integers1:" << endl;
	outputVector(integers1);
	cout << "integers2:" << endl;
	outputVector(integers2);

	cout << "\nEvaluating: integers1 == integers2" << endl;
	if (integers1 == integers2) {
		cout << "integers1 and integers2 are equal" << endl;
	}

	cout << "\nintegers1[5]" << integers1[5];
	cout << "\n\nAssigning 1000 to integers1[5]" << endl;
	integers1[5] = 1000;
	cout << "integers1:" << endl;
	outputVector(integers1);

	cout << "\nAttempt to assign 1000 to integers1.at(15)" << endl;
	//integers1.at(15) = 1000;
}

void VectorSimp00::outputVector(const vector<int> &array) {
	size_t i;
	for (i = 0; i < array.size(); i++) {
		cout << setw(12) << array[i];
		if ((i+1)%4 == 0) {
			cout << endl;
		}
	}
	if (i%4 != 0) {
		cout << endl;
	}
}

void VectorSimp00::inputVector(vector<int> &array) {
	for (size_t i = 0; i < array.size(); i++) {
		cin >> array[i];
	}
}
