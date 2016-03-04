#include "Card.h"
#include <iostream>
#include <string>
using namespace std;

Card::Card()
{
}

string Card::getSuit(){

	return suit;
}
string Card::getSymbol(){
	return symbol;
}
Card::~Card()
{
}
Card &Card::setSuit(string s){

	suit = s;

	return *this;
}
Card &Card::setSymbol(string c){
	symbol = c;
	return *this;
}