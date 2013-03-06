/****************************************************************************
 * Fichier: Hotel.cpp
 * Auteur: Guillaume-Alexandre Bilodeau
 * Date: 17 février 2010
 * Description: Implémentation de la classe Hotel
 ****************************************************************************/

#include "Hotel.h"

/****************************************************************************
 * Fonction: Hotel::Hotel
 * Description: Constructeur par paramètres
 * Paramètres: string: valeur de nom_, int: valeur de nombreEmployes_, 
 *                     double: valeur de chiffreAffaire_, int: valeur de nombreChambres_
 * Retour: aucun
 ****************************************************************************/

Hotel::Hotel(const string &nom, int nombreEmployes, double chiffreAffaire, int nombreChambres)
: Entreprise(nom,nombreEmployes,chiffreAffaire)
{
	nombreChambres_ = nombreChambres;
	bidon_ = new int(4);

	cout << "Constr: Hotel" << endl;
}

/****************************************************************************
 * Fonction: Hotel::afficheInfo
 * Description: Affichage des valeurs de attributs à l'écran
 * Paramètres: aucun
 * Retour: aucun
 ****************************************************************************/

void Hotel::afficheInfo() const
{
	cout << "Info Hotel" << endl;
	cout << nombreChambres_ << endl;
	Entreprise::afficheInfo();
}

/****************************************************************************
 * Fonction: Hotel::~Hotel
 * Description: Destructeur
 * Paramètres: aucun
 * Retour: aucun
 ****************************************************************************/

Hotel::~Hotel()
{
	delete bidon_;
	cout << "Dest: Hotel" << endl;
}

/****************************************************************************
 * Fonction: Hotel::afficheType
 * Description: Affiche le type de l'objet à l'écran
 * Paramètres: aucun
 * Retour: aucun
 ****************************************************************************/

void Hotel::afficheType() const
{
	cout << "Hotel!" << endl;
}