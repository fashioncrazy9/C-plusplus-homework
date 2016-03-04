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
		cout << "�L�k�]�wHeight����" << endl;
	}
}
double Place3D::getHeight(){
	return height;
}
Place Place3D::addPlace(Place3D x, Place3D y){
	//�إߤ@�Ӧ^�Ǯe��
	Place3D ret;
	double tmpLongitude = x.getLongitude() + y.getLongitude();//���g
	double tmpLatitude = x.getLatitude() + y.getLatitude();//���n
	double tmpHeight = x.getHeight() + y.getHeight();//���n
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
	ret.setLatitude(tmpHeight);
	return ret;


}
void Place3D::showplace(Place x){
	cout <<"�a�I:"<<'(' << x.getLongitude() << ',' << x.getLatitude() << ',' << x.getLongitude()<<')'<<endl;
}