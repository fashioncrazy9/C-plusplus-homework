#include <iostream>
#include "PCCUCard.h"
#include "TaiwanCard.h"
#include <vector>
using namespace std;
int main(){
	PCCUCard x("文大","A3261576",103);
	TaiwanCard t("林郁翔","E11111111111","男",12,19,1995);
	vector<TaiwanCard*>card(1);
	cout << "是否為文大學生(0=false 1=true)" << endl;
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