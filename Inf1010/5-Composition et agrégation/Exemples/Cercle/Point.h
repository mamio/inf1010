/****************************************************************************
 * Fichier: Point.h
 * Auteur: Georges Abou-Khalil
 * Date: 2 sept 2008
 * Description: Définition de la classe Point
 ****************************************************************************/

#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>
using namespace std;

class Point
{
public:
	Point();
	Point(double x, double y);
    ~Point();

	double getX() const;
	double getY() const;

	void setX(double x);
	void setY(double y);

private:
	double x_;
	double y_;
};

#endif // _POINT_H_
