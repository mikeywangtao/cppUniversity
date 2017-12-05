//#pragma once
#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "fstream"
#include "cstdlib"
#include "cctype"
#include "string"
#include "vector"

#include "stdexcept"

#ifndef		DBZE01_H
#define		DBZE01_H

using namespace std;

class DivideByZeroException01 : public runtime_error {
public:
	DivideByZeroException01() :runtime_error("attempted to divide by zero!") {}
	virtual ~DivideByZeroException01();
};
#endif

