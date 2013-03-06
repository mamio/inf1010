/****************************************************************************
 * Fichier: Local.cpp
 * Auteur: William Bussiere
 * Date: 19 mai 2011
 * Description: Implementation de la classe Local
 ****************************************************************************/

#include "Local.h"



/****************************************************************************
 * Fonction:	Local::Local
 * Description: Constructeur defaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Local::Local()
	: type_("Sans domaine de recherche"), numeroDePorte_("Sans adresse")
{
	cout << "Construction d'un local sans fonction" << endl;
}


/****************************************************************************
 * Fonction:	Local::Local
 * Description: Constructeur par parametre
 * Paramètres:	- (string) type : type de laboratoire (IN)
 *				- (string) numeroDePorte : adresse du labo (IN)
 * Retour:		aucun
 ****************************************************************************/
Local::Local(const string &type, const string &numeroDePorte)
	: type_(type), numeroDePorte_(numeroDePorte)
{
	cout << "Local : " << type_ << " a l'adresse " << numeroDePorte_ << endl;
}


/****************************************************************************
 * Fonction:	Local::~Local
 * Description: Destructeur
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Local::~Local()
{
	cout << "Demolition du local : " << numeroDePorte_ << endl;
}


string Local::getType() const
{
	return type_;
}


string Local::getNumeroDePorte() const
{
	return numeroDePorte_;
}

void Local::setType(string type)
{
	type_ = type;
}


void Local::setNumeroDePorte(string no)
{
	numeroDePorte_ = no;
}