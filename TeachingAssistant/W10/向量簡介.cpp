#include <iostream>
#include <Vector>
using namespace std;

void 向量輸出(vector<int>  A);

int main()
{
	
//	vector<int> 我是向量;

	vector<double> 我是向量 (7);
	double 我是陣列[7];
	

	vector<int>	 向量2號(5,13);//int 陣列2號[5] = { 13 ,13,13,13,13
	int 陣列2號[5] = { 13 };

	

	陣列2號[3] = 33;
	向量2號[3] = 34;

	int A = 3;
	vector<int>	 以記憶體位置製造向量(陣列2號[0], 陣列2號[4]);// =  vector<int>	 以記憶體位置製造向量(陣列2號, 陣列2號 + 3);

	//////////////////////////////////////
	//向量內建功能
	
	cout << 向量2號.front() << endl;
	cout << 向量2號.back() << endl;
	cout << 陣列2號[2] << endl;

	for (int i = 0; i < 向量2號.size(); i++){
		向量2號[i] = i*i;
	}

	
	for (int i = 0; i < 向量2號.size(); i++){
		cout << 向量2號[i] << " ";
	}
	cout << endl;
	

	/*
	向量2號.push_back(5);
	for (int i = 0; i < 向量2號.size(); i++){
		cout << 向量2號[i] << " ";
	}
	cout << endl;
	*/

	/*
	向量2號.pop_back();
	for (int i = 0; i < 向量2號.size(); i++){
		cout << 向量2號[i] << " ";
	}
	cout << endl;
	*/

	/*
	向量2號._Pop_back_n(3);
	for (int i = 0; i < 向量2號.size(); i++){
		cout << 向量2號[i] << " ";
	}
	cout << endl;
	*/

	/*
	向量2號.insert(向量2號.begin()+3 , 2);
	for (int i = 0; i < 向量2號.size(); i++){
		cout << 向量2號[i] << " ";
	}
	cout << endl;
	*/

	/*
	向量2號.erase(begin(向量2號) + 1);
	for (int i = 0; i < 向量2號.size(); i++){
		cout << 向量2號[i] << " ";
	}
	cout << endl;
	*/


	/*
	向量輸出(向量2號);
	向量2號.clear();
	向量2號.push_back(5);
	向量輸出(向量2號);
	*/


	system("pause");
}





void 向量輸出(vector<int>  A )
{
	for (int i = 0; i < A.size(); i++){
		cout << A[i] << " ";
	}
	cout << endl;
}
