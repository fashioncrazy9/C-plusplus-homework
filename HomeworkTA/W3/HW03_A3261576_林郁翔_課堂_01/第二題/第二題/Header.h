#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
	Student(){
	}
	void setLastName(string a){
		this->LastName = a;
	}

	void setFirstName(string b)
	{
		this->FirstName = b;
	}
	void setGrade(int b)
	{
		this->Grade = b;
	}
	void StudentTest()
	{

		cout << "【我是 " << FirstName << LastName << "，我考試只有" << Grade << "分。】" << endl;
	}
private:

	int Grade;
	string LastName;
	string	FirstName;
};