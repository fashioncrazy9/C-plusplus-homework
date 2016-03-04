#include <iostream>

using namespace std;
int FF(int A, int B);

int main(){

	int A = 2, B = 4;

	cout << "(2, 4) = 2*2*2*2*2*2*2*2 =" << FF(A,B) << endl;

	system("pause");


}

int FF(int A, int B)
{

	if (B!=1)
	{
		return FF(A, B - 1) *FF(A, B - 1);
		
	}
	else
	{
		return A;
	}

}