#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "cstdlib"
#include "ctime"

#include "Dice00.h"

using namespace std;


Dice00::Dice00() {
	cout << "Player rolled ---- " << endl;

	intMyPoint = 0;

	disDice00();
}
Dice00::~Dice00() {}

void Dice00::disDice00() {
	enum Status {CONTINUT, WON, LOST};
	Status enmGameStatus;

	srand(time(0));

	int intSumOfDice = disRollDice();

	switch (intSumOfDice) {
	case 7:
	case 11:
		enmGameStatus = WON;
		break;
	case 2:
	case 3:
	case 13:
		enmGameStatus = LOST;
		break;
	default:
		enmGameStatus = CONTINUT;
		intMyPoint = intSumOfDice;
		cout << "Pont is :  " << intMyPoint << endl;
		break;
	}

	while (enmGameStatus == CONTINUT) {
		intSumOfDice = disRollDice();
		if (intSumOfDice == intMyPoint) {
			enmGameStatus = WON;
		} else {
			if (intSumOfDice == 7) {
				enmGameStatus = LOST;
			}
		}
	}

	if (enmGameStatus == WON) {
		cout << " Player wins!!" << endl;
	} else {
		cout << " Player loses!!!!" << endl;
	}
}

int Dice00::disRollDice() {
	int intDie1 = 1 + rand() % 6;
	int intDie2 = 1 + rand() % 6;

	int intSum = intDie1 + intDie2;

	cout << "" << intDie1 << " + " << intDie2 << " = " << intSum << endl;

	return intSum;
}
