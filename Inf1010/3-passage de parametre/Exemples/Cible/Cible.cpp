/****************************************************************************
 * Fichier: Cible.cpp
 * Auteur: William Bussiere
 * Date: 26 mai 2011
 * Description: Implementation de la classe Cible
 ****************************************************************************/

#include "Cible.h"


/****************************************************************************
 * Fonction:	Cible::Cible
 * Description: Constructeur par paramètre avec valeurs par défaut
 * Paramètres:	- (int) x : position en x du centre (IN)
 *				- (int) y : position en y du centre (IN)
 * Retour:		aucun
 ****************************************************************************/
Cible::Cible(int x, int y)
{
	cout << "Creation d'une cible a la position : " << x << ", " << y << endl;
	x_ = x;
	y_ = y;
	estTouchee_ = false;
}


void Cible::setX(int x)
{
	x_ = x;
}


void Cible::setY(int y)
{
	y_ = y;
}


/****************************************************************************
 * Fonction:	Cible::viser
 * Description: Mthode qui modifie estTouche_
 * Paramètres:	- (int) x : position en x du tir (IN)
 *				- (int) y : position en y du tir (IN)
 * Retour:		aucun
 ****************************************************************************/
void Cible::viser(int x, int y)
{
	if( x == x_ && y == y_ )
		estTouchee_ = true;
	else
		estTouchee_ = false;
}


int Cible::getX()
{
	return x_;
}



int Cible::getY()
{
	return y_;
}



bool Cible::estTouchee()
{
	return estTouchee_;
}


void Cible::afficher()
{
	cout << "La cible est a la position (" << x_ << ", " << y_ << ") " << endl;
	cout << "Cible touchee : ";
	if(estTouchee_)
		cout << "oui";
	else
		cout << "non";
	cout << endl;
}