/****************************************************************************
 * Fichier: Camion.cpp
 * Auteur: William Bussiere
 * Date: 25 mai 2011
 * Description: Implementation de la classe Camion
 ****************************************************************************/

#include "Camion.h"

Camion::Camion()
	: Deplacable(), Jouet() // optionnel
{
	cout << "Un camion" << endl;
	x_ = 0;
	y_ = 0;
}


Camion::Camion(string nom, int x, int y)
	: Deplacable(), Jouet(nom)
{
	cout << " Un camion" << nom << endl;
	x_ = x;
	y_ = y;
}


Camion::~Camion()
{
	cout << "Destruction du camion : ";
}


void Camion::deplacer(int dx, int dy)
{
	cout << "Coordonnees anterieures du camion " << getNom() << " (" << x_ << ", " << y_ << ')' << endl;
	x_ += dx;
	y_ += dy;
	cout << "Coordonnees posterieures du camion " << getNom() << " (" << x_ << ", " << y_ << ')' << endl;
}


int Camion::getX() const
{
	return x_;
}


int Camion::getY() const
{
	return y_;
}