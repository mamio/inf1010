/****************************************************************************
 * Fichier: Checkpoint.cpp
 * Auteur: William Bussiere
 * Date: 25 mai 2011
 * Description: Implementation de la classe Checkpoint
 ****************************************************************************/

#include "Checkpoint.h"


Checkpoint::Checkpoint()
	: Deplacable() // Optionnel
{
	cout << "Construction d'un checkpoint sans nom." << endl;
	nom_ = "Unnamed";
	x_ = 0;
	y_ = 0;
}


Checkpoint::Checkpoint(string nom, int x, int y)
	: Deplacable()
{
	cout << "Construction du checkpoint " << nom << '.' << endl;
	nom_ = nom;
	x_ = x;
	y_ = y;
}


Checkpoint::~Checkpoint()
{
	cout << "Destruction du checkpoint " << getNom() << " : ";
}


string Checkpoint::getNom() const
{
	return nom_;
}


int Checkpoint::getX() const
{
	return x_;
}


int Checkpoint::getY() const
{
	return y_;
}


void Checkpoint::deplacer(int dx, int dy)
{
	cout << "Ancienne position de " << nom_ << " (" << x_ << ", " << y_ << ')' << endl;
	x_ += dx;
	y_ += dy;
	cout << "Nouvelle position de " << nom_ << " (" << x_ << ", " << y_ << ')' << endl;
}

