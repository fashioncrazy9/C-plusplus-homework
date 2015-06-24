#include <iostream>

using namespace std;

int main()
{
	/*2.	(30 points)假設treacle為15個double的陣列
		，treacle[i] = i2 + 3.7*i – 2.5; i = 1, …, 15，
		請宣告一個指標指向treacle的第一個元素，
		並用指標顯示(印出)陣列的第一個、第二個、
		第j個(j由使用者輸入, 3~14之間)和最後一個元素的位置和值。*/
	double treacle[15];
	for (int i = 0; i < 15; i++)
	{
		treacle[i] = (i+1)*(i+1) + (3.7*(i+1)) - 2.5;
	}
	
	double *Ptr = treacle;
	int j;
	//先印出第一個、第二個
	cout << "第1個元素位置" << (Ptr) << "第1個元素值" << *(Ptr)<<endl;
	cout << "第2個元素位置" << (Ptr + 1) << "第2個元素值" << *(Ptr + 1) << endl;


	cout << "請輸入j(於3~14之間):" << endl;
	cin >> j;

	cout << "第" << j << "個元素位置" << (Ptr + (j - 1)) << "第" << j << "個元素值" << *(Ptr + (j - 1)) << endl;
	cout << "最後一個元素位置" << (Ptr + 14) << "最後一個元素值" << *(Ptr + 14) << endl;


	system("pause");
	return 0;
}