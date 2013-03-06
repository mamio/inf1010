/****************************************************************************
 * Fichier: Cercle3.h
 * Auteur: Martin Bisson
 * Date: 9 sept 2009
 * Mise a jour : 11 mai 2011
 * Description: Définition de la classe Cercle3, qui utilise un point, mais
   de manière dynamique.
 ****************************************************************************/

#ifndef _CERCLE3_H_
#define _CERCLE3_H_

#include "Point.h"

#include <iostream>
using namespace std;

class Cercle3
{
public:
	// Contructeurs
	Cercle3();
	Cercle3(double x, double y, double radius);
	// Destructeur
    ~Cercle3();

	// Methodes d'acces
	double getX() const;
	double getY() const;
    double getRadius() const;

	// Methode pour l'affichage des attributs
    void print() const;

private:
    Point* point_;	
    double radius_;
};

#endif // _CERCLE3_H_
