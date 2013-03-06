/****************************************************************************
 * Fichier: Balle.cpp
 * Auteur: William Bussiere
 * Date: 2 juin 2011
 * Description: Definition de la classe Balle
 ****************************************************************************/
#ifndef _BALLE_H_
#define _BALLE_H_

#include <iostream>
#include <string>
using namespace std;


class Balle
{
public :
	// Constructeurs et destructeurs
	Balle();
	Balle( string &marque);
	Balle( string &marque, double &diametre);
	~Balle();

	// Methodes d'acces
	string getMarque();
	double getDiametre();

	// Methodes de modification
	void setMarque(string &marque);
	void setDiametre(double &diametre);

	// Methode pour afficher les attributs de la balle
	void afficher();

private :
	string marque_;
	double diametre_;
};

#endif