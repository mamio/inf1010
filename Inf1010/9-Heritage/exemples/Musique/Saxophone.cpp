/****************************************************************************
 * Fichier: Saxophone.cpp
 * Auteur: William Bussiere
 * Date: 24 mai 2011
 * Description: Implementation de la classe Saxophone
 ****************************************************************************/

#include "Saxophone.h"


/****************************************************************************
 * Fonction:	Saxophone::Saxophone
 * Description: Constructeur par defaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Saxophone::Saxophone()
	: InstrumentVent()
{
	cout << "Saxophone" << endl;
}

/****************************************************************************
 * Fonction:	Saxophone::~Saxophone
 * Description: Destructeur
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Saxophone::~Saxophone()
{
	cout << "Torsion du saxophone : ";
}


/****************************************************************************
 * Fonction:	Saxophone::jouer
 * Description: Jouer du Saxophone
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void  Saxophone::jouer()
{
	cout << "Whaa wo whann ";
}


/****************************************************************************
 * Fonction:	Saxophone::accorder
 * Description: Accorder le saxophone
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void  Saxophone::accorder()
{
	cout << "Saxophone : On deplace un peu l'anche" << endl;

	Instrument::accorder();
}


/****************************************************************************
 * Fonction:	Saxophone::changerAnche
 * Description: Changer l'anche du saxophone
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Saxophone::changerAnche()
{
	cout << "Saxophone : On change l'anche" << endl;
}

