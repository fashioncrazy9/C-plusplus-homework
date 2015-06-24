#include <iostream>

using namespace std;

int main()
{

	/*1.	(20 points)叫糶癹伴(while or for)眖1 100硔3计ぃ硔5计ぃ硔15计﹚璶程羆*/
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

	cout << "眖1 100硔3计ぃ硔5计ぃ硔15计﹚璶" <<endl;
	cout<<"SUM=" << sum << endl;
	system("pause"); 
}