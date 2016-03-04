#pragma once
#include "Deck.h"
#include "Card.h"
class Hand
{
private:
	Card myHandCard[5];
public:

	Hand(Deck *myDeck);
	Hand &Show();
	~Hand();
	static void whoWin(Hand h1,Hand h2);
	
};

