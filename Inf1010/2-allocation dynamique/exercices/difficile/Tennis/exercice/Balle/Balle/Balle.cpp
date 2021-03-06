/****************************************************************************
 * Fichier: Balle.h
 * Auteur: William Bussiere
 * Date: 2 juin 2011
 * Description: Implementation de la classe Balle
 ****************************************************************************/

#include "Balle.h"


/****************************************************************************
 * Fonction:	Balle::Balle
 * Description: Constructeur par defaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Balle::Balle()
{
	cout << "Construction d'une balle Spalding de 6.50cm de diametre" << endl;
	marque_ = "Spalding";
	diametre_ = 6.5;		// cm
}


/****************************************************************************
 * Fonction:	Balle::Balle
 * Description: Constructeur par parametre
 * Paramètres:	- (string) marque : compagnie qui produit la balle
 * Retour:		aucun
 ****************************************************************************/
Balle::Balle(string marque)
{
	cout << "Construction d'une balle " << marque
		 << " de 6.50cm de diametre" << endl;
	marque_ = marque;
	diametre_ = 6.5;		// cm
}


/****************************************************************************
 * Fonction:	Balle::Balle
 * Description: Constructeur par parametre
 * Paramètres:	- (string) marque : compagnie qui produit la balle
 *				- (double) diametre : diametre en cm
 * Retour:		aucun
 ****************************************************************************/
Balle::Balle(string marque, double diametre)
{
	cout << "Construction d'une balle " << marque
		 << " de " << diametre << "cm de diametre" << endl;
	marque_ = marque;
	diametre_ = diametre;		// cm
}


/****************************************************************************
 * Fonction:	Balle::~Balle
 * Description: Destructeur
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Balle::~Balle()
{
	cout << "Destruction d'une balle" << endl;
}



string Balle::getMarque() 
{
	return marque_;
}



double Balle::getDiametre() 
{
	return diametre_;
}



void Balle::setMarque(string marque)
{
	marque_ = marque;
}



void Balle::setDiametre(double diametre)
{
	diametre_ = diametre;
}


/****************************************************************************
 * Fonction:	Balle::afficher
 * Description: Affiche les attributs de la balle avec un formatage
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Balle::afficher() 
{
	cout << "Balle de marque " << marque_ 
		 << " et de " << diametre_ << "cm de diametre." << endl;
}