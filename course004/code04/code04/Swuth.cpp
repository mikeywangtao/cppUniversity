#include "stdafx.h"
#include "Swuth.h"
#include "cstdio"
#include "iostream"
#include "string"

using namespace std;


Swuth::Swuth() {}

Swuth::~Swuth() {}

void Swuth::dis00() {
	int subInt[4] = {50, 90, 60, 40};

	for (int i = 0; i < sizeof(subInt); i = i+1) {
		int intTmp = subInt[i];
			switch(intTmp) {
			case 	90:
			  cout << "优秀：" << intTmp << endl;
				break;
			case 	60:
				cout << "及格：" << intTmp << endl;
				break;
			default:
				cout << "重考：" << intTmp << endl;
				break;
			}
	}
}
