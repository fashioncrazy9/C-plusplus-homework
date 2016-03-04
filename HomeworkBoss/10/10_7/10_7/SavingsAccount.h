#pragma once
class SavingsAccount
{
private:
	static double annualInterestRate;//利率
	double savingBalance;//餘額
	void setBalance(double e);//設定餘額
public:
	void setAnnualInterestRate(double r);//設定利率
	double getSavingBalance();//取得當前餘額
	SavingsAccount(double e);//儲存
	SavingsAccount();
	~SavingsAccount();
	void printfSavingBalance();//印出新餘額
	void calculateMounthlyInterest();//計算每月存款利息
	static void modifyInterestRate(double rate);//設定annualInterestRate
};
