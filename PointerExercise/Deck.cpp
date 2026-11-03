#include "Deck.h"

Deck::Deck()
{
	Reset();
}

void Deck::Shuffle()
{
	// create random device
	random_device rd;

	// seed the engine
	mt19937 engine(rd());

	// shuffle
	shuffle(this->cards.begin(), this->cards.end(), engine);
}

Card Deck::DrawCard()
{
	Card drawnCard = this->cards[0];

	// delete the card from the array/vector (at position)
	this->cards.erase(this->cards.begin());

	// return the card to the caller
	return drawnCard;
}

int Deck::GetCardsRemaining()
{
	return this->cards.size();
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

void Deck::PrintDeck()
{
	cout << "Printing the Deck\n";
	
	// for each loop
	for (Card card : this->cards)
	{
		cout << card.ToString() << endl;
	}
}
