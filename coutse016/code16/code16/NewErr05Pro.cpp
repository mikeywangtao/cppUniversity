#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

using namespace std;

void disNewerr05Pro() {
	double *ptr[50];

	try {
		for (int i = 0; i < 50; i++) {
			ptr[i] = new double[50000000];
			cout << "Allocated 5000000 double in ptr[" << i << "] \n";
		}
	} catch (bad_alloc &memoryAllocationException) {
		cerr << "Exception occurred: "
			<< memoryAllocationException.what() << endl;
	}
}