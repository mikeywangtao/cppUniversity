#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"

#include "FormatNum00.h"

using namespace std;

FormatNum00::FormatNum00() {}
FormatNum00::~FormatNum00() {}

void FormatNum00::disFormatOutput() {
	//��ʽ������ С�������2λ���̶�������ȣ����125.2648953158
	cout << "��ʽ������ С�������2λ���̶�������ȣ����125.2648953158 ---- " << endl;
	cout << "S:" << setprecision(2) << fixed << 125.2648953158 << ":E" << endl;
	cout << endl;

	//������10��������룬����λʹ��-���룬���3
	cout << "������10��������룬����λʹ��-���룬���3 ----- " << endl;
	cout << "S:" << setw(10) << setfill('-') << left << 3 << ":E" << endl;
	cout << endl;

	//������8�����Ҷ��룬����λʹ��0���룬���14
	cout << "������8�����Ҷ��룬����λʹ��0���룬���14 ---- " << endl;
	cout << "S:" << setw(8) << setfill('0') << right << 14 << ":E" << endl;
	cout << endl;
}
