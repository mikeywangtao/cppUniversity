//#pragma once
#ifndef ClsCreDes04_H
#define ClsCreDes04_H

#include "string"

using namespace std;

class ClsCreDes04 {
public:
	ClsCreDes04();
	virtual ~ClsCreDes04();

	ClsCreDes04(int, string);

private:
	int objID;
	string message;
};

#endif