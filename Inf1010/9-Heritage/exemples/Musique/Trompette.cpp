/****************************************************************************
 * Fichier: Trompette.cpp
 * Auteur: William Bussiere
 * Date: 24 mai 2011
 * Description: Implementation de la classe Trompette
 ****************************************************************************/

#include "Trompette.h"


/****************************************************************************
 * Fonction:	Trompette::Trompette
 * Description: Constructeur par defaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Trompette::Trompette()
	: InstrumentVent()
{
	cout << "Trompette" << endl;
}


/****************************************************************************
 * Fonction:	Trompette::~Trompette
 * Description: Destructeur
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Trompette::~Trompette()
{
	cout << "On tord la trompette a la Dizzy Gillespie : ";
}


/****************************************************************************
 * Fonction:	Trompette::jouer
 * Description: Jouer de la trompette
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Trompette::jouer()
{
	cout << "Pouet paripi pouet ";
}


/****************************************************************************
 * Fonction:	Trompette::huilerPistons
 * Description: On prend soins de la trompette
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Trompette::huilerPistons()
{
	cout << "Trompette : On huile les pistons" << endl;
}


