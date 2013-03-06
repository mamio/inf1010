/****************************************************************************
 * Fichier: Batterie.cpp
 * Auteur: William Bussiere
 * Date: 24 mai 2011
 * Description: Implementation de la classe Batterie
 ****************************************************************************/

#include "Batterie.h"


/****************************************************************************
 * Fonction:	Batterie::Batterie
 * Description: Constructeur par defaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Batterie::Batterie()
	: Instrument()
{
	cout << "Batterie" << endl;
	qualitePeaux_ = 100.0;
}

/****************************************************************************
 * Fonction:	Batterie::~Batterie
 * Description: Destructeur
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Batterie::~Batterie()
{
	cout << "Demontage de la batterie : ";
}


/****************************************************************************
 * Fonction:	Batterie::jouer
 * Description: Emet le son de la batterie
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Batterie::jouer()
{
	cout << "Paouumm tis tiss ";
	desaccorder(-5);
	qualitePeaux_ -= 1;
}


/****************************************************************************
 * Fonction:	Batterie::accorder
 * Description: Accorde la batterie
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Batterie::accorder()
{
	// Cette definition de la methode accorder est une extension de la methode 
	// de la classe de base.

	cout << "Batterie : On tourne les petites vis sur le bord des futs" << endl;

	// On appelle la methode de la classe de base
	Instrument::accorder();
}

/****************************************************************************
 * Fonction:	Batterie::accorder
 * Description: Change la peau des futs de la batterie
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Batterie::changerPeaux()
{
	cout << "Batterie : On change la peau des futs." << endl;
}


float Batterie::getQualitePeaux()
{
	return qualitePeaux_;
}

