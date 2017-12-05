#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"
#include "memory"

#include "Integer07.h"

using namespace std;

Integer07::Integer07(int i )
	: value(i) {
	cout << "Constructor for Integer " << value << endl;
}
Integer07::~Integer07() {
	cout << "Destructor for Integer " << value << endl;
}

void Integer07::setInteger(int i) {
	value = i;
}

int Integer07::getInteger() const {
	return value;
}

