#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "ClsIncrement01.h"

using namespace std;



ClsIncrement01::ClsIncrement01(int c, int i) :
  count(c),
	increment(i){

}

ClsIncrement01::~ClsIncrement01() {}

void ClsIncrement01::print() const {
	cout << "count = " << count << "// increment = " << increment << endl;
}

