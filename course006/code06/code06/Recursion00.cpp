#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "Recursion00.h"

using namespace std;


Recursion00::Recursion00() {}
Recursion00::~Recursion00() {}

void Recursion00::disRec00(unsigned long lonBefNump, unsigned long lonNowp, int intNump, int intLoopBase) {
	unsigned long lonTmp = lonNowp;
	if (intNump < intLoopBase) {
		intNump = intNump + 1;
		lonTmp = lonNowp + lonBefNump;
		cout << "Loop :  " << intNump  << " //  lonBefNump: " << lonBefNump  << " //  lonNowp:" << lonTmp << endl;
		disRec00(lonNowp, lonTmp, intNump, intLoopBase);
	} else {
		//¶àÒ»±é 
		intNump = intNump + 1;
		lonTmp = lonNowp + lonBefNump;
		cout << "Loop :  " << intNump << " //  lonBefNump: " << lonBefNump << " //  lonNowp:" << lonTmp << endl;
	}
}
