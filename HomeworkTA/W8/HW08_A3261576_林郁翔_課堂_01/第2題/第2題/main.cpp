#include <iostream>
#include "Deck.h"
#include "Hand.h"
using namespace std;


int main(){
	Deck a;
	a.Shuffle();
	Hand s1(&a), s2(&a);
	cout << "[Player A] Hand¡G";
	s1.Show();
	cout << "[Player B] Hand¡G";
	s2.Show();
	Hand::whoWin(s1, s2);
	system("pause");
}