#include "Card.h"

Card::Card(int rank, string suit)
{
	this->Rank = rank;
	this->Suit = suit;
}

void Card::Print()
{
	cout << this->GetRank() << " of " << this->Suit;
}

string Card::ToString()
{
	return this->GetRank() + " of " + this->Suit;
}

string Card::GetRank()
{
	switch (this->Rank)
	{
	case 1:
		return "A";
		break;
	case 11:
		return "J";
		break;
	case 12:
		return "Q";
		break;
	case 13:
		return "K";
		break;
	default:
		return to_string(this->Rank);
		break;
	}
}

void Card::SetRank(int newRank)
{
	this->Rank = newRank;
}

string Card::GetSuit()
{
	return this->Suit;
}

void Card::SetSuit(string newSuit)
{
	this->Suit = newSuit;
}
