#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

using namespace std;

class Cls04Implementaion {
public:
	Cls04Implementaion(int v):
	  value(v){
	}
	void setValue(int v) {
		value = v;
	}
	int getValue() {
		return value;
	}

private:
	int value;
};