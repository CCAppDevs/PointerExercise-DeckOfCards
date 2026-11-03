#pragma once
#include "Card.h"
#include <vector>
#include <random>
#include <algorithm>

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

	void PrintDeck();
};

