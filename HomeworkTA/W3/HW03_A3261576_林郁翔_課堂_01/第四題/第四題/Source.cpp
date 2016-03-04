#include <iostream>

using namespace std;

int main()
{

	int *ptr = new int();

	*ptr = 200;

	cout <<"Address "<< ptr<<endl;

	cout <<"Value " <<*ptr <<endl;

	delete ptr;

	system("pause");
}