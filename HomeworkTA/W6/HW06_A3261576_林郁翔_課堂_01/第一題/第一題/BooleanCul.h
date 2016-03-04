#pragma once
#include <string>
using namespace std;
class BooleanCul
{
	friend istream &operator>>(istream&, BooleanCul&);
private:
	char binNum[8], binaryNum1[8], binaryNum2[8];
	string OrHex, AndHex;
public:
	void setHex();
	BooleanCul();
	~BooleanCul();
	BooleanCul(BooleanCul a, BooleanCul b);
	void printBoolean(BooleanCul c);
	BooleanCul culOR();
	BooleanCul culAND();
	static void ConvertToBin(string*h);
	static string ConvertToHex(string*h);

};

