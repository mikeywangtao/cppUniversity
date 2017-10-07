#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "ClsCreDes04.h"

using namespace std;

ClsCreDes04 first(1, "(global before main)");

void disCreate() {
	cout << "\nCreate function : execution begins " << endl;
	ClsCreDes04 fifth(5, "(local automatic in create )");
	static ClsCreDes04 sixth(6, "(local static in create )");
	ClsCreDes04 serventh(7, "(local automatic in create )");
	cout << "\nCreate function : execution ends " << endl;
}

void disClsCredes04() {
	
	cout << "\nMain Function : execution begins " << endl;
	ClsCreDes04 second(2, "(local automatic in main)");
	static ClsCreDes04 third(3, "(local static in main)");
	disCreate();

	cout << "\nMain Function : execution resumes " << endl;
	ClsCreDes04 fourth(4, "(local automatic in main)");
	cout << "\nMain Function : execution ends " << endl;
}

