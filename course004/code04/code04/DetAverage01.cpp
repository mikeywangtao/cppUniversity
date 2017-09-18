#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "string"
#include "iomanip"

#include "DetAverage01.h"

using namespace std;

DetAverage01::DetAverage01() {}

DetAverage01::~DetAverage01() {}

void DetAverage01::disDetermineClassAverage() {
	int intTotal;
	int intGradeCounter;
	int intGrade;
	double douAverage;

	intTotal = 0;
	intGradeCounter = 0;

	cout << "Enter grade or -1 to quit: " << endl;
	cin >> intGrade;

	while (intGrade != -1) {
		intTotal = intTotal + intGrade;
		intGradeCounter = intGradeCounter + 1;

		cout << "Enter grade or -1 quit: " << endl;
		cin >> intGrade;

	}

	if (intGradeCounter != 0) {
		//staic_case<double> 强制转换基本类型 尖括号中为目标类型
		douAverage = static_cast<double>(intTotal) / intGradeCounter;
		cout << " Total of all " << intGradeCounter << endl;
		cout << " grades entered is : " << intTotal << endl;
		//setprecision(5) 输出精度控制 括号内是小数点位数
		//fixed 流操作符 控制输出使用补齐方式
		cout << " Class average is : " << setprecision(5) << fixed << douAverage << endl;
	} else {
		cout << "No grades were entered. " << endl;
	}
}
