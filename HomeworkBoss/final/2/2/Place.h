#pragma once
#include <iostream>
using namespace std;

class Place
{
	friend istream &operator>>(istream &, Place &);
	friend ostream &operator<<(ostream &, Place &);
private:
	double longitude;//¸g«×
	double latitude;//½n«×
public:
	Place operator+(Place&);
	bool operator==(Place&);
	void setLongitude(double=0);
	void setLatitude(double=0);
	double getLongitude();
	double getLatitude();
	virtual Place addPlace(Place x, Place y);
	virtual void showplace(Place x);
	Place(double=0,double=0);
	~Place();
};

