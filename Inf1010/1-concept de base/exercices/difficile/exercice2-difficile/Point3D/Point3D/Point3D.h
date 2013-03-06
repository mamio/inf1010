#ifndef _POINT3D_H_
#define _POINT3D_H_  //Si la classe Point n'a pas été créée, créer la classe

#include <iostream>
using namespace std;

class Point3D
{
public:
	Point3D(); // constructeur par défaut
	Point3D(double x, double y, double z);

	// Methodes d'acces
	double getX() const;
	double getY() const;
	double getZ() const;

	// Methodes de modification
	void setX(double x);
	void setY(double y);
	void setZ(double z);

	void move(double x, double y, double z);

	void reset();

	void imprimer();

private:
	double x_;
	double y_;
	double z_;
};

#endif // _POINT3D_H_