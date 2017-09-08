/*
C++大学教程
第二章
第4个例子 整数相加

每章采用一个code.cpp作为mian
*/
#include "stdafx.h"
#include "cstdio"
#include "iostream"

using namespace std;

int disCpp004() 
{
	int intNumber1;
	int intNumber2;
	int intSum;

	cout << "请输入第一个数字：" << endl;
	cin >> intNumber1;

	cout << "请输入第二个数字：" << endl;
	cin >> intNumber2;

	intSum = intNumber1 + intNumber2;
	cout << "求和结果：" << intSum << endl;

	return 0;
}