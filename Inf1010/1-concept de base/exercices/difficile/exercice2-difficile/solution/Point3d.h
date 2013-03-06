/****************************************************************************
 * Fichier: Point3d.h
 * Auteur: Guillaume-Alexandre Bilodeau
 * Date: 22 janvier 2009
 * Mise a jour : 6 juin 2011
 * Description: Définition de la classe Point3d
 ****************************************************************************/

#ifndef _POINT3D_H_
#define _POINT3D_H_

class Point3d
{
public:
	Point3d();
	Point3d(double x, double y, double z);

	double getX();
	double getY();
	double getZ();

	void setX(double x);
	void setY(double y);
	void setZ(double z);

	void move(double x, double y, double z);
	void reset(); // méthode de modification.
	void imprimer();

private:
	double x_;
	double y_;
	double z_;
};

#endif // _POINT3D_H_