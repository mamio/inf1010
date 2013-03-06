#include "Point.h"


Point3d::Point3d() 
{
	reset();
}

Point3d::Point3d(double coordx, double coordy, double coordz)
{
	x_ = coordx;
	y_ = coordy;
	z_ = coordz;
}

Point3d::~Point3d()
{
}

double Point3d::getX() const
{
	return x_;
}

double Point3d::getY() const
{
	return y_;
}

double Point3d::getZ() const
{
	return z_;
}
void Point3d::move(double dx, double dy, double dz)
{
	x_ += dx;
	y_ += dy;
	z_ += dz;
}

void Point3d::reset()
{
	x_ = 0;
	y_ = 0;
	z_ = 0;
}