#include <iostream>
#include <Vector>
using namespace std;

void �V�q��X(vector<int>  A);

int main()
{
	
//	vector<int> �ڬO�V�q;

	vector<double> �ڬO�V�q (7);
	double �ڬO�}�C[7];
	

	vector<int>	 �V�q2��(5,13);//int �}�C2��[5] = { 13 ,13,13,13,13
	int �}�C2��[5] = { 13 };

	

	�}�C2��[3] = 33;
	�V�q2��[3] = 34;

	int A = 3;
	vector<int>	 �H�O�����m�s�y�V�q(�}�C2��[0], �}�C2��[4]);// =  vector<int>	 �H�O�����m�s�y�V�q(�}�C2��, �}�C2�� + 3);

	//////////////////////////////////////
	//�V�q���إ\��
	
	cout << �V�q2��.front() << endl;
	cout << �V�q2��.back() << endl;
	cout << �}�C2��[2] << endl;

	for (int i = 0; i < �V�q2��.size(); i++){
		�V�q2��[i] = i*i;
	}

	
	for (int i = 0; i < �V�q2��.size(); i++){
		cout << �V�q2��[i] << " ";
	}
	cout << endl;
	

	/*
	�V�q2��.push_back(5);
	for (int i = 0; i < �V�q2��.size(); i++){
		cout << �V�q2��[i] << " ";
	}
	cout << endl;
	*/

	/*
	�V�q2��.pop_back();
	for (int i = 0; i < �V�q2��.size(); i++){
		cout << �V�q2��[i] << " ";
	}
	cout << endl;
	*/

	/*
	�V�q2��._Pop_back_n(3);
	for (int i = 0; i < �V�q2��.size(); i++){
		cout << �V�q2��[i] << " ";
	}
	cout << endl;
	*/

	/*
	�V�q2��.insert(�V�q2��.begin()+3 , 2);
	for (int i = 0; i < �V�q2��.size(); i++){
		cout << �V�q2��[i] << " ";
	}
	cout << endl;
	*/

	/*
	�V�q2��.erase(begin(�V�q2��) + 1);
	for (int i = 0; i < �V�q2��.size(); i++){
		cout << �V�q2��[i] << " ";
	}
	cout << endl;
	*/


	/*
	�V�q��X(�V�q2��);
	�V�q2��.clear();
	�V�q2��.push_back(5);
	�V�q��X(�V�q2��);
	*/


	system("pause");
}





void �V�q��X(vector<int>  A )
{
	for (int i = 0; i < A.size(); i++){
		cout << A[i] << " ";
	}
	cout << endl;
}
