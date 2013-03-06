/****************************************************************************
 * Fichier: Entreprise.cpp
 * Auteur: Guillaume-Alexandre Bilodeau
 * Date: 17 février 2010
 * Description: Implémentation de la classe Entreprise
 ****************************************************************************/

#include "Entreprise.h"

/****************************************************************************
 * Fonction: Entreprise::Entreprise
 * Description: Constructeur par paramètres
 * Paramètres: string: valeur de nom_, int: valeur de nombreEmployes_, double: valeur de chiffreAffaire_
 * Retour: aucun
 ****************************************************************************/

Entreprise::Entreprise(const string &nom, int nombreEmployes, double chiffreAffaire)
{
	nom_ = nom;
	nombreEmployes_ = nombreEmployes;
	chiffreAffaire_ = chiffreAffaire;

	cout << "Constr: Entreprise" << endl;
}

/****************************************************************************
 * Fonction: Entreprise::afficheInfo
 * Description: Affichage des valeurs de attributs à l'écran
 * Paramètres: aucun
 * Retour: aucun
 ****************************************************************************/

void Entreprise::afficheInfo() const
{
	cout << "Info Entreprise" << endl;
	cout << nom_ << " " << nombreEmployes_ << " " << chiffreAffaire_ << endl;
}

/****************************************************************************
 * Fonction: Entreprise::incrEmploye
 * Description: Incrémente nombreEmployes_
 * Paramètres: aucun
 * Retour: aucun
 ****************************************************************************/

void Entreprise::incrEmploye()
{
	nombreEmployes_++;
	afficheInfo();
}

/****************************************************************************
 * Fonction: Entreprise::~Entreprise
 * Description: Destructeur
 * Paramètres: aucun
 * Retour: aucun
 ****************************************************************************/

Entreprise::~Entreprise()
{
}

/****************************************************************************
 * Fonction: Entreprise::afficheType
 * Description: Affiche le type de l'objet à l'écran
 * Paramètres: aucun
 * Retour: aucun
 ****************************************************************************/

void Entreprise::afficheType() const
{
	cout << "Entreprise!" << endl;
}