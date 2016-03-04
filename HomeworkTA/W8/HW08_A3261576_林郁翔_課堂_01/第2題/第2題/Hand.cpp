#include "Hand.h"
#include <string>
#include <iostream>
#include "Card.h"
using namespace std;
Hand::Hand(Deck *myDeck)
{

	//k代表抽幾張牌
	//從後面抽到的排 變成"-";
	for (int i = 51, k = 0; k <5;i--)
	{
		if (myDeck->getMyCard(i).getSuit() != "-" &&myDeck->getMyCard(i).getSymbol() != "-")
		{
			myHandCard[k].setSuit(myDeck->getMyCard(i).getSuit());
			myHandCard[k].setSymbol(myDeck->getMyCard(i).getSymbol());
			myDeck->getMyCard(i).setSuit("-").setSymbol("-");//被拿走就變成 - 
			k++;
		}
	}
	

}

Hand &Hand::Show(){

	for (int i = 0; i < 5; i++)
	{

		cout << myHandCard[i].getSuit() << myHandCard[i].getSymbol();
		if (i!= 4 )
		{
			cout << ",";
		}
	}
	cout << endl;
	return *this;
}
Hand::~Hand()
{
}

void Hand::whoWin(Hand h1, Hand h2){

	//比對用字串
	string suitStr[4] = { "Club","Diamond" ,"Heart" ,"Spade" };
	string symbolStr[13] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K","A" };
	
	int number1,number2;//儲存最陣列值中最大的,index+1即為該號碼 *注意 K跟A是有更動位置的
	string suit1,suit2;//儲存最大值的花色

	//找最大值
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 13; j++){
			{

				if (h1.myHandCard[i].getSymbol() == symbolStr[j] && number1 < j)
				{
					number1 = j;
					suit1 = h1.myHandCard[i].getSuit();
				}

				if (h2.myHandCard[i].getSymbol() == symbolStr[j] && number2 < j)
				{
					number2 = j;
					suit2 = h2.myHandCard[i].getSuit();
				}

			}

		}

	}

	//TEST最大是A =13 K=12...依此類推
	//cout << "MAXNUMBER"<<number1+1<<endl;
	//cout << "MAXNUMBER" << number2 + 1 << endl;
	cout << "[#] Max card of Player A and Player B are{" << suit1 << symbolStr[number1] << "," << suit2 << symbolStr[number2] << "}"<<endl;
	//判斷值相等在判斷花色,若不是判斷值即可
	if (number1 == number2)
	{
		//同比花色大小
		//取得它們的index

		int snum1;
		int snum2;

		for (int i = 3; i >= 0; i--)
		{
			if (suit1 == suitStr[i])
			{
				snum1 = i;
				break;
			}
		}

		for (int i = 3; i >= 0; i--)
		{
			if (suit2 == suitStr[i])
			{
				snum2 = i;
				break;
			}
		}

		cout <<( (snum1 > snum2) ? "[#] Player A WIN!!" : "[#] Player B WIN!!" )<< endl;


	}
	else if(number1>=number2)
	{
		//1大
		cout << "[#] Player A WIN!!"<< endl;
	}
	else
	{
		//2大
		cout <<"[#] Player B WIN!!" << endl;
	}


	

}