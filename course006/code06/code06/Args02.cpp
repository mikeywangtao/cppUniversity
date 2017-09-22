#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"

#include "Args02.h"

using namespace std;


Args02::Args02() {}
Args02::~Args02() {}

int Args02::disBoxVolume(int intLengthp/*=1*/, int intWidthp/*=1*/, int intHeightp/*=1*/) {
	return intLengthp * intWidthp * intHeightp;
}
