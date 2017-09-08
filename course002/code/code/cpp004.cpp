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
	int intSum;  //加
	int intSubtract;  //减
	int intRide;  //乘
	int intDivide;  //除
	int intMode;  //模

	cout << "请输入第一个数字：" << endl;
	cin >> intNumber1;

	cout << "请输入第二个数字：" << endl;
	cin >> intNumber2;

	intSum = intNumber1 + intNumber2;
	cout << "求和结果：" << intSum << endl;

	intSubtract = intNumber1 - intNumber2;
	cout << "求差结果：" << intSubtract << endl;

	intRide = intNumber1 * intNumber2;
	cout << "求积结果；" << intRide << endl;

	intDivide = intNumber1 / intNumber2;
	cout << "求商结果：" << intDivide << endl;

	intMode = intNumber1 % intNumber2;
	cout << "求模结果：" << intMode << endl;

	return 0;
}