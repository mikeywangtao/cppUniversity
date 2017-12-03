#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cctype"
#include "cstdlib"
#include "string"
#include "vector"

using namespace std;

template <typename T>
void printArray(const T *array, int count) {
	for (int i = 0; i < count; i++) {
		cout << array[i] << " ";
	}
}