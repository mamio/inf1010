/****************************************************************************
 * Fichier: Point.h
 * Auteur: Georges Abou-Khalil
 * Date: 2 sept 2008
 * Mise a jour : 16 mai 2011
 * Description: Définition de la classe Point
 ****************************************************************************/

#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>
using namespace std;


class Point
{
public:
	// Constructeurs
	Point();
	Point(double x, double y);
	// Destructeur
    ~Point();

	// Methodes d'acces
	double getX();
	double getY();

	// Methodes de modifications
	void setX(double x);
	void setY(double y);

	// Affiche les coordonnees du point
    void print();

private:
	double x_;
	double y_;
};

#endif // _POINT_H_
