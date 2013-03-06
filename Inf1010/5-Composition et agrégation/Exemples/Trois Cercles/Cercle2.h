/****************************************************************************
 * Fichier: Cercle2.h
 * Auteur: Martin Bisson
 * Date: 9 sept 2009
 * Mise a jour : 11 mai 2011
 * Description: Définition de la classe Cercle2, qui utilise 2 double.
 ****************************************************************************/

#ifndef _CERCLE2_H_
#define _CERCLE2_H_

#include "Point.h"

#include <iostream>
using namespace std;

class Cercle2
{
public:
	// Constructeurs
	Cercle2();
	Cercle2(double x, double y, double radius);
	// Destructeur
    ~Cercle2();

	// Methodes d'acces
	double getX() const;
	double getY() const;
    double getRadius() const;

	// Methode pour afficher les attributs
    void print() const;

private:
    Point point_;
    double radius_;
};

#endif // _CERCLE2_H_
