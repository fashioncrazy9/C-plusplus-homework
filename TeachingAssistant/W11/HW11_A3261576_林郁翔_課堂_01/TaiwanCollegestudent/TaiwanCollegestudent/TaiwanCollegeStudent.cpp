#include "TaiwanCollegeStudent.h"


TaiwanCollegeStudent::TaiwanCollegeStudent(string s1, string s2, string s3, int i1, int i2, int i3, string s4, string s5, int y)
{
	setName(s1).setId(s2).setSex(s3).setDate(i1, i2, i3);
	setSchoolName(s1).setId(s2).setYear(y);
}

TaiwanCollegeStudent::TaiwanCollegeStudent()
{
	setName().setId().setSex().setDate();
	setSchoolName().setId().setYear();
}

TaiwanCollegeStudent::~TaiwanCollegeStudent()
{
}
TaiwanCollegeStudent &TaiwanCollegeStudent::printfIndroduce(){

	cout << "�m�W: " << getName() << endl;
	cout << "������: " <<TaiwanCard::getId() << endl;
	cout << "�ʧO: " << getSex() << endl;
	cout << "�ͤ�: " << getDate() << endl;
	cout << "�զW: " << getSchoolName() << endl;
	cout << "�Ǹ�: " <<  PCCUCard::getId() << endl;
	cout << "�J�Ǧ~��: " << getYear() << endl;
	TaiwanCard::checkYear(*this);
	PCCUCard::checkYear(*this);
	return *this;
}
