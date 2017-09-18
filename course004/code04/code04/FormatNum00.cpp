#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"

#include "FormatNum00.h"

using namespace std;

FormatNum00::FormatNum00() {}
FormatNum00::~FormatNum00() {}

void FormatNum00::disFormatOutput() {
	//格式化数字 小数点后保留2位，固定输出长度，输出125.2648953158
	cout << "格式化数字 小数点后保留2位，固定输出长度，输出125.2648953158 ---- " << endl;
	cout << "S:" << setprecision(2) << fixed << 125.2648953158 << ":E" << endl;
	cout << endl;

	//输出宽度10个，左对齐，不足位使用-补齐，输出3
	cout << "输出宽度10个，左对齐，不足位使用-补齐，输出3 ----- " << endl;
	cout << "S:" << setw(10) << setfill('-') << left << 3 << ":E" << endl;
	cout << endl;

	//输出宽度8个，右对齐，不足位使用0补齐，输出14
	cout << "输出宽度8个，右对齐，不足位使用0补齐，输出14 ---- " << endl;
	cout << "S:" << setw(8) << setfill('0') << right << 14 << ":E" << endl;
	cout << endl;
}
