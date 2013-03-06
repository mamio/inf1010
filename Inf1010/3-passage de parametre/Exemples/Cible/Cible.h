/****************************************************************************
 * Fichier: Cible.h
 * Auteur: William Bussiere
 * Date: 26 mai 2011
 * Description: Definition de la classe Cible
 ****************************************************************************/


#ifndef _CIBLE_H_
#define _CIBLE_H_

#include <iostream>
using namespace std;

class Cible
{
public :
	// Constructeur par paramètre avec valeurs par défaut
	Cible(int x=0, int y=0);

	// Methodes de modification
	void setX(int x);
	void setY(int y);
	void viser(int x, int y);

	// Methodes d'acces
	int getX();
	int getY();
	bool estTouchee();

	// Methode qui affiche la position et l'etat
	void afficher();

private :
	int x_;
	int y_;
	bool estTouchee_;
};

#endif