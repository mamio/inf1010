/****************************************************************************
 * Fichier: Point.cpp
 * Auteur: Inconnu
 * Date: 
 * Mise a jour : 6 juin 2011
 * Description: Implementation de la classe Point3d
 ****************************************************************************/

#include "Point.h"


/****************************************************************************
 * Fonction:	Point3d:Point3d
 * Description: Constructeur par défaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Point3d::Point3d() 
{
	reset();
}


/****************************************************************************
 * Fonction:	Point3d:Point3d
 * Description: Constructeur par paramètres
 * Paramètres: - double x: valeur de x_
 *             - double y: valeur de y_
 *             - double z: valeur de z_
 * Retour:		aucun
 ****************************************************************************/
Point3d::Point3d(double coordx, double coordy, double coordz)
{
	x_ = coordx;
	y_ = coordy;
	z_ = coordz;
}


/****************************************************************************
 * Fonction:	Point3d:Point3d
 * Description: Destructeur
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
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

/****************************************************************************
 * Fonction:	Point3d:move
 * Description: Déplace un point
 * Paramètres: - double x: valeur de x_
 *             - double y: valeur de y_
 *             - double z: valeur de z_
 * Retour:		aucun
 ****************************************************************************/
void Point3d::move(double dx, double dy, double dz)
{
	x_ += dx;
	y_ += dy;
	z_ += dz;
}


/****************************************************************************
 * Fonction:	Point3d:reset
 * Description: Place le point à l'origine
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Point3d::reset()
{
	x_ = 0;
	y_ = 0;
	z_ = 0;
}