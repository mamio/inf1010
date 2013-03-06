/****************************************************************************
 * Fichier: Arbre.cpp
 * Auteur: William Bussiere
 * Date: 9 juin 2011
 * Description: Implementation de la classe Arbre
 ****************************************************************************/

#include "Arbre.h"

Arbre::Arbre( double hauteurMaxCm )
	: Vegetal( hauteurMaxCm )
{
	cout << "Creation d'un arbre" << endl;
}


Arbre::~Arbre()
{
	cout << "Destruction d'un arbre" << endl;
}


void Arbre::croitre()
{
	Vegetal::croitre();

	cout << "Produit " << getHauteur() * 0.6
		<< " grammes de bois utilisable" << endl;
}


double Arbre::couper()
{
	double boisProduit = getHauteur() * 0.6;
	mettreAZero();

	return boisProduit;
}