#include <iostream>

using namespace std;

int main()
{
	/*2.	(30 points)���]treacle��15��double���}�C
		�Atreacle[i] = i2 + 3.7*i �V 2.5; i = 1, �K, 15�A
		�Ыŧi�@�ӫ��Ы��Vtreacle���Ĥ@�Ӥ����A
		�åΫ������(�L�X)�}�C���Ĥ@�ӡB�ĤG�ӡB
		��j��(j�ѨϥΪ̿�J, 3~14����)�M�̫�@�Ӥ�������m�M�ȡC*/
	double treacle[15];
	for (int i = 0; i < 15; i++)
	{
		treacle[i] = (i+1)*(i+1) + (3.7*(i+1)) - 2.5;
	}
	
	double *Ptr = treacle;
	int j;
	//���L�X�Ĥ@�ӡB�ĤG��
	cout << "��1�Ӥ�����m" << (Ptr) << "��1�Ӥ�����" << *(Ptr)<<endl;
	cout << "��2�Ӥ�����m" << (Ptr + 1) << "��2�Ӥ�����" << *(Ptr + 1) << endl;


	cout << "�п�Jj(��3~14����):" << endl;
	cin >> j;

	cout << "��" << j << "�Ӥ�����m" << (Ptr + (j - 1)) << "��" << j << "�Ӥ�����" << *(Ptr + (j - 1)) << endl;
	cout << "�̫�@�Ӥ�����m" << (Ptr + 14) << "�̫�@�Ӥ�����" << *(Ptr + 14) << endl;


	system("pause");
	return 0;
}