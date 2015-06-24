#include "TaiwanCard.h"
#include <string>
using namespace std;

TaiwanCard::TaiwanCard()
{
	setName().setId().setSex().setDate();
}
void TaiwanCard::checkYear(TaiwanCard p){
	cout <<"年齡:"<< (2015-p.getDate().getYear())<< endl;
}
TaiwanCard::TaiwanCard(string s1, string s2, string s3, int i1, int i2, int i3)
{
	setName(s1).setId(s2).setSex(s3).setDate(i1,i2,i3);
}
TaiwanCard::~TaiwanCard()
{
	delete date;
}
void TaiwanCard::printfIndroduce(){
	//姓名、生日、身分證字號、性別
	cout << "姓名: " <<getName()<<endl;
	cout << "生日: " <<getDate() <<endl;
	cout << "身分證字號: "<< getId()<< endl;
	cout << "性別: " <<getSex() <<endl;
	checkYear(*this);
}
string TaiwanCard::getName(){
	return name;
}
string TaiwanCard::getId(){
	return id;
}
string TaiwanCard::getSex(){
	return sex;
}
Date TaiwanCard::getDate(){
	return *date;
}
TaiwanCard &TaiwanCard::setName(string s){
	name = s;
	return *this;
}
TaiwanCard &TaiwanCard::setId(string s){
	id = s;
	return *this;
}
TaiwanCard &TaiwanCard::setSex(string  s){
	sex = s;
	return *this;
}
TaiwanCard &TaiwanCard::setDate(int m , int d, int y ){
	date = new Date(m, d, y);
	return *this;
}