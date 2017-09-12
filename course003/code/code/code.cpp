// code.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"
#include "cstdio"
#include "iostream"

//#include "string"

extern void dis03();
extern void dis04();

using namespace std;

class GradeBook {
public:
	//No. 01
	//void displayMessage() {
	//	cout << "Welcome to a the Grade Book!" << endl;
	//}

	//No. 02
	//void displayMessage(string strCourseName) {
	//	cout << "Welcome to the grade book for \n" << strCourseName << endl;
	//}
};

int main() {
	cout << "第三章......" << endl;
  
	//No. 01
	//GradeBook objGradeBook;
	//objGradeBook.displayMessage(); //No. 01

	//No. 02
	//string strCourseName;
	//GradeBook objGradeBook;

	//cout << "Please enter the course name : " << endl;
	//getline(cin, strCourseName); //使用getline函数，可以读取控制台输入的当前行完整。
	//cout << endl;

	//objGradeBook.displayMessage(strCourseName);

	//dis03();
	dis04();

	cout << endl;
	system("pause");
	return 0;
}

