#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "new"

using namespace std;

void customNewHandler() {
	cerr << "customNewHadnler was called ";
	abort();
}

void disNewerr06Pro() {
	double *ptr[50];

	set_new_handler(customNewHandler);

	for (int i = 0; i < 50; i++) {
		ptr[i] = new double[50000000];
		cout << "Allocated 50000000 double in ptr[" << i << "] \n";
	}
}