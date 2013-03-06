/****************************************************************************
 * Fichier: Compteur.cpp
 * Auteurs: - Georges Abou-Khalil
 *          -
 *          -
 * Date: 16 sept 2008
 * Description: Implémentation de la classe Compteur
 ****************************************************************************/

#include "Compteur.h"
#include <iostream>

using namespace std;

/****************************************************************************
 * Fonction: Compteur::Compteur
 * Description: Constructeur par paramètre
 * Paramètres: - unsigned int nb: la valeur initiale du compteur
 * Retour: aucune
 ****************************************************************************/
Compteur::Compteur(int nb)
: nb_(nb)
{
}

/****************************************************************************
 * Fonction: Compteur::getNb
 * Description: retourne la valeur du compteur
 * Paramètres: aucun
 * Retour: (int) la valeur du compteur
 ****************************************************************************/
int Compteur::getNb() const
{
	return nb_;
}

/****************************************************************************
 * Fonction: Compteur::inc
 * Description: incrémente le compteur
 * Paramètres: aucun
 * Retour: aucun
 ****************************************************************************/
void Compteur::inc()
{
	nb_++;
}

/****************************************************************************
 * Fonction: Compteur::dec
 * Description: decrémente le compteur
 * Paramètres: aucun
 * Retour: aucun
 ****************************************************************************/
void Compteur::dec()
{
	nb_--;
}
