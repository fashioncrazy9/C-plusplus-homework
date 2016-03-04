#include <iostream>

using namespace std;
void quickSort(int*myarray, int left, int right);
int Partition(int*myarray, int left, int right);

//===
//�ֳt�Ƨ�
//Date:20150321
//Author:�L����
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

	int pvalue = myarray[left]; //�����I����
	int pIndex = left; //�����I��index
	int changeR = right, changeL = left;
	while (1)
	{
		for (int i = changeR; i >= left; i--)
		{	
			if (pvalue > myarray[i])
			{
				swap(myarray[pIndex], myarray[i]);
				changeL = pIndex;
				changeL++; //�U���qr���U�Ӧ�m
				pIndex = i; //��s�I��m		
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
				changeR--; //�U���qL���U�Ӧ�m
				pIndex = i; //��s�I��m	
				break;
			}

			if (i == pIndex)
			{
				return pIndex;
			}
		}
	}
}