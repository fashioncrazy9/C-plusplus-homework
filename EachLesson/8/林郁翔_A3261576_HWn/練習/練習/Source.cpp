#include <iostream>

using namespace std;
void quickSort(int*myarray, int left, int right);
int Partition(int*myarray, int left, int right);

//===
//快速排序
//Date:20150321
//Author:林郁翔
//==
int main()
{
	int myarray[10]{37, 2, 6, 4, 89, 8, 10, 12, 68, 45};
	quickSort(myarray, 0, 9);
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i << "]=" << myarray[i]<<endl;
	}
	
	system("pause");
	return 0;
}


void quickSort(int*myarray, int left, int right)
{
	if (left < right){
		int pivotLocation = Partition(myarray, left, right);
		quickSort(myarray, left, pivotLocation - 1);
		quickSort(myarray, pivotLocation + 1, right);
	}


}
void swap(int*a,int*b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}

int Partition(int*myarray, int left, int right)
{

	int pvalue = myarray[left]; //分割點的值
	int pIndex = left; //分割點的index
	int changeR = right, changeL = left;
	while (1)
	{
		for (int i = changeR; i >= left; i--)
		{	
			if (pvalue > myarray[i])
			{
				swap(myarray[pIndex], myarray[i]);
				changeL = pIndex;
				changeL++; //下次從r的下個位置
				pIndex = i; //更新點位置		
				break;
			}
			if (i == left)
			{
				return pIndex;
			}
		}
		for (int i = changeL; i <= pIndex; i++)
		{
		
			if (pvalue < myarray[i])
			{
				swap(myarray[pIndex], myarray[i]);
				changeR = pIndex;
				changeR--; //下次從L的下個位置
				pIndex = i; //更新點位置	
				break;
			}

			if (i == pIndex)
			{
				return pIndex;
			}
		}
	}
}