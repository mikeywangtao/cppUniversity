#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"

#include "ClsCreDes04.h"

using namespace std;


ClsCreDes04::ClsCreDes04() {}


ClsCreDes04::ClsCreDes04(int ID, string messagesString) {
	objID = ID;
	message = messagesString;

	cout << "Object  " << objID
		<< "    constructor runs  " << message << endl;
}

ClsCreDes04::~ClsCreDes04() {
	cout << ((objID==1 || objID==6)? "\n":"");
	cout << "Des Object  " << objID << "    destructor runs  " << message << endl;
}
