/*
C++��ѧ�̳�
�ڶ���
��4������ �������

ÿ�²���һ��code.cpp��Ϊmian
*/
#include "stdafx.h"
#include "cstdio"
#include "iostream"

using namespace std;

int disCpp004() 
{
	int intNumber1;
	int intNumber2;
	int intSum;  //��
	int intSubtract;  //��
	int intRide;  //��
	int intDivide;  //��
	int intMode;  //ģ

	cout << "�������һ�����֣�" << endl;
	cin >> intNumber1;

	cout << "������ڶ������֣�" << endl;
	cin >> intNumber2;

	intSum = intNumber1 + intNumber2;
	cout << "��ͽ����" << intSum << endl;

	intSubtract = intNumber1 - intNumber2;
	cout << "�������" << intSubtract << endl;

	intRide = intNumber1 * intNumber2;
	cout << "��������" << intRide << endl;

	intDivide = intNumber1 / intNumber2;
	cout << "���̽����" << intDivide << endl;

	intMode = intNumber1 % intNumber2;
	cout << "��ģ�����" << intMode << endl;

	return 0;
}