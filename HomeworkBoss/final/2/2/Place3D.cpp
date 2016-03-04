#include "Place3D.h"


Place3D::Place3D(double a, double b, double c)
{
	setLongitude(a);
	setLatitude(b);
	setHeight(c);
}

Place3D::~Place3D()
{
}
void Place3D::setHeight(double h){
	if (h >= 0 && h <= 50000)
	{
		height = h;
	}
	else
	{
		cout << "無法設定Height高度" << endl;
	}
}
double Place3D::getHeight(){
	return height;
}
Place Place3D::addPlace(Place3D x, Place3D y){
	//建立一個回傳容器
	Place3D ret;
	double tmpLongitude = x.getLongitude() + y.getLongitude();//取經
	double tmpLatitude = x.getLatitude() + y.getLatitude();//取緯
	double tmpHeight = x.getHeight() + y.getHeight();//取緯
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
	ret.setLatitude(tmpHeight);
	return ret;


}
void Place3D::showplace(Place x){
	cout <<"地點:"<<'(' << x.getLongitude() << ',' << x.getLatitude() << ',' << x.getLongitude()<<')'<<endl;
}