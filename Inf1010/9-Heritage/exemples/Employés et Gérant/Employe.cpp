/****************************************************************************
 * Fichier: Employe.cpp
 * Auteur: Inconnu
 * Date: Inconnu
 * Mise a jour : 13 mai 2011
 * Description: Implementation de la classe Employe
 ****************************************************************************/

#include "Employe.h"

/****************************************************************************
 * Fonction:	Employe::Employe
 * Description: Constructeur par défaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Employe::Employe()
	: nom_("VIDE"), salaire_(0.0)
{
}

/****************************************************************************
 * Fonction:	Employe::Employe
 * Description: Constructeur par parametres
 * Paramètres:	- (string) nom : nom de l'employe (IN)
 *				- (double) salaire : salaire de l'employe (IN)
 * Retour:		aucun
 ****************************************************************************/
Employe::Employe(string nom, double salaire)
	: nom_(nom), salaire_(salaire)
{
}


double Employe::getSalaire() const
{
	return salaire_;
}


void Employe::setSalaire(double salaire)
{
	salaire_ = salaire;
}


string Employe::getNom() const
{
	return nom_;
}
