#include <iostream>
#include "Card.h"
#include "Deck.h"

// game of hi/low

using namespace std;

bool Evaluate(char prediction, Card prev, Card current);

int main()
{
	// array of cards

	Deck deck = Deck();
	deck.Shuffle();

	bool isPlaying = true;

	// draw a card to "start" the game
	Card prev = deck.DrawCard();

	while (isPlaying)
	{
		cout << "The previous card is: " << prev.ToString() << endl;

		cout << "Do you think the next card is (H)igh or (L)ow? ";
		char choice;

		cin >> choice; // TODO: make this always a capital.

		Card current = deck.DrawCard();

		if (Evaluate(choice, prev, current))
		{
			// congrats, continue
			cout << "CONGRATS! Lets play again!\n";
			prev = current;
		}
		else
		{
			// game over, exit
			cout << "You Lose! Game Over!\n";
			isPlaying = false;
		}
	}

	
}

bool Evaluate(char prediction, Card prev, Card current)
{
	int predictionValue = -1;

	if (prediction == 'H')
	{
		predictionValue = 1;
	}

	if ((current.CompareTo(prev) == 0) || (current.CompareTo(prev) == predictionValue)) // same
	{
		return true;
	}

	return false;
}