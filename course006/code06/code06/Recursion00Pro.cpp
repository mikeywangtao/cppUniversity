#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "Recursion00.h"

using namespace std;

void disRec00Pro(){
	Recursion00 objRec00;
	int intBef = 1;
	int intNow = 1;
	int intLoop = 1;
	int intLoopBase = 10;
	cout << "Loop :  " << intBef << " //  lonBefNump: " << intNow << " //  lonNowp:" << intLoop << endl;
	objRec00.disRec00(intBef, intNow, intLoop, intLoopBase);
}