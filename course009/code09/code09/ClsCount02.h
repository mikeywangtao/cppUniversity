//#pragma once
#ifndef CLSCOUNT02_H
#define CLSCOUNT02_H

#include "string"

using namespace std;

class ClsCount02 {
public:
	ClsCount02();
	virtual ~ClsCount02();

	void setX(int);
	void print();


private:
	int x;
};
#endif

