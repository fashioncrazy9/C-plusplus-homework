#include "Hand.h"
#include <string>
#include <iostream>
#include "Card.h"
using namespace std;
Hand::Hand(Deck *myDeck)
{

	//k�N���X�i�P
	//�q�᭱��쪺�� �ܦ�"-";
	for (int i = 51, k = 0; k <5;i--)
	{
		if (myDeck->getMyCard(i).getSuit() != "-" &&myDeck->getMyCard(i).getSymbol() != "-")
		{
			myHandCard[k].setSuit(myDeck->getMyCard(i).getSuit());
			myHandCard[k].setSymbol(myDeck->getMyCard(i).getSymbol());
			myDeck->getMyCard(i).setSuit("-").setSymbol("-");//�Q�����N�ܦ� - 
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

	//���Φr��
	string suitStr[4] = { "Club","Diamond" ,"Heart" ,"Spade" };
	string symbolStr[13] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K","A" };
	
	int number1,number2;//�x�s�̰}�C�Ȥ��̤j��,index+1�Y���Ӹ��X *�`�N K��A�O����ʦ�m��
	string suit1,suit2;//�x�s�̤j�Ȫ����

	//��̤j��
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

	//TEST�̤j�OA =13 K=12...�̦�����
	//cout << "MAXNUMBER"<<number1+1<<endl;
	//cout << "MAXNUMBER" << number2 + 1 << endl;
	cout << "[#] Max card of Player A and Player B are{" << suit1 << symbolStr[number1] << "," << suit2 << symbolStr[number2] << "}"<<endl;
	//�P�_�Ȭ۵��b�P�_���,�Y���O�P�_�ȧY�i
	if (number1 == number2)
	{
		//�P����j�p
		//���o���̪�index

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
		//1�j
		cout << "[#] Player A WIN!!"<< endl;
	}
	else
	{
		//2�j
		cout <<"[#] Player B WIN!!" << endl;
	}


	

}