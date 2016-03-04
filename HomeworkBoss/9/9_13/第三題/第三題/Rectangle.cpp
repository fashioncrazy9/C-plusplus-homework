#include "Rectangle.h"
#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;
Rectangle::Rectangle(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)
{
	length = width = 1;

	setPoint(x1, y1, x2, y2, x3, y3, x4, y4);

}


Rectangle::~Rectangle()
{
}
void Rectangle::setLength(){
	if (distance(a, b) >= distance(b, c))
	{
		length = sqrt(distance(a, b));
	}
	else
	{
		width = sqrt(distance(b, c));
	}
}
void Rectangle::setWidth(){
	if (distance(a, b) >= distance(b, c))
	{
		width = sqrt(distance(b, c));
	}
	else
	{
		length = sqrt(distance(a, b));
	}
}
float Rectangle::getLength(){

	return length;
}
float Rectangle::getWidth(){
	return width;
}
float Rectangle::getArea(){
	Area = length*width;
	return Area;
}
float Rectangle::getPerimeter(){
	Perimeter = (length + width) * 2;
	return Perimeter;
}
void Rectangle::setPoint(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4){

	a.setPointInitalize(x1, y1);
	b.setPointInitalize(x2, y2);
	c.setPointInitalize(x3, y3);
	d.setPointInitalize(x4, y4);
	setLength();
	setWidth();
	a.setPointInitalize(x1, y1);
	b.setPointInitalize(x2, y2);
	c.setPointInitalize(x3, y3);
	d.setPointInitalize(x4, y4);
	setLength();
	setWidth();
	RectangleBool = false;
	//A
	if (RectangleBool == false)
		setRectangle(a, b, c, d);
	if (RectangleBool == false)
		setRectangle(a, b, d, c);
	if (RectangleBool == false)
		setRectangle(a, c, b, d);
	if (RectangleBool == false)
		setRectangle(a, c, d, b);
	if (RectangleBool == false)
		setRectangle(a, d, c, b);
	if (RectangleBool == false)
		setRectangle(a, d, b, c);

	//B
	if (RectangleBool == false)
		setRectangle(b, a, c, d);
	if (RectangleBool == false)
		setRectangle(b, a, d, c);
	if (RectangleBool == false)
		setRectangle(b, c, a, d);
	if (RectangleBool == false)
		setRectangle(b, c, d, a);
	if (RectangleBool == false)
		setRectangle(b, d, a, c);
	if (RectangleBool == false)
		setRectangle(b, d, c, a);
	//C
	if (RectangleBool == false)
		setRectangle(c, a, b, d);
	if (RectangleBool == false)
		setRectangle(c, a, d, b);
	if (RectangleBool == false)
		setRectangle(c, b, a, d);
	if (RectangleBool == false)
		setRectangle(c, b, d, a);
	if (RectangleBool == false)
		setRectangle(c, d, a, b);
	if (RectangleBool == false)
		setRectangle(c, d, b, a);
	//D
	if (RectangleBool == false)
		setRectangle(d, a, b, c);
	if (RectangleBool == false)
		setRectangle(d, a, c, b);
	if (RectangleBool == false)
		setRectangle(d, b, a, c);
	if (RectangleBool == false)
		setRectangle(d, b, c, a);
	if (RectangleBool == false)
		setRectangle(d, c, a, b);
	if (RectangleBool == false)
		setRectangle(d, c, b, a);

	setSquare();


}

void Rectangle::setRectangle(Point a, Point b, Point c, Point d){
	RectangleBool = false;
	if ((distance(a, b) == distance(d, c)) && (distance(a, d) == distance(b, c)))
	{
		RectangleBool = true;
	}
	else
	{

		RectangleBool = false;
	}
	if ((a.x == b.x&&a.y == b.y) || (a.x == c.x&&a.y == c.y) || (a.x == d.x&&a.y == d.y))
	{
		RectangleBool = false;
	}
	else
	{
		RectangleBool = true;
	}
	if ((b.x == a.x&&b.y == a.y) || (b.x == c.x&&b.y == c.y) || (b.x == d.x&&b.y == d.y))
	{
		RectangleBool = false;
	}
	else
	{
		RectangleBool = true;
	}
	if ((c.x == a.x&&c.y == a.y) || (c.x == b.x&&c.y == b.y) || (c.x == d.x&&c.y == d.y))
	{
		RectangleBool = false;
	}
	else
	{
		RectangleBool = true;
	}
	if ((d.x == a.x&&d.y == a.y) || (d.x == b.x&&d.y == b.y) || (d.x == c.x&&d.y == c.y))
	{
		RectangleBool = false;
	}
	else
	{
		RectangleBool = true;
	}
	if ((a.x - b.x)*(b.x - c.x) + (a.y - b.y)*(b.y - c.y) == 0 && (a.x - d.x)*(d.x - c.x) + (a.y - d.y)*(d.y - c.y) == 0)
	{

		RectangleBool = true;
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
	}
	else
	{
		RectangleBool = false;
	}
}

bool Rectangle::getRectangleBool(){

	return RectangleBool;
}

float Rectangle::distance(Point q, Point p){
	//此距離尚未開根號
	float d = (p.x - q.x)*(p.x - q.x) + (p.y - q.y)*(p.y - q.y);
	return d;

}
void  Rectangle::setSquare(){
	SquareBool = false;
	if (RectangleBool == true)
	{
		if ((distance(a, b) == distance(b, c)))
		{
			SquareBool = true;
		}

	}
}
bool Rectangle::getSquareBool(){
	return SquareBool;
}

void Rectangle::draw(){

	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 25; j++)
		{
			panel[i][j] = '.';
		}
	}


	panel[(int)a.y - 1][(int)a.x - 1] = 'k';// PerimeterCharacter;
	panel[(int)b.y - 1][(int)b.x - 1] = 'k';// PerimeterCharacter;
	panel[(int)c.y - 1][(int)c.x - 1] = 'k';// PerimeterCharacter;
	panel[(int)d.y - 1][(int)d.x - 1] = 'k';// PerimeterCharacter;

	//panel[(int)(d.y+b.y)/2 - 1][(int)(a.x,+c.x)/2 - 1] = 'k';// PerimeterCharacter;
	
	
	linePoint(a, b);
	linePoint(b, c);
	linePoint(c, d);
	linePoint(d, a);
	
	fill();
	
	for (int i = -1; i < 25; i++)
	{
		if (i == -1)
		{
			cout << setw(3) << "0";
			for (int i = 1; i <= 25; i++)
			{
				cout << setw(3) << i;
			}
			cout << "X";
		}
		else
		{
			cout << setw(3) << (i + 1);
			for (int j = 0; j < 25; j++)
			{

				cout << setw(3) << panel[i][j];
			}
		}
		cout << "\n";
	}
	cout << "Y";
}
void Rectangle::setFillcharacter(char c){

	Fillcharacter = c;
}
void Rectangle::setPerimeterCharacter(char c){

	PerimeterCharacter = c;

}
void Rectangle::linePoint(Point p1, Point p2)
{
	//斜率
	if ((p1.x - p2.x) == 0 || (p1.y - p2.y) == 0)
	{
		//水平線
		if ((p1.y - p2.y) == 0)
		{
			if (p1.x >= p2.x) //小->大
			{
				int temp = p1.x;
				p1.x = p2.x;
				p2.x = temp;
			}
			for (int i = p1.x; i <= p2.x; i++)
			{
				panel[(int)(p1.y) - 1][i - 1] = PerimeterCharacter;
			}
			return;
		}
		//垂直線
		if (p1.x - p2.x == 0)
		{
			if (p1.y >= p2.y) //小->大
			{
				int temp = p1.y;
				p1.y = p2.y;
				p2.y = temp;
			}
			for (int i = p1.y; i <= p2.y; i++)
			{
				panel[i - 1][(int)(p1.x) - 1] = PerimeterCharacter;
			}
			return;
		}
	}
	else
	{
		//================================
		//==========斜線判斷==============
		//================================
		float m = (p1.y - p2.y) / (p1.x - p2.x);


		if (m > 0)
		{
			//斜率正
			//找X最左
			float IndexF;
			float IndexE;

			float IndexFY;
			float IndexEY;
			if (p1.y >= p2.y)
			{
				IndexFY = p2.y;
				IndexEY = p1.y;
			}
			else
			{
				IndexFY = p1.y;
				IndexEY = p2.y;
			}


			if (p1.x >= p2.x)
			{
				IndexF = p1.x;
				IndexE = p2.x;
			}
			else
			{
				IndexF = p2.x;
				IndexE = p1.x;
			}

			for (int i = (int)IndexF, j = (int)IndexFY; ((i < IndexE) && (j <= (int)IndexEY)); j++, i++)
			{
				panel[j - 1][(int)i - 1]=PerimeterCharacter;
			}


		}
		else
		{
			//斜率負
			//找X最左起始
			float IndexF;
			float IndexE;

			float IndexFY;
			float IndexEY;

			if (p1.y >= p2.y)
			{
				IndexFY = p2.y;
				IndexEY = p1.y;
			}
			else
			{
				IndexFY = p1.y;
				IndexEY = p2.y;
			}

			if (p1.x >= p2.x)
			{
				IndexF = p2.x;
				IndexE = p1.x;
			}
			else
			{
				IndexF = p1.x;
				IndexE = p2.x;
			}

			for (int i = (int)IndexF, j = (int)IndexFY; ((i < IndexE) && (j <= (int)IndexEY)); j++, i--)
			{
				panel[j - 1][(int)i - 1]=PerimeterCharacter;

			}

		}
	}
}
void Rectangle::fill(){
	//用於水平的
	/*
	1.先檢查是否斷點只有2
	2.有的畫從抓到那填滿
	*/

	for (int i = 0; i < 25; i++)
	{
		int indexF, indexE;
		int count = 0;
		for (int j = 0; j < 25; j++){
			if (panel[i][j] == PerimeterCharacter)
			{
				count++;
				if (count == 1)
				{
					indexF = j;
				}
				else if (count == 2)
				{
					indexE = j;
				}


			}
		}
		if ((count != 2))
		{
			continue;
		}

		//===填滿動作===
		for (int p = indexF + 1; p < indexE; p++)
		{
			panel[i][p] = Fillcharacter;
		}
		//==============
	}



}