//#pragma once
#ifndef CLSTIME00_H
#define CLSTIME00_H

#include "stdafx.h"
#include "string"

using namespace std;



class ClsTime01 {
public:
	ClsTime01();
	virtual ~ClsTime01();

	void setTime(int, int, int);
	void printUniversal();
	void printStandard();


private:
	int hour;
	int minute;
	int second;
};

#endif

