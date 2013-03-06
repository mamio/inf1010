/****************************************************************************
 * Fichier: Lecteur.cpp
 * Auteur: William Bussiere
 * Date: 18 mai 2011
 * Description: Implementation de la classe Lecteur
 ****************************************************************************/

#include "Lecteur.h"


/****************************************************************************
 * Fonction:	Lecteur::Lecteur
 * Description: Constructeur par parametre
 * Paramètres:	- (string) nom : nom de la personne
 * Retour:		aucun
 ****************************************************************************/
Lecteur::Lecteur(string nom)
	: nom_(nom)
{
	titre_ = "Moby-Dick";
	cout << "Un futur lecteur est ne" << endl;
}


/****************************************************************************
 * Fonction:	Lecteur::~Lecteur
 * Description: Destructeur
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Lecteur::~Lecteur()
{
	cout << "Un lecteur est mort" << endl;
}


void Lecteur::setLivre(string titre)
{
	titre_ = titre;
}


string Lecteur::getLivre() const
{
	return titre_;
}

string Lecteur::getNom() const
{
	return nom_;
}