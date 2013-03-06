/****************************************************************************
 * Fichier: Piano.cpp
 * Auteur: William Bussiere
 * Date: 24 mai 2011
 * Description: Implementation de la classe Piano
 ****************************************************************************/

#include "Piano.h"


/****************************************************************************
 * Fonction:	Piano::Piano
 * Description: Constructeur par defaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Piano::Piano()
	: Instrument()
{
	cout << "Piano" << endl;
	qualiteCordes_ = 100.0;
}


/****************************************************************************
 * Fonction:	Piano::~Piano
 * Description: Destructeur
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Piano::~Piano()
{
	cout << "On demonte le piano : ";
}


/****************************************************************************
 * Fonction:	Piano::jouer
 * Description: Jouer du piano
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Piano::jouer()
{
	cout << "Paheuha bongg ";
	desaccorder(-5);
	qualiteCordes_ -= 0.1f;
}

/****************************************************************************
 * Fonction:	Piano::accorder
 * Description: Accorder le piano
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Piano::accorder()
{
	cout << "Piano : On engage un accordeur" << endl;
	Instrument::accorder();
}


/****************************************************************************
 * Fonction:	Piano::changerCordes
 * Description: Met des cordes de qualite 100
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Piano::changerCordes()
{
	qualiteCordes_ = 100;
}


float Piano::getQualiteCordes()
{
	cout << "Les cordes sont encore de bonne qualite. Reinspectez dans dix ans." << endl;
	return qualiteCordes_;
}

