/****************************************************************************
 * Fichier: Poire.cpp
 * Auteur: William Bussiere
 * Date: 18 mai 2011
 * Description: Implementation de la classe Poire
 ****************************************************************************/

#include "Poire.h"


/****************************************************************************
 * Fonction:	Poire::Poire
 * Description: Constructeur par défaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Poire::Poire()
{
	etat_ = ETAT_PAS_MURE;

	cout << "Une poire de plus par defaut" << endl;
}


/****************************************************************************
 * Fonction:	Poire::Poire
 * Description: Constructeur par parametre
 * Paramètres:	- (Etats) etat : etat de la poire a la creation (IN)
 * Retour:		aucun
 ****************************************************************************/
Poire::Poire(Etats etat)
	: etat_(etat)
{
	cout << "Une poire de plus par parametre" << endl;
}

/****************************************************************************
 * Fonction:	Poire::~Poire
 * Description: Destructeur
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Poire::~Poire()
{
	cout << "Poire jetee" << endl;
}


/****************************************************************************
 * Fonction:	Poire::murir
 * Description: Fait murir la poire
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Poire::murir()
{
	if(etat_ == ETAT_PAS_MURE)
	{
		etat_ = ETAT_MURE;
		cout << "Humm une poire bien mure" << endl;
	}

	else if(etat_ == ETAT_MURE)
	{
		etat_ = ETAT_POURRIE;
		cout << "Dommage, elle est pourrie" << endl;
	}
}


Etats Poire::getEtat()
{
	return etat_;
}

