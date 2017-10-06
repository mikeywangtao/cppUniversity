#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "Sizeof04.h"

using namespace std;


Sizeof04::Sizeof04() {}
Sizeof04::~Sizeof04() {}

void Sizeof04::disSizeof0400() {
	double array[20];

	cout << "The number of bytes in the array is : " << sizeof(array);
	cout << "\nThe number if bytes returned by getSize : " << disGetSize(array) << endl;
}

size_t Sizeof04::disGetSize(double *ptr) {
	return sizeof(ptr);
}
