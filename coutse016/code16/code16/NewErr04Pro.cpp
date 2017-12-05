#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

using namespace std;

void disNewErr04Pro() {
	double *ptr[50];

	for (int i = 0; i < 50; i++) {
		ptr[i] = new double[50000000];
		if (ptr[i]==0) {
			cerr << "Memory allocation failed for ptr[" << i << "] \n";
			break;
		} else {
			cout << "Allocated 50000000 double in ptr[" << i << "] \n";
		}
	}
}