
class SimpleFraction
{
private:
	int denominator, molecular;
	int gcd(int a, int b);

public:
	
	SimpleFraction(int d,int m);
	~SimpleFraction();
	void printSimpleFraction();
	void addFraction(SimpleFraction A, SimpleFraction B);
	void subFraction(SimpleFraction A, SimpleFraction B);
	void mulFraction(SimpleFraction A, SimpleFraction B);
	void divFraction(SimpleFraction A, SimpleFraction B);



};