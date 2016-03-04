#include <iostream>
#include <string>
using namespace std;
class HeaderClass{
public:
	int publicInt;
	double publicDouble;

	void setprivateInt(int m)
	{
		

		privateInt = m;

	}

	void setprivateDouble(double m)
	{
	
		privateDouble = m;
	}

	void getvalue()
	{
		cout<<"SUM: "<< (privateDouble + (double)privateInt);
	}
private:
	int privateInt;
	double privateDouble;

};
