#include "PCCUCard.h"
#include <string>
using namespace std;

PCCUCard::PCCUCard()
{
	setSchoolName().setId().setYear();
}
PCCUCard::PCCUCard(string s1, string s2, int y)
{
	setSchoolName(s1).setId(s2).setYear(y);
}
PCCUCard::~PCCUCard()
{

}
PCCUCard &PCCUCard::setSchoolName(string s){
	schoolName = s;
	return *this;
}
void PCCUCard::printfIndroduce(){
	cout <<"�զW: "<< getSchoolName() << endl;
	cout << "�Ǹ�:" << PCCUCard::getId() << endl;
	checkYear(*this);
}
PCCUCard &PCCUCard::setId(string s){
	id = s;
	return *this;
}
PCCUCard &PCCUCard::setYear(int y){
	year = y;
	return *this;
}
string PCCUCard::getSchoolName(){
	return schoolName;
}
string PCCUCard::getId()
{
	return id;
}
int PCCUCard::getYear(){
	return year;
}
void PCCUCard::checkYear(PCCUCard p){
	if (104 - p.getYear() <= 4)
		cout << "�ثe��" << 104 - p.getYear() << "�~��" << endl;
	else
		cout << "�ثe�w���~" << endl;
}