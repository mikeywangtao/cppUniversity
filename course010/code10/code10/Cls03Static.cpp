#include "stdafx.h"		
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "Cls03Static.h"

using namespace std;


Cls03Static::Cls03Static() {}
Cls03Static::~Cls03Static() {}

//静态变量必须初始化，否则报：无法解析的外部符号。
int Cls03Static::intNumber = 0;
int Cls03Static::getIntNumber() {
	return intNumber;
}

void Cls03Static::setAddIntNumber() {
	intNumber = intNumber + 1;
}

void Cls03Static::setSubIntNumber() {
	intNumber = intNumber - 1;
}
