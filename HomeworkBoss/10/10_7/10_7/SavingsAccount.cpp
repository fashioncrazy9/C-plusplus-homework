#include "SavingsAccount.h"
#include <iostream>
using namespace std;

//��l��
double SavingsAccount::annualInterestRate=0;

SavingsAccount::SavingsAccount()
{

}
SavingsAccount::SavingsAccount(double e)
{
	SavingsAccount::annualInterestRate = 0.03;
	setBalance(e);//��l��
}

SavingsAccount::~SavingsAccount()
{
}
double SavingsAccount::getSavingBalance(){
	return savingBalance;
}
void SavingsAccount::printfSavingBalance(){
	cout << "�s�l�B:$" << savingBalance<<endl;
}
void  SavingsAccount::setBalance(double e){
	savingBalance = e;
}
void SavingsAccount::calculateMounthlyInterest(){
	//�p��C��s�ڧQ��
	savingBalance = (savingBalance*annualInterestRate) / 12.0 + savingBalance;
}
void SavingsAccount::modifyInterestRate(double rate){
	//�]�wstatic annualInterestRate���s��
	annualInterestRate = rate;
}

void getAnnualInterestRate(){


}

