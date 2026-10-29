#pragma once
#include <iostream>
#include <string>

using namespace std;

class Card
{
private:
	int Rank;
	string Suit;

public:
	Card(int rank, string suit);

	void Print();
	string ToString();

	// getters and setters
	string GetRank();
	void SetRank(int newRank);

	string GetSuit();
	void SetSuit(string newSuit);
};

