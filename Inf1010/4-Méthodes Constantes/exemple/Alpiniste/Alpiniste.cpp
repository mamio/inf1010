/****************************************************************************
 * Fichier: Alpiniste.cpp
 * Auteur: William Bussiere
 * Date: 25 mai 2011
 * Description: Implementation de la classe Alpiniste
 ****************************************************************************/

#include "Alpiniste.h"


/****************************************************************************
 * Fonction:	Alpiniste::Alpiniste
 * Description: Constructeur par defaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Alpiniste::Alpiniste()
{
	cout << "Constructeur par defaut d'un alpiniste";
	nom_ = "Quidam Leboeuf";
	altitude_ = 0.0f;
}


/****************************************************************************
 * Fonction:	Alpiniste::Alpiniste
 * Description: Constructeur par parametre
 * Paramètres:	- (string) nom : le nom de l'alpiniste
 * Retour:		aucun
 ****************************************************************************/
Alpiniste::Alpiniste(const string &nom)
{
	cout << "Construction d'un alpiniste du nom de " << nom << endl;
	nom_ = nom;
	altitude_ = 0.0f;
}


/****************************************************************************
 * Fonction:	Alpiniste::gravir
 * Description: Fait gagner de l'altitude a l'alpiniste
 * Paramètres:	- (float) altitude : altitude gagnee dans cette montee
 * Retour:		aucun
 ****************************************************************************/
void Alpiniste::gravir(float altitude)
{
	cout << nom_ << " gagne " << altitude << "m d'altitude" << endl;
	altitude_ += altitude;
}


/****************************************************************************
 * Fonction:	Alpiniste::descendre
 * Description: Fait perdre de l'altitude a l'alpiniste
 * Paramètres:	- (float) altitude : altitude perdue dans cette montee
 * Retour:		aucun
 ****************************************************************************/
void Alpiniste::descendre(float altitude)
{
	cout << nom_ << " perd " << altitude << "m d'altitude" << endl;
	altitude_ -= altitude;

	if( altitude_ <= 0.0 )
	{
		cout << nom_ << " a rejoint le pied du mont" << endl;
		altitude_ = 0.0f;
	}
}


string Alpiniste::getNom() const
{
	return nom_;
}


float Alpiniste::getAltitude() const
{
	return altitude_;
}


/****************************************************************************
 * Fonction:	Alpiniste::manger
 * Description: Cette fonction ne modifie pas d'attribut, mais n'est pas 
 *				non plus definie comme constante.
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Alpiniste::manger()
{
	cout << nom_ << " mange un peu de ses provisions" << endl;
}


