#include "Point.h"


Point::Point()
{
}


Point::~Point()
{
}
void Point::setPointInitalize(float x, float y)
{
	if (x > 0.0 && x <= 20.0 && y>0.0&&y<=20.0)
	{
		this->x = x;
		this->y = y;
	}

}