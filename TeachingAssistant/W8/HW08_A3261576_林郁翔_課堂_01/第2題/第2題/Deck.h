#pragma once
#include <string>
#include "Card.h"
using namespace std;

class Deck
{
private:
	Card myCard[52];
	void initizeMyCard();
public:

	Card &getMyCard(int i);
	string getMyCardSuit(int);
	string getMyCardSymbol(int);
	void Shuffle();
	void Show();
	Deck();
	~Deck();
};

