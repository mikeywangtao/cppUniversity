#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "cstdlib"
#include "vector"

#include "Cls02Array.h"

using namespace std;

//Cls02Array::Cls02Array() {}
Cls02Array::Cls02Array(int arraySize) {
	size = (arraySize>0? arraySize : 10);
	ptr = new int[size];
	for (int i = 0; i < size; i++) {
		ptr[i] = 0;
	}
}

Cls02Array::Cls02Array(const Cls02Array &arrayToCopy)
	: size(arrayToCopy.size) {
	ptr = new int[size];
	for (int i = 0; i < size; i++) {
		ptr[i] = arrayToCopy.ptr[i];
	}
}

Cls02Array::~Cls02Array() {
	delete[]ptr;
	ptr = 0;
}

int Cls02Array::getSize() const {
	return size;
}

bool Cls02Array::operator==(const Cls02Array &right) const {
	if (size != right.size) {
		return false;
	}
	for (int i = 0; i < size; i++) {
		if (ptr[i] != right.ptr[i]) {
			return false;
		}
	}
	return true;
}

int &Cls02Array::operator[](int subscript) {
	if (subscript <0 || subscript >= size) {
		cerr << "\nError: Subscript " << subscript 
			<< " out of range." << endl;
		system("pause");
		exit(1);
	}
	return ptr[subscript];
}

int Cls02Array::operator[](int subscript) const {
	if (subscript<0 || subscript>=size) {
		cerr << "\nError: Subscript " << subscript 
			<< " out of range." << endl;
		system("pause");
		exit(1);
	}
	return ptr[subscript];
}

const Cls02Array &Cls02Array::operator=(const Cls02Array &right) {
	if (this != &right) {
		if (size != right.size) {
			delete[]ptr;
			size = right.size;
			ptr = new int[size];
		}
		for (int i = 0; i < size; i++) {
			ptr[i] = right.ptr[i];
		}
	}
	return *this;
}

ostream &operator<<(ostream &output, const Cls02Array &a) {
	int i;
	for (i = 0; i < a.size; i++) {
		output << setw(12) << a.ptr[i];
		if ((i+1)%4 == 0) {
			output << endl;
		}
	}
	if (i%4 != 0) {
		output << endl;
	}
	return output;
}
istream &operator>>(istream &input, Cls02Array &a) {
	for (int i = 0; i < a.size; i++) {
		input >> a.ptr[i];
	}
	return input;
}
