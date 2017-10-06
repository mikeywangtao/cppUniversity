//#pragma once
#include "string"

using namespace std;

class DeckOfCards06 {
public:
	DeckOfCards06();
	~DeckOfCards06();

	void shuffle();
	void deal();

private :
	int deck[4][13];
};

