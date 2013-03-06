 /****************************************************************************
 * Fichier: Vegetal.cpp
 * Auteur: William Bussiere
 * Date: 9 juin 2011
 * Description: Implementation de la classe Vegetal
 ****************************************************************************/

#include "Vegetal.h"

Vegetal::Vegetal(double hauteurMaxCm)
{
	cout << "Creation d'un vegetal" << endl;
	hauteur_ = 0.0;
	hauteurMax_ = hauteurMaxCm;
}



Vegetal::~Vegetal()
{
	cout << "Destruction d'un vegetal" << endl;
}



double Vegetal::getHauteur() const
{
	return hauteur_;
}



void Vegetal::croitre()
{
	hauteur_ += (hauteurMax_ - hauteur_)/10.0;
}


void Vegetal::mettreAZero()
{
	hauteur_ = 0;
}


