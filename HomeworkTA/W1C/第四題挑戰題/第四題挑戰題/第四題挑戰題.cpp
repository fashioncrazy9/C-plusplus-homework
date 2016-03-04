/*創一個11 * 11的char陣列，將所有元素預設值設為 # 。將起始點設為陣列的中心點(5, 5)。有一個小機器人拿著筆在等待使用者控制。
此程式會不斷接收使用者輸入之數字做為命令參數，每一次接收到命令便會將命令執行後的陣列狀況重新輸出一次。
筆的狀態有兩種，若為’標記’狀態會將所處的位置其內容變
為 @ ，若為’懸空’則為單純的移動。預設為懸空狀態。
若將超出陣列範圍則原地踏步。*/


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
	//===注意事項
	//請先按5讓筆落下後才會畫圖
	cout << "Powered By 林郁翔 20150313 " << endl<<endl;
	cout << "注意事項\n請先按5讓筆落下後才會畫圖\n\n";
	cout << "2 向下移動一格。\n4 向左移動一格。\n6 向右移動一格。\n8 向上移動一格。\n5 切換筆之狀態(標記、懸空)。\n0 結束命令。"<<endl;
	
	//===初始化陣列
	for (int i = 0; i < arrayLength1; i++)
	{
		for (int j = 0; j < arrayLength2; j++)
		{
			myArray[i][j] = '#';
		}
	}
	//===
	cout << "<初始化>" << endl;
	printArray();
	//===
	int userControl;
	int count=0;
	while (true)
	{
		cout << "請輸入指令: ";
		cin >> userControl;
		cout << "執行第"<<++count<<"次後結果:" << endl;
		cout << "====訊息視窗====" << endl;
		if (userControl == 0)
		{
			cout << "離開程式" << endl;
			break;
		}

		switch (userControl)
		{
	
			//分懸空根不懸空
		case 2:
			if (x == 10)
			{
				cout << "超過邊界" << endl;
			
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
				cout << "超過邊界" << endl;
				
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
				cout << "超過邊界" << endl;
				
				
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
				cout << "超過邊界" << endl;
				
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
		cout << "筆的狀態:";
		(canDown) ? cout << "標記\n" : cout << "懸空\n";
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