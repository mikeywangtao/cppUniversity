#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"
#include "cstdlib"
#include "ctime"

#include "DeckOfCards06.h"

using namespace std;

void disDeckOfCards06Pro() {
	DeckOfCards06 objDoc06;
	objDoc06.shuffle();
	objDoc06.deal();
}