/*
C++大学教程
第二章
第5个例子 逻辑判断

每章采用一个code.cpp作为mian
*/
#include "stdafx.h"
#include "cstdio"
#include "iostream"

using namespace std;

int disCpp005() {
	int intNumber1;
	int intNumber2;

	cout << "请输入需要比较的两个数字：" << endl;
	cin >> intNumber1 >> intNumber2;

	if (intNumber1 == intNumber2) {
		cout << intNumber1 << " 等于 " << intNumber2 << endl;
	}

	if (intNumber1 == intNumber2) {
		cout << intNumber1 << " 不等于 " << intNumber2 << endl;
	}

	if (intNumber1 > intNumber2) {
		cout << intNumber1 << " 大于 " << intNumber2 << endl;
	}

	if (intNumber1 < intNumber2) {
		cout << intNumber1 << " 小于 " << intNumber2 << endl;
	}

	if (intNumber1 >= intNumber2) {
		cout << intNumber1 << " 大于等于 " << intNumber2 << endl;
	}

	if (intNumber1 <= intNumber2) {
		cout << intNumber1 << " 小于等于 " << intNumber2 << endl;
	}

	return 0;
}
