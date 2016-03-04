#include <iostream>
#include "Place.h"
#include "Place3D.h"
#include <vector>
using namespace std;

int main(){
	cout << "[#]建立p1 請輸入經緯度" << endl;
	cout << "格式(不滿百位請補0且要加正負號)  ex:  (+063,-32) " << endl;
	Place p1;
	cin >> p1;
	cout << "[#]預設直接建立一個Place3D類別位置值為(32,10,12) " << endl;
	Place3D p2(32, 10, 12);

	cout << "以vector方式儲存並印出" << endl;
	vector <Place*> place(2);
	place[0] = &p1;
	place[1] = &p2;

	for (size_t i = 0; i < place.size(); i++){
		place[i]->showplace(*place[i]);
	}
	cout << "印出vector place[0]+place[1] 即指向後的相加" << endl;
	cout << (place[0]->addPlace(*place[0], *place[1])) << endl;
	Place output;
	Place p3(15, 20);
	cout << "第一個palce類別與place(15,20)判斷是否相等" << endl;
	cout << ((p1 == p3) ? "相等\n": "不相等\n");
	cout << "第一個palce類別加上place(15,20)相加" << endl;
	output = p1 + p3;
	cout << output;
	

	system("pause");
}