#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

//================
//A3261576 �L����
//Date:2015/03/30
//�j�ֳzClass
//================


class lucky
{
private:
	int count = 0; //��`�`��
	int receipt[6][6];//�s��m����
	int numberTemplate[49];
public:
	lucky()
	{
		srand(time(NULL)); //�üƺؤl
		for (int i = 0; i < 49; i++) //��l���H���︹�ҪO
		{
			numberTemplate[i] = i + 1;
		}
	}

	void choose()
	{
		while (count < 6)
		{

			cout << "�п�ܧ�`��k" << endl;
			cout << "��J1����ʧ�`,��J2���۰ʧ�`,���J3�Y�����`�A�æC�L�m��" << endl;
			int num;
			cin >> num;
			if (num == 1)
			{
				manualControl();
				count++;
			}
			else if (num == 2)
			{
				autoControl();
				count++;
			}
			else if (num == 3)
			{
				printReceipt();//�����æL�X�m��
				break;
				
			}
			else
			{
				cout << "------- ���~�T��---------" << endl;
				cout << "�i�঳�H�U��]�ɭP��`����" << endl;
				cout << "1. �A��J���ëD1��2��3" << endl;
				cout << "2. �z�w��`6���A�L�k�A��`" << endl;
				cout << "--------------------------" << endl;
			}
		}
		system("cls");
		cout << "��J�����A�����ܥ\����" << endl;
		cout << "<����:�e���w��s>"<<endl;
		cout << "�z�@�@��`�F " << (count) << "�`�A�@�@�O" << 50*(count) <<"��"<< endl;
		//�L�X�m��
		
		printReceipt();
		//�ˬd�O�_����
		openNumber();
	}
	void openNumber()
	{
		//�}�X6�Ӹ��X�[�@�ӯS�O��
		cout << "�����}�����X��: " << endl;
		for (int i = 0; i < 49; i++)
		{
			int randrun = RunRandNumber(0, 48); //���쪺�ȥ��s�_��
			int temp = numberTemplate[i];
			numberTemplate[i] = numberTemplate[randrun];
			numberTemplate[randrun] = temp;

		}

		//�ƻs�e6�Ө즳�I�ê���`��
		for (int i = 0; i < 7; i++)
		{
			if (i == 6)
			{
				cout <<"�S�O��:"<< numberTemplate[i] << " ";
			}
			else
			{
				cout << numberTemplate[i] << " ";
			}

		}
		//�}��
		//�ƻs���@���}�C�ǤJ�ˬd
		cout << endl;

		for (int i = 0; i < count; i++)
		{
			int tempArray[6];
			for (int j = 0; j < 6; j++)
			{
			
				tempArray[j] = receipt[i][j];
			}

			cout << "��" << (i + 1) << "�` :";
			for (int j = 0; j < 6; j++)
			{
				cout << " " << receipt[i][j];
			}
			cout << "�}�����G:" << checkNumber(numberTemplate, tempArray) << endl;
		}

	}

	string checkNumber(int numberTemplate[],int myNumber[])
	{
		int count=0;
		//�Y��
		for (int i = 0; i < 6; i++)
		{
			int temp = myNumber[i];
			for (int j = 0; j < 6; j++)
			{
				if(numberTemplate[j] == temp)
				{
					count++;
				}
			}
		}
		if (count == 6)
		{
			return "�Y��";
		}
		//�L��
		count = 0; //����O���k�s
		for (int i = 0; i < 6; i++)
		{
			int temp = myNumber[i];
			for (int j = 0; j < 7; j++)//�[�W�S�O��7
			{
				if (numberTemplate[j] == temp)
				{
					count++;
				}
			}
		}
		if (count == 6)
		{
			return "�L��";
		}
		//�Ѽ� �襤��������������X ���t�S�O��
		count = 0; //����O���k�s
		for (int i = 0; i < 6; i++)
		{
			int temp = myNumber[i];
			for (int j = 0; j < 6; j++)
			{
				if (numberTemplate[j] == temp)
				{
					count++;
				}
			}
		}
		if (count == 5)
		{
			return "�Ѽ�";
		}

		//�v�� �襤������������|�X + �S�O��
		count = 0; //����O���k�s
		for (int i = 0; i < 6; i++)
		{
			int temp = myNumber[i];
			for (int j = 0; j < 7; j++)//�[�W�S�O��7
			{
				if (numberTemplate[j] == temp)
				{
					count++;
				}
			}
		}
		if (count == 4)
		{
			return "�v��";
		}
		//��� �襤������������|�X
		count = 0; //����O���k�s
		for (int i = 0; i < 6; i++)
		{
			int temp = myNumber[i];
			for (int j = 0; j < 6; j++)
			{
				if (numberTemplate[j] == temp)
				{
					count++;
				}
			}
		}
		if (count == 4)
		{
			return "���";
		}
		//���� �襤������������T�X+�S�O��
		count = 0; //����O���k�s
		for (int i = 0; i < 6; i++)
		{
			int temp = myNumber[i];
			for (int j = 0; j < 7; j++)//�[�W�S�O��7
			{
				if (numberTemplate[j] == temp)
				{
					count++;
				}
			}
		}
		if (count == 3)
		{
			return "����";
		}
		//�m�� �襤�������������X + �S�O��
		count = 0; //����O���k�s
		for (int i = 0; i < 6; i++)
		{
			int temp = myNumber[i];
			for (int j = 0; j < 7; j++)//�[�W�S�O��7
			{
				if (numberTemplate[j] == temp)
				{
					count++;
				}
			}
		}
		if (count == 3)
		{
			return "�m��";
		}

		//���� �襤������������T�X
		count = 0; //����O���k�s
		for (int i = 0; i < 6; i++)
		{
			int temp = myNumber[i];
			for (int j = 0; j < 6; j++)//�[�W�S�O��7
			{
				if (numberTemplate[j] == temp)
				{
					count++;
				}
			}
		}
		if (count == 3)
		{
			return "����";
		}

		return "   �i���A�S������";

	}
	void printReceipt()
	{
		cout << "�L�X��`�m��" << endl;
		for (int i = 0; i < count; i++)
		{
			cout << "��" << (i + 1) << "�` :";
			for (int j = 0; j < 6; j++)
			{
				cout << " "<<receipt[i][j];
			}
			cout << '\n';
		}




	}
	void manualControl()
	{
		//��J���Ӹ��X
		
		for (int j = 0; j < 6; j++)
		{
			cout << "�п�J�m���Ʀr :";
			int number;
			cin >> number;
			if (number >= 1 && number <= 49 && checkRepeat(count, j, number))
			{
				cout << "��" << (count + 1) << "�`��" << (j + 1) << "�Ӹ��X��:" << number<<endl;
				receipt[count][j] = number;
			}
			else
			{
				j--;
				cout << "�z��J���~�A�Ь�1~49�Ӹ��X���@�A�αz���ƥ[��ۦP���X" << endl;
			}
		}

	}
	void autoControl()
	{
		//�۰ʿ碌�Ӹ��X
		//�~�P500�����F�aww?
		for (int i = 0; i < 49; i++)
		{
			int randrun = RunRandNumber(0, 48); //���쪺�ȥ��s�_��
			int temp = numberTemplate[i];
			numberTemplate[i] = numberTemplate[randrun];
			numberTemplate[randrun] = temp;

		}

		//�ƻs�e6�Ө즳�I�ê���`��
		for (int i = 0; i < 6; i++)
		{
			receipt[count][i] = numberTemplate[i];
		}

	}
	bool checkRepeat(int i, int j, int InInder)
	{
		for (int p = 0; p <= j; p++)
		{
			if (receipt[i][p] == InInder)
			{
				return false;
			}
		}

		return true;
	}
	int RunRandNumber(int m, int M)
	{
		//�Ĥ@���@�~���ĥ|�D�N�ɨӥΤFww
		return ((rand() % (M - m + 1)) + m);
	}
};