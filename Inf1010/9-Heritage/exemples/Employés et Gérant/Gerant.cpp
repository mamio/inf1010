/****************************************************************************
 * Fichier: Gerant.cpp
 * Auteur: Inconnu
 * Date: Inconnu
 * Mise a jour : 13 mai 2011
 * Description: Implementation de la classe Gerant
 ****************************************************************************/

#include "Gerant.h"


/****************************************************************************
 * Fonction:	Gerant::Gerant
 * Description: Constructeur par défaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Gerant::Gerant()
{
	bonus_=15001;
}


/****************************************************************************
 * Fonction:	Gerant::Gerant
 * Description: Constructeur par parametres
 * Paramètres:	- (string) nom : nom du gerant (IN)
 *				- (double) salaire : salaire du gerant (IN)
 * Retour:		aucun
 ****************************************************************************/
Gerant::Gerant(string nom, double salaire)
	: Employe(nom, salaire)
{
	bonus_=15001;
}

/****************************************************************************
 * Fonction:	Gerant::ajouterEmploye
 * Description: ajoute un employe que le gerant doit administrer
 *				Remarque : Il peut administrer d'autres gerants!
 * Paramètres:	- (Employe) employe : l'employe a ajouter
 * Retour:		aucun
 ****************************************************************************/
void Gerant::ajouterEmploye(Employe* employe)
{
	employes_.push_back(employe);
}

/****************************************************************************
 * Fonction:	Gerant::getEmploye
 * Description: Regarde si un certain employe fait partie de son equipe
 * Paramètres:	- (string) nom : le nom de l'employe a trouver
 * Retour:		(Employe*) un pointeur vers cet employe s'il est present
 ****************************************************************************/
Employe* Gerant::getEmploye(string nom) const
{
	for (int i = 0; i < employes_.size(); i++) {
		if (employes_[i]->getNom() == nom) {
			return employes_[i];
		}
	}
	return 0;
}

// Reimplementation de la fonction getNom d'Employe
string Gerant::getNom() const
{
	return "Mr." + Employe::getNom();
}

double Gerant::getSalaire() const
{
	return Employe::getSalaire() + bonus_;
}