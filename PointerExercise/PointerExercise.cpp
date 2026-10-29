#include <iostream>
#include "Card.h"
#include <vector>

using namespace std;

int main()
{
	// array of cards

	vector<Card> deck = vector<Card>();

	// loop over each suit
		// loop over each rank
			// create a card and add it to the deck

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
			deck.push_back(crd);
		}
	}

	cout << "testing\n";
}

