#pragma once
#include <string>
#include "Date.h"
#include "TaiwanCard.h"
using namespace std;
class PCCUCard :public  TaiwanCard
{
private:
	string schoolName, id;
	int year;
public:
	PCCUCard &setSchoolName(string="PCCU");
	PCCUCard &setId(string="NO ID");
	PCCUCard &setYear(int=103);
	string getSchoolName();
	string getId();
	int getYear();
	static void checkYear(PCCUCard p);
	PCCUCard();
	PCCUCard(string s1, string s2, int y);
	~PCCUCard();
	virtual void printfIndroduce();
};