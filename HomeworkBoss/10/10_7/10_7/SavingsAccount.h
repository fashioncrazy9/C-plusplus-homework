#pragma once
class SavingsAccount
{
private:
	static double annualInterestRate;//�Q�v
	double savingBalance;//�l�B
	void setBalance(double e);//�]�w�l�B
public:
	void setAnnualInterestRate(double r);//�]�w�Q�v
	double getSavingBalance();//���o��e�l�B
	SavingsAccount(double e);//�x�s
	SavingsAccount();
	~SavingsAccount();
	void printfSavingBalance();//�L�X�s�l�B
	void calculateMounthlyInterest();//�p��C��s�ڧQ��
	static void modifyInterestRate(double rate);//�]�wannualInterestRate
};
