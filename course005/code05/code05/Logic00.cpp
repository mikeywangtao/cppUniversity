#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "Logic00.h"

using namespace std;

Logic00::Logic00() {}
Logic00::~Logic00() {}

void Logic00::disLogic0000() {
	cout << "Logical And && "
		<< "\ntrue && true  ---- " << (true && true)
		<< "\ntrue && false  ---- " << (true && false)
		<< "\nfalse && true  ---- " << (false && true)
		<< "\nfalse && false  ---- " << (false && false)
		<< endl;
	cout << endl;

	cout << "Logical Or || "
		<< "\ntrue || true  ---- " << (true || true)
		<< "\ntrue || false  ---- " << (true || false)
		<< "\nfalse || true  ---- " << (false || true)
		<< "\nfalse || false  ---- " << (false || false)
		<< endl;
	cout << endl;

	cout << "Logical Not ! "
		<< "\n!true  ---- " << (!true)
		<< "\n!false  ---- " << (!false)
		<< endl;
	cout << endl;
}
