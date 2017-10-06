#include "stdafx.h"
#include "cstdio"
#include "iostream"
#include "iomanip"
#include "string"
#include "cctype"
#include "vector"
#include "ctime"
#include "cstdlib"

#include "DeckOfCards06.h"

using namespace std;

DeckOfCards06::DeckOfCards06() {
	for (int row = 0; row <= 3; row++) {
		for (int column = 0; column <= 12; column++) {
			deck[row][column] = 0;
		}
	}
	srand(time(0));
}
DeckOfCards06::~DeckOfCards06() {}

void DeckOfCards06::shuffle() {
	int row;
	int column;

	for (int card = 1; card <= 52; card++) {
		do {
			row = rand() % 4;
			column = rand() % 13;
		} while (deck[row][column]!=0);
		deck[row][column] = card;
	}
}

void DeckOfCards06::deal() {
	static const char *suit[4] = {"Hearts","Diamonds","Clubs","Spades"};
	static const char *face[13] = {
		"Ace",  "Deuce", "Three", "Four", "Five",  "Six", "Seven",
		"Eight","Nine",  "Ten",   "Jack", "Queen", "King"};

	for (int card = 1; card <= 52; card++) {
		for (int row = 0; row <= 3;row++) {
			for (int column = 0; column <= 12; column++) {
				if (deck[row][column]==card) {
					cout << setw(5) << right << face[column]
						<< " of " << setw(8) << left << suit[row]
						<< (card % 2 == 0 ? '\n' : '\t');
				}
			}
		}
	}

}
