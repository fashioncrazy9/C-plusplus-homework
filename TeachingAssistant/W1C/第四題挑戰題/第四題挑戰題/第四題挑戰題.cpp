/*�Ф@��11 * 11��char�}�C�A�N�Ҧ������w�]�ȳ]�� # �C�N�_�l�I�]���}�C�������I(5, 5)�C���@�Ӥp�����H���۵��b���ݨϥΪ̱���C
���{���|���_�����ϥΪ̿�J���Ʀr�����R�O�ѼơA�C�@��������R�O�K�|�N�R�O����᪺�}�C���p���s��X�@���C
�������A����ءA�Y�����аO�����A�|�N�ҳB����m�䤺�e��
�� @ �A�Y�����a�š��h����ª����ʡC�w�]���a�Ū��A�C
�Y�N�W�X�}�C�d��h��a��B�C*/


#include <iostream>

using namespace std;
void printArray();
const int arrayLength1 = 11;
const int arrayLength2 = 11;
char myArray[arrayLength1][arrayLength2];
int x=5,y=5;

bool canDown = false;
int main()
{
	//===�`�N�ƶ�
	//�Х���5�������U��~�|�e��
	cout << "Powered By �L���� 20150313 " << endl<<endl;
	cout << "�`�N�ƶ�\n�Х���5�������U��~�|�e��\n\n";
	cout << "2 �V�U���ʤ@��C\n4 �V�����ʤ@��C\n6 �V�k���ʤ@��C\n8 �V�W���ʤ@��C\n5 �����������A(�аO�B�a��)�C\n0 �����R�O�C"<<endl;
	
	//===��l�ư}�C
	for (int i = 0; i < arrayLength1; i++)
	{
		for (int j = 0; j < arrayLength2; j++)
		{
			myArray[i][j] = '#';
		}
	}
	//===
	cout << "<��l��>" << endl;
	printArray();
	//===
	int userControl;
	int count=0;
	while (true)
	{
		cout << "�п�J���O: ";
		cin >> userControl;
		cout << "�����"<<++count<<"���ᵲ�G:" << endl;
		cout << "====�T������====" << endl;
		if (userControl == 0)
		{
			cout << "���}�{��" << endl;
			break;
		}

		switch (userControl)
		{
	
			//���a�Ůڤ��a��
		case 2:
			if (x == 10)
			{
				cout << "�W�L���" << endl;
			
			}
			else
			{
				x++;
			}
			if (canDown)
			myArray[x][y] = '@';
			break;
		case 4:
			if (y == 0)
			{
				cout << "�W�L���" << endl;
				
			}
			else
			{
				y--;
			}
			
			if (canDown)
			myArray[x][y] = '@';

			break;
		case 6:
			if (y ==10)
			{
				cout << "�W�L���" << endl;
				
				
			}
			else
			{
				y++;
			}
			if (canDown)
			myArray[x][y] = '@';

			break;
		case 8:
			if (x == 0)
			{
				cout << "�W�L���" << endl;
				
			}
			else
			{
				x--;
			}
		
			if (canDown)
			myArray[x][y] = '@';

			break;
		case 5:
			if (canDown)
			{
				canDown = false;
			}
			else
			{
				canDown = true;
				myArray[x][y] = '@';
			}
			
			break;
		default:
			break;
		}
		cout << "X:" << x << " Y: " << y << endl;
		cout << "�������A:";
		(canDown) ? cout << "�аO\n" : cout << "�a��\n";
		cout << "======================" << endl;
		printArray();
		
		
	}



	system("pause");

}



void printArray()
{
	for (int i = 0; i < arrayLength1; i++)
	{
		for (int j = 0; j < arrayLength2; j++)
		{
			cout<< myArray[i][j] <<" ";
		} 
		cout << endl;
	}

}