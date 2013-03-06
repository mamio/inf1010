/****************************************************************************
 * Fichier: PointDynamique.h
 * Auteur: Martin Bisson
 * Date: 3 sept 2009
 * Mise a jour : 16 mai 2011
 * Description: Définition de la classe PointDynamique
 ****************************************************************************/

#ifndef _POINT_DYNAMIQUE_H_
#define _POINT_DYNAMIQUE_H_

#include <iostream>
using namespace std;

#include "Point.h"


class PointDynamique
{
public:
	// Constructeurs
	PointDynamique();
	PointDynamique(double x, double y);
	// Destructeur
    ~PointDynamique();

	// Methodes d'acces
	double getX();
	double getY();

	// Methodes de modification
	void setX(double x);
	void setY(double y);

	// Affiche les coordonnees du point
    void print();

private:
    Point* point_;
	// Cet objet est responsable de l'allocation dynamique de memoire pour
	// ce point, ainsi que de sa destruction.
};

#endif // _POINTDYNAMIQUE_H_
