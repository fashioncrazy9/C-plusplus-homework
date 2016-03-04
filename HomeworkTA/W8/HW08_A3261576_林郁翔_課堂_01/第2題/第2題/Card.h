#pragma once
#include <string>
using namespace std;
class Card
{
private:
	string suit;
	string symbol;
public:
	Card &setSuit(string i);
	Card &setSymbol(string c);
	string getSuit();
	string getSymbol();
	Card();
	~Card();
};

