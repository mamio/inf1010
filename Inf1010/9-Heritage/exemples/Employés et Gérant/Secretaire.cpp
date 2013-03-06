/****************************************************************************
 * Fichier: Secretaire.cpp
 * Auteur: Inconnu
 * Date: Inconnu
 * Mise a jour : 16 mai 2011
 * Description: Implementation de la classe Secretaire, un employe simple
 ****************************************************************************/

#include "Secretaire.h"


/****************************************************************************
 * Fonction:	Secretaire::Secretaire
 * Description: Constructeur par parametres
 * Paramètres:	- (string) nom : nom de l'employe (IN)
 *				- (double) salaire : salaire de l'employe (IN)
 * Retour:		aucun
 ****************************************************************************/
Secretaire::Secretaire(string nom, double salaire)
: Employe(nom, salaire)
{
}

