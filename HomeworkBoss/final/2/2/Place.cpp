#include "Place.h"
#include <iostream>
#include <iomanip>
using namespace std;

Place::Place(double a, double b){
	setLongitude(a);//�]�w�g��
	setLatitude(b);//�]�w�n��
}


Place::~Place()
{
}
istream &operator>>(istream & input, Place &right){
	//�榡(-001,+05);
	double longitude, latitude;
	input.ignore(1);
	input >> setw(4) >> longitude;
	input.ignore(1);
	input >> setw(3) >> latitude;
	right.setLongitude(longitude);
	right.setLatitude(latitude);
	return input;
}
Place Place::operator+(Place&right){
	Place ret;
	double tmpLongitude = getLongitude() + right.getLongitude();//���g
	double tmpLatitude = getLatitude() + right.getLatitude();//���n

	//===�g�״���====
	//�j��180:360-�M
	if (tmpLongitude > 180){
		tmpLongitude = 360-tmpLongitude;
	}
	else if (tmpLongitude < -180)
	{	//�p��-180:�|�ܸ������åB��180 
		tmpLongitude = -(tmpLongitude);
		tmpLongitude = tmpLongitude - 180;
	}
	//===�n�״���====
	//�n�פj��90 
	if (tmpLatitude>90){
		tmpLatitude = 180-tmpLatitude;
	}
	else if(tmpLatitude<-90){
		//�n�פp��-90
		tmpLatitude = 180 + tmpLatitude;
	}

	ret.setLongitude(tmpLongitude);
	ret.setLatitude(tmpLatitude);
	return ret;
}
bool Place::operator==(Place&right){
	if (getLongitude() == right.getLongitude() && getLatitude() == right.getLatitude()){
		return true;
	}
	return false;
}
ostream &operator<<(ostream &output, Place &right){
	output << "�a�I:" << '(' << right.getLongitude() << ',' << right.getLatitude() << ')' << endl;
	return output;
}
void Place::showplace(Place x){
	//�a�I:(a, b)
	cout <<"�a�I:"<<'(' << x.getLongitude() <<','<< x.getLatitude()<<')'<<endl;
}
Place Place::addPlace(Place x, Place y){
	//�إߤ@�Ӧ^�Ǯe��
	Place ret;
	double tmpLongitude = x.getLongitude() + y.getLongitude();//���g
	double tmpLatitude = x.getLatitude() + y.getLatitude();//���n

	//===�g�״���====
	//�j��180:360-�M
	if (tmpLongitude > 180){
		tmpLongitude = 360 - tmpLongitude;
	}
	else if (tmpLongitude < -180)
	{	//�p��-180:�|�ܸ������åB��180 
		tmpLongitude = -(tmpLongitude);
		tmpLongitude = tmpLongitude - 180;
	}
	//===�n�״���====
	//�n�פj��90 
	if (tmpLatitude>90){
		tmpLatitude = 180 - tmpLatitude;
	}
	else if (tmpLatitude<-90){
		//�n�פp��-90
		tmpLatitude = 180 + tmpLatitude;
	}

	ret.setLongitude(tmpLongitude);
	ret.setLatitude(tmpLatitude);
	return ret;
	
}
void Place::setLongitude(double l){
	//-180~+ 180
	if (l >= -180 && l <= 180)
	{
		longitude = l;
	}
	else
	{
		cout << "�L�k�]�wLongitude�g��" << endl;
	}
}
void Place::setLatitude(double l){
	//-90~90
	if (l <= 90 && l >= -90){
		latitude = l;
	}
	else{
		cout << "�L�k�]�wLatitude�n��" << endl;
	}
}
double Place::getLongitude(){
	return longitude;
}
double Place::getLatitude(){
	return latitude;
}