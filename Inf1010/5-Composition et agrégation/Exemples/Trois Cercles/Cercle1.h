/****************************************************************************
 * Fichier: Cercle1.h
 * Auteur: Martin Bisson
 * Date: 9 sept 2009
 * Mise a jour : 11 mai 2011
 * Description: Définition de la classe Cercle1, qui utilise 2 double.
 ****************************************************************************/

#ifndef _CERCLE1_H_
#define _CERCLE1_H_

#include <iostream>
using namespace std;

class Cercle1
{
public:
	// Constructeurs
	Cercle1();
	Cercle1(double x, double y, double radius);
	// Destructeur
    ~Cercle1();

	// Methodes d'acces
	double getX() const;
	double getY() const;
    double getRadius() const;

	// Methodes pour afficher les attributs
    void print() const;

private:
	double x_;
	double y_;
    double radius_;
};

#endif // _CERCLE1_H_
