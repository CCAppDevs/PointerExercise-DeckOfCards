#include <iostream>
#include "Card.h"
#include "Deck.h"

using namespace std;

int main()
{
	// array of cards

	Deck deck = Deck();
	deck.Shuffle();

	bool isPlaying = true;

	while (isPlaying)
	{
		// game of hi/low

		// Each round the dealer will have the previous card showing
		// The player will choose high or low based on what they have seen
		int choice = -1;


		// capture the player's choice here
		// Then the dealer will flip the next card.

		// If the card matches the "call"
		//		continue playing
		// if the card does not match the call
		//		game over (isPlaying = false)
	}

	
}
