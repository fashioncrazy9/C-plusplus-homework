#include <iostream>
using namespace std;
#include "Deck.h"
#include "Card.h"
#include <cstdlib>
#include <time.h>
void Deck::initizeMyCard(){

	string suitStr[4] = { "Spade", "Heart", "Diamond", "Club" };
	string symbolStr[13] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };

	for (int i = 0,k=0; i < 4; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			myCard[k++].setSuit(suitStr[i]).setSymbol(symbolStr[j]);
		}
	}
}
void Deck::Shuffle(){
	cout << "[#] the Deck has been shuffled" << endl;
	srand(time(NULL));
	for (int i = 0; i < 500; i++)
	{
		int index1 = rand() % 52;
		int index2 = rand() % 52;
		Card temp = myCard[index1];
		myCard[index1] = myCard[index2];
		myCard[index2] = temp;
	}
}
Deck::Deck()
{
	initizeMyCard();
}
string Deck::getMyCardSuit(int i){
	return myCard[i].getSuit();
}
string Deck::getMyCardSymbol(int i){
	return myCard[i].getSymbol();
}

Deck::~Deck()
{
}

void Deck::Show(){

	cout << "[#]show"<<endl;
	for (int i = 0; i < 52; i++)
	{
		cout << getMyCardSuit(i)<<getMyCardSymbol(i)<<endl;
	}

}
