#include "BooleanCul.h"
#include <iomanip>
#include <iostream>

void BooleanCul::printBoolean(BooleanCul c){
	BooleanCul AND = c;
	BooleanCul OR = c;

	AND = AND.culAND();
	this->AndHex = ConvertToHex(&AND.AndHex);//儲存在objcet內
	cout << "A AND B = " << this->AndHex << "(hex)" << endl; //印出object裡面的值

	OR=OR.culOR();
	this->OrHex = ConvertToHex(&OR.OrHex);//儲存在objcet內
	cout << "A OR B = " << this->OrHex << "(hex)" << endl; //印出object裡面的值
	
}
istream &operator>>(istream &input, BooleanCul &hex)
{
	string tmp1, tmp2;
	string mixBin;
	input >> setw(1) >> tmp1;
	BooleanCul::ConvertToBin(&tmp1);
	input >> setw(1) >> tmp2;
	BooleanCul::ConvertToBin(&tmp2);
	mixBin = tmp1 + tmp2;
	const char*c = mixBin.c_str();
	for (int i = 0; i < 8; i++)
	{
		hex.binNum[i] = c[i];
	}
	return input;
}



BooleanCul::BooleanCul()
{
	

}
BooleanCul::BooleanCul(BooleanCul a, BooleanCul b){
	for (int i = 0; i < 8; i++)
	{
		binaryNum1[i] = a.binNum[i];
		binaryNum2[i] = b.binNum[i];
	}
}
BooleanCul::~BooleanCul()
{

}
void BooleanCul::ConvertToBin(string*h){

	if (*h == "0")
	{
		*h = "0000";
	}
	else if (*h == "1")
	{
		*h = "0001";
	}
	else if (*h == "2")
	{
		*h = "0010";
	}
	else if (*h == "3")
	{
		*h = "0011";
	}
	else if (*h == "4")
	{
		*h = "0100";
	}
	else if (*h == "5")
	{
		*h = "0101";
	}
	else if (*h == "6")
	{
		*h = "0110";
	}
	else if (*h == "7")
	{
		*h = "0111";
	}
	else if (*h == "8")
	{
		*h = "1000";
	}
	else if (*h == "9")
	{
		*h = "1001";
	}
	else if (*h == "A")
	{
		*h = "1010";
	}
	else if (*h == "B")
	{
		*h = "1011";
	}
	else if (*h == "C")
	{
		*h = "1100";
	}
	else if (*h == "D")
	{
		*h = "1101";
	}
	else if (*h == "E")
	{
		*h = "1110";
	}
	else if (*h == "F")
	{
		*h = "1111";
	}

}

string BooleanCul::ConvertToHex(string*h){

	string finalHexStr="";

	string str = *h;
	string bin1[4], bin2[4];
	string mixbin1="", mixbin2="";

	const char*c = str.c_str();

	for (int i = 0; i <= 3; i++)
	{
			bin1[i] = c[i];
			mixbin1 += bin1[i];
	}
	
	for (int i = 4; i < 8; i++)
	{
		bin2[i-4] = c[i];
		mixbin2 += bin2[i-4];
	}

	if (mixbin1 == "0000")
	{
		finalHexStr = "0";
	}
	else if (mixbin1 == "0001")
	{
		finalHexStr = "1";
	}
	else if (mixbin1 == "0010")
	{
		finalHexStr = "2";
	}
	else if (mixbin1 == "0011")
	{
		finalHexStr = "3";
	}
	else if (mixbin1 == "0100")
	{
		finalHexStr = "4";
	}
	else if (mixbin1 == "0101")
	{
		finalHexStr = "5";
	}
	else if (mixbin1 == "0110")
	{
		finalHexStr = "6";

	}
	else if (mixbin1 == "0111")
	{
		finalHexStr = "7";
	}
	else if (mixbin1 == "1000")
	{
		finalHexStr = "8";
	}
	else if (mixbin1 == "1001")
	{
		finalHexStr = "9";
	}
	else if (mixbin1 == "1010")
	{
		finalHexStr = "A";
	}
	else if (mixbin1 == "1011")
	{
		finalHexStr = "B";
	}
	else if (mixbin1 == "1100")
	{
		finalHexStr = "C";
	}
	else if (mixbin1 == "1101")
	{
		finalHexStr = "D";
	}
	else if (mixbin1 == "1110")
	{
		finalHexStr = "E";
	}
	else if (mixbin1 == "1111")
	{
		finalHexStr = "F";
	}

	if (mixbin2 == "0000")
	{
		finalHexStr += "0";
	}
	else if (mixbin2 == "0001")
	{
		finalHexStr += "1";
	}
	else if (mixbin2 == "0010")
	{
		finalHexStr += "2";
	}
	else if (mixbin2== "0011")
	{
		finalHexStr += "3";
	}
	else if (mixbin2== "0100")
	{
		finalHexStr += "4";
	}
	else if (mixbin2== "0101")
	{
		finalHexStr += "5";
	}
	else if (mixbin2== "0110")
	{
		finalHexStr += "6";

	}
	else if (mixbin2== "0111")
	{
		finalHexStr+= "7";
	}
	else if (mixbin2 == "1000")
	{
		finalHexStr += "8";
	}
	else if (mixbin2== "1001")
	{
		finalHexStr += "9";
	}
	else if (mixbin2== "1010")
	{
		finalHexStr += "A";
	}
	else if (mixbin2== "1011")
	{
		finalHexStr += "B";
	}
	else if (mixbin2== "1100")
	{
		finalHexStr += "C";
	}
	else if (mixbin2== "1101")
	{
		finalHexStr += "D";
	}
	else if (mixbin2== "1110")
	{
		finalHexStr += "E";
	}
	else if (mixbin2== "1111")
	{
		finalHexStr += "F";
	}

	return  finalHexStr;
}
BooleanCul BooleanCul::culOR(){
	BooleanCul tmp;
	char OrBin[8];
	for (int i = 0; i < 8; i++)
	{
		if ((binaryNum1[i] == '1')||(binaryNum2[i]=='1')){
			OrBin[i] = '1';
		}
		else
		{
			OrBin[i] = '0';
		}
		tmp.binNum[i] = OrBin[i];
	}
	
	char*chrPtr = OrBin;
	tmp.OrHex.assign(chrPtr);

	return tmp;
}
BooleanCul BooleanCul::culAND(){
	BooleanCul tmp;
	char AndBin[8];
	for (int i = 0; i < 8; i++)
	{
		if ((binaryNum1[i] == '1') && (binaryNum2[i] == '1'))
		{
			AndBin[i] = '1';
		}
		else
		{
			AndBin[i] = '0';
		}
		tmp.binNum[i] = AndBin[i];
	}
	
	char*chrPtr = AndBin;
	tmp.AndHex.assign(chrPtr);
	
	return tmp;

}