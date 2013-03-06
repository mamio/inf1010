#include "point.h"

Point::Point( double x, double y)
{
	x_ =x;
	y_ =y;
}
double Point::getX() const
{ 
	return x_;
}
double Point::getY() const
{
	return y_;
}
void Point::incrementer1()
{
	x_++;
	y_++;
}
Point & Point::incrementer2()
{
	x_++;
	y_++;
	return *this;
}

