#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

//================
//A3261576 林郁翔
//Date:2015/03/30
//大樂透Class
//================


class lucky
{
private:
	int count = 0; //投注總數
	int receipt[6][6];//存放彩卷數
	int numberTemplate[49];
public:
	lucky()
	{
		srand(time(NULL)); //亂數種子
		for (int i = 0; i < 49; i++) //初始化隨機選號模板
		{
			numberTemplate[i] = i + 1;
		}
	}

	void choose()
	{
		while (count < 6)
		{

			cout << "請選擇投注方法" << endl;
			cout << "輸入1為手動投注,輸入2為自動投注,當輸入3即停止投注，並列印彩卷" << endl;
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
				printReceipt();//結束並印出彩卷
				break;
				
			}
			else
			{
				cout << "------- 錯誤訊息---------" << endl;
				cout << "可能有以下原因導致投注失敗" << endl;
				cout << "1. 你輸入的並非1或2或3" << endl;
				cout << "2. 您已投注6次，無法再投注" << endl;
				cout << "--------------------------" << endl;
			}
		}
		system("cls");
		cout << "輸入完畢，切換至功能選單" << endl;
		cout << "<提示:畫面已更新>"<<endl;
		cout << "您一共投注了 " << (count) << "注，一共是" << 50*(count) <<"元"<< endl;
		//印出彩卷
		
		printReceipt();
		//檢查是否中獎
		openNumber();
	}
	void openNumber()
	{
		//開出6個號碼加一個特別號
		cout << "本期開獎號碼為: " << endl;
		for (int i = 0; i < 49; i++)
		{
			int randrun = RunRandNumber(0, 48); //把骰到的值先存起來
			int temp = numberTemplate[i];
			numberTemplate[i] = numberTemplate[randrun];
			numberTemplate[randrun] = temp;

		}

		//複製前6個到有點亂的投注中
		for (int i = 0; i < 7; i++)
		{
			if (i == 6)
			{
				cout <<"特別號:"<< numberTemplate[i] << " ";
			}
			else
			{
				cout << numberTemplate[i] << " ";
			}

		}
		//開獎
		//複製成一維陣列傳入檢查
		cout << endl;

		for (int i = 0; i < count; i++)
		{
			int tempArray[6];
			for (int j = 0; j < 6; j++)
			{
			
				tempArray[j] = receipt[i][j];
			}

			cout << "第" << (i + 1) << "注 :";
			for (int j = 0; j < 6; j++)
			{
				cout << " " << receipt[i][j];
			}
			cout << "開獎結果:" << checkNumber(numberTemplate, tempArray) << endl;
		}

	}

	string checkNumber(int numberTemplate[],int myNumber[])
	{
		int count=0;
		//頭獎
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
			return "頭獎";
		}
		//貳獎
		count = 0; //先把記數歸零
		for (int i = 0; i < 6; i++)
		{
			int temp = myNumber[i];
			for (int j = 0; j < 7; j++)//加上特別號7
			{
				if (numberTemplate[j] == temp)
				{
					count++;
				}
			}
		}
		if (count == 6)
		{
			return "貳獎";
		}
		//參獎 對中當期獎號之任五碼 不含特別號
		count = 0; //先把記數歸零
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
			return "參獎";
		}

		//肆獎 對中當期獎號之任四碼 + 特別號
		count = 0; //先把記數歸零
		for (int i = 0; i < 6; i++)
		{
			int temp = myNumber[i];
			for (int j = 0; j < 7; j++)//加上特別號7
			{
				if (numberTemplate[j] == temp)
				{
					count++;
				}
			}
		}
		if (count == 4)
		{
			return "肆獎";
		}
		//伍獎 對中當期獎號之任四碼
		count = 0; //先把記數歸零
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
			return "伍獎";
		}
		//陸獎 對中當期獎號之任三碼+特別號
		count = 0; //先把記數歸零
		for (int i = 0; i < 6; i++)
		{
			int temp = myNumber[i];
			for (int j = 0; j < 7; j++)//加上特別號7
			{
				if (numberTemplate[j] == temp)
				{
					count++;
				}
			}
		}
		if (count == 3)
		{
			return "陸獎";
		}
		//柒獎 對中當期獎號之任兩碼 + 特別號
		count = 0; //先把記數歸零
		for (int i = 0; i < 6; i++)
		{
			int temp = myNumber[i];
			for (int j = 0; j < 7; j++)//加上特別號7
			{
				if (numberTemplate[j] == temp)
				{
					count++;
				}
			}
		}
		if (count == 3)
		{
			return "柒獎";
		}

		//普獎 對中當期獎號之任三碼
		count = 0; //先把記數歸零
		for (int i = 0; i < 6; i++)
		{
			int temp = myNumber[i];
			for (int j = 0; j < 6; j++)//加上特別號7
			{
				if (numberTemplate[j] == temp)
				{
					count++;
				}
			}
		}
		if (count == 3)
		{
			return "普獎";
		}

		return "   可惜你沒有中獎";

	}
	void printReceipt()
	{
		cout << "印出投注彩卷" << endl;
		for (int i = 0; i < count; i++)
		{
			cout << "第" << (i + 1) << "注 :";
			for (int j = 0; j < 6; j++)
			{
				cout << " "<<receipt[i][j];
			}
			cout << '\n';
		}




	}
	void manualControl()
	{
		//輸入六個號碼
		
		for (int j = 0; j < 6; j++)
		{
			cout << "請輸入彩卷數字 :";
			int number;
			cin >> number;
			if (number >= 1 && number <= 49 && checkRepeat(count, j, number))
			{
				cout << "第" << (count + 1) << "注第" << (j + 1) << "個號碼為:" << number<<endl;
				receipt[count][j] = number;
			}
			else
			{
				j--;
				cout << "您輸入錯誤，請為1~49個號碼之一，或您重複加選相同號碼" << endl;
			}
		}

	}
	void autoControl()
	{
		//自動選六個號碼
		//洗牌500次夠了吧ww?
		for (int i = 0; i < 49; i++)
		{
			int randrun = RunRandNumber(0, 48); //把骰到的值先存起來
			int temp = numberTemplate[i];
			numberTemplate[i] = numberTemplate[randrun];
			numberTemplate[randrun] = temp;

		}

		//複製前6個到有點亂的投注中
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
		//第一次作業的第四題就借來用了ww
		return ((rand() % (M - m + 1)) + m);
	}
};