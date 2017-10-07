#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "ClsTime01.h"

using namespace std;


ClsTime01::ClsTime01() {
	hour = 0;
	minute = 0;
	second = 0;
}
ClsTime01::~ClsTime01() {}

void ClsTime01::setTime(int h, int m, int s) {
	hour = (h>=0 && h<24) ? h : 0;
	minute = (m>=0 && m<60) ? m : 0;
	second = (s>=0 && s<60) ? s : 0;
}

void ClsTime01::printUniversal() {
	cout << setfill('0') << setw(2) << hour << ":"
		<< setw(2) << minute << ":" << setw(2) << second << endl;
}

void ClsTime01::printStandard() {
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
		<< setfill('0') << setw(2) << minute << ":"
		<< setw(2) << second 
		<< ((hour < 12) ? " AM" : " PM") << endl;

}
