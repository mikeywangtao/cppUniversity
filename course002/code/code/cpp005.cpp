/*
C++��ѧ�̳�
�ڶ���
��5������ �߼��ж�

ÿ�²���һ��code.cpp��Ϊmian
*/
#include "stdafx.h"
#include "cstdio"
#include "iostream"

using namespace std;

int disCpp005() {
	int intNumber1;
	int intNumber2;

	cout << "��������Ҫ�Ƚϵ��������֣�" << endl;
	cin >> intNumber1 >> intNumber2;

	if (intNumber1 == intNumber2) {
		cout << intNumber1 << " ���� " << intNumber2 << endl;
	}

	if (intNumber1 == intNumber2) {
		cout << intNumber1 << " ������ " << intNumber2 << endl;
	}

	if (intNumber1 > intNumber2) {
		cout << intNumber1 << " ���� " << intNumber2 << endl;
	}

	if (intNumber1 < intNumber2) {
		cout << intNumber1 << " С�� " << intNumber2 << endl;
	}

	if (intNumber1 >= intNumber2) {
		cout << intNumber1 << " ���ڵ��� " << intNumber2 << endl;
	}

	if (intNumber1 <= intNumber2) {
		cout << intNumber1 << " С�ڵ��� " << intNumber2 << endl;
	}

	return 0;
}
