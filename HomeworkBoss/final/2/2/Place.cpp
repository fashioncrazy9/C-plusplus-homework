#include "Place.h"
#include <iostream>
#include <iomanip>
using namespace std;

Place::Place(double a, double b){
	setLongitude(a);//設定經度
	setLatitude(b);//設定緯度
}


Place::~Place()
{
}
istream &operator>>(istream & input, Place &right){
	//格式(-001,+05);
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
	double tmpLongitude = getLongitude() + right.getLongitude();//取經
	double tmpLatitude = getLatitude() + right.getLatitude();//取緯

	//===經度換算====
	//大於180:360-和
	if (tmpLongitude > 180){
		tmpLongitude = 360-tmpLongitude;
	}
	else if (tmpLongitude < -180)
	{	//小於-180:會變號成正並且減180 
		tmpLongitude = -(tmpLongitude);
		tmpLongitude = tmpLongitude - 180;
	}
	//===緯度換算====
	//緯度大於90 
	if (tmpLatitude>90){
		tmpLatitude = 180-tmpLatitude;
	}
	else if(tmpLatitude<-90){
		//緯度小於-90
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
	output << "地點:" << '(' << right.getLongitude() << ',' << right.getLatitude() << ')' << endl;
	return output;
}
void Place::showplace(Place x){
	//地點:(a, b)
	cout <<"地點:"<<'(' << x.getLongitude() <<','<< x.getLatitude()<<')'<<endl;
}
Place Place::addPlace(Place x, Place y){
	//建立一個回傳容器
	Place ret;
	double tmpLongitude = x.getLongitude() + y.getLongitude();//取經
	double tmpLatitude = x.getLatitude() + y.getLatitude();//取緯

	//===經度換算====
	//大於180:360-和
	if (tmpLongitude > 180){
		tmpLongitude = 360 - tmpLongitude;
	}
	else if (tmpLongitude < -180)
	{	//小於-180:會變號成正並且減180 
		tmpLongitude = -(tmpLongitude);
		tmpLongitude = tmpLongitude - 180;
	}
	//===緯度換算====
	//緯度大於90 
	if (tmpLatitude>90){
		tmpLatitude = 180 - tmpLatitude;
	}
	else if (tmpLatitude<-90){
		//緯度小於-90
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
		cout << "無法設定Longitude經度" << endl;
	}
}
void Place::setLatitude(double l){
	//-90~90
	if (l <= 90 && l >= -90){
		latitude = l;
	}
	else{
		cout << "無法設定Latitude緯度" << endl;
	}
}
double Place::getLongitude(){
	return longitude;
}
double Place::getLatitude(){
	return latitude;
}