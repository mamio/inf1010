/****************************************************************************
 * Fichier: Point3d.h
 * Auteur: Angelo Rossi
 * Date: 18 janvier 2009
 * Description: Implementation de la classe Point3d
 ****************************************************************************/

#include "Point3d.h"


Point3d::Point3d(const double &coordx,const  double &coordy,const double &coordz)
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
void Point3d::move(const double &dx,const  double &dy,const  double &dz)
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