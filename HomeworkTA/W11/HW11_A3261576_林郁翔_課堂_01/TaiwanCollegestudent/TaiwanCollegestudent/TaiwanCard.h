#pragma once
#include <string>
#include "Date.h"
using namespace std;
class TaiwanCard
{
private:
	string name, id, sex;
	Date*date;
public:

	TaiwanCard &setName(string = "NO NAME");
	TaiwanCard &setId(string = "NO ID");
	TaiwanCard &setSex(string = "NO SEX");
	TaiwanCard &setDate(int m = 1, int d = 1, int y = 1995);
	string getName();
	string getId();
	string getSex();
	Date getDate();
	static void checkYear(TaiwanCard p);
	TaiwanCard();
	TaiwanCard(string s1, string s2, string s3, int i1, int i2, int i3);
	~TaiwanCard();
	virtual void printfIndroduce();
};

