#include "Deck.h"

Deck::Deck()
{
	Reset();
}

void Deck::Shuffle()
{
}

Card Deck::DrawCard()
{
	Card drawnCard = this->cards[0];

	// delete the card from the array/vector

	// return the card to the caller
}

int Deck::GetCardsRemaining()
{
	return 0;
}

void Deck::Reset()
{
	for (int i = 0; i < 4; i++)
	{
		string suit = "";

		switch (i)
		{
		case 0:
			suit = "Clubs";
			break;
		case 1:
			suit = "Diamonds";
			break;
		case 2:
			suit = "Hearts";
			break;
		case 3:
			suit = "Spades";
			break;
		default:
			suit = "Unknown";
			break;
		}

		for (int j = 0; j < 13; j++) {
			Card crd = Card(j + 1, suit);
			cards.push_back(crd);
		}
	}
}
