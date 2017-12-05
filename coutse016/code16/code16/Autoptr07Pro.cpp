#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "memory"
#include "new"
#include "Integer07.h"

using namespace std;

void disAutoptr07Pro() {
	cout << "Creating an auto_ptr object that points to an Integer \n";
	auto_ptr<Integer07> ptrToInteger(new Integer07(7));

	cout << "\nUsing the auto_ptr to manipulate the Integer \n";
	ptrToInteger->setInteger(99);

	cout << "Integer after setInteger: " << (*ptrToInteger).getInteger() << endl;
}

