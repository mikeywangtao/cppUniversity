//#pragma once
#ifndef Cls04Interface_H
#define Cls04Interface_H

#include "string"

using namespace std;

class Cls04Implementaion;

class Cls04Interface {
public:
	Cls04Interface(int v);
	virtual ~Cls04Interface();

	void setValue(int );
	int getValue();


private:
	Cls04Implementaion *ptrCls04Impl;
};

#endif


