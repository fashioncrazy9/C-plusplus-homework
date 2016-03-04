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

	cout << "姓名: " << getName() << endl;
	cout << "身分證: " <<TaiwanCard::getId() << endl;
	cout << "性別: " << getSex() << endl;
	cout << "生日: " << getDate() << endl;
	cout << "校名: " << getSchoolName() << endl;
	cout << "學號: " <<  PCCUCard::getId() << endl;
	cout << "入學年度: " << getYear() << endl;
	TaiwanCard::checkYear(*this);
	PCCUCard::checkYear(*this);
	return *this;
}
