// code.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout << "������......" << endl;
  
	//No. 01
	//GradeBook objGradeBook;
	//objGradeBook.displayMessage(); //No. 01

	//No. 02
	//string strCourseName;
	//GradeBook objGradeBook;

	//cout << "Please enter the course name : " << endl;
	//getline(cin, strCourseName); //ʹ��getline���������Զ�ȡ����̨����ĵ�ǰ��������
	//cout << endl;

	//objGradeBook.displayMessage(strCourseName);

	//dis03();
	dis04();

	cout << endl;
	system("pause");
	return 0;
}

