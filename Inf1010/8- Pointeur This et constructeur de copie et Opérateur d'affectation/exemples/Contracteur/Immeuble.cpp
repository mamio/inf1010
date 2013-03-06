/****************************************************************************
 * Fichier: Immeuble.cpp
 * Auteur: William Bussiere
 * Date: 19 mai 2011
 * Description: Implementation de la classe Immeuble
 ****************************************************************************/

#include "Immeuble.h"


/****************************************************************************
 * Fonction:	Immeuble::Immeuble
 * Description: Constructeur par parametre
 * Paramètres:	- (string) adresse : adresse de l'immeuble (IN)
 * Retour:		aucun
 ****************************************************************************/
Immeuble::Immeuble(const string &adresse)
	: adresse_(adresse), prix_(100000.00)
{
	cout << "Immeuble construit au " << adresse 
		 << ", au prix regulier de " << prix_ << "$." << endl;
}


/****************************************************************************
 * Fonction:	Immeuble::Immeuble
 * Description: Constructeur par parametre
 * Paramètres:	- (string) adresse : adresse de l'immeuble (IN)
 *				- (double) prix : valeur de la maison (IN)
 * Retour:		aucun
 ****************************************************************************/
Immeuble::Immeuble(const string &adresse, double prix)
	: adresse_(adresse), prix_(prix)
{
	cout << "Immeuble construit au " << adresse 
		 << ", au prix specifie de " << prix_ << "$." << endl;
}


/****************************************************************************
 * Fonction:	Immeuble::Immeuble
 * Description: Constructeur par copie
 * Paramètres:	- (Immeuble) immeuble : a copier
 * Retour:		aucun
 ****************************************************************************/
Immeuble::Immeuble(const Immeuble &immeuble)
{
	// Ici le constructeur par copie est exactement pareille
	// a celui fournit par defaut par le compilateur
	cout << "Construction d'un immeuble identique a " << immeuble.adresse_ << endl;
	prix_ = immeuble.prix_;
	adresse_ = immeuble.adresse_;
}


/****************************************************************************
 * Fonction:	Immeuble::~Immeuble
 * Description: Destructeur
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Immeuble::~Immeuble()
{
	cout << "Destruction d'un immeuble a l'adresse : " << adresse_ << endl;
}


double Immeuble::getPrix() const
{
	return prix_;
}



string Immeuble::getAdresse() const
{
	return adresse_;
}



void Immeuble::setPrix(double prix)
{
	prix_ = prix;
}


/****************************************************************************
 * Fonction:	Immeuble::operator==
 * Description: Surcharge de l'operateur d'egalite
 * Paramètres:	- (Immeuble) immeuble : a comparer
 * Retour:		(bool) comparaison
 ****************************************************************************/
bool Immeuble::operator== (const Immeuble &immeuble) const
{
	// On doit verifier attribut par attribut
	return ( prix_ == immeuble.prix_ && adresse_ == immeuble.adresse_);
}

