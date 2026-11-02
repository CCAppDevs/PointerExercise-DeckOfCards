#pragma once
#include "Card.h"
#include <vector>

using namespace std;

class Deck
{
private:
	vector<Card> cards;

public:
	Deck(); // constructor

	void Shuffle();

	Card DrawCard();

	int GetCardsRemaining();

	void Reset();
};

