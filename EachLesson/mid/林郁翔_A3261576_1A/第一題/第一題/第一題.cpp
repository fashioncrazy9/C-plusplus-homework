#include <iostream>

using namespace std;

int main()
{

	/*1.	(20 points)�мg�@�Ӱj��(while or for)�A�q1�[�� 100�A���{3�����Ƥ��[�A�{5�����Ƥ��[�A�{15�����Ƥ@�w�n�[�A�æL�X�̫��`�ȡC*/
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 15==0)
		{
			sum += i;
			continue;
		}
		if (i % 3 == 0 || i % 5 == 0)
		{
			continue;
		}
		sum += i;
	}

	cout << "�q1�[�� 100�A���{3�����Ƥ��[�A�{5�����Ƥ��[�A�{15�����Ƥ@�w�n�[" <<endl;
	cout<<"SUM=" << sum << endl;
	system("pause"); 
}