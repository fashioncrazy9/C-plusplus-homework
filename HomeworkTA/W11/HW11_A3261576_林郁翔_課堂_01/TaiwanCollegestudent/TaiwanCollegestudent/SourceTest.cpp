#include <iostream>
#include "PCCUCard.h"
#include "TaiwanCard.h"
#include <vector>
using namespace std;
int main(){
	PCCUCard x("��j","A3261576",103);
	TaiwanCard t("�L����","E11111111111","�k",12,19,1995);
	vector<TaiwanCard*>card(1);
	cout << "�O�_����j�ǥ�(0=false 1=true)" << endl;
	bool b;
	cin >> b;
	if (b)
	{
		card[0] = &x;
	}
	else
	{
		card[0] = &t;
	}
	for (int i = 0; i < card.size(); card[i++]->printfIndroduce(),cout << endl);
	system("pause");
	return 0;
}