/****************************************************************************
 * Fichier: Employe.cpp
 * Auteur: William Bussiere
 * Date: 19 mai 2011
 * Description: Implementation de la classe Employe
 ****************************************************************************/

#include "Employe.h"



/****************************************************************************
 * Fonction:	Employe::Employe
 * Description: Constructeur par parametre
 * Paramètres:	- (string) nom : nom de l'employe (IN)
 * Retour:		aucun
 ****************************************************************************/
Employe::Employe(string nom)
	: nom_(nom), poste_("Sans emploi")
{
	cout << "Creation du nouvel employe : " << nom_ << endl;
}

/****************************************************************************
 * Fonction:	Employe::~Employe
 * Description: Destructeur
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Employe::~Employe()
{
	cout << "Mort d'un employe : " << nom_ << endl;
}


/****************************************************************************
 * Fonction:	Employe::setPoste
 * Description: Modificateur de poste_
 * Paramètres:	- (string) poste : nouveau poste_ (IN)
 * Retour:		aucun
 ****************************************************************************/
void Employe::setPoste(string poste)
{
	poste_ = poste;
	cout << "Nouveau poste pour " << nom_ << " : " << poste_ << endl;
}



string Employe::getPoste() const
{
	return poste_;
}



string Employe::getNom() const
{
	return nom_;
}

