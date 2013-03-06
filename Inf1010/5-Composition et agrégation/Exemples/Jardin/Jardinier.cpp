/****************************************************************************
 * Fichier: Jardinier.cpp
 * Auteur: William Bussiere
 * Date: 26 mai 2011
 * Description: Implementation de la classe Jardinier
 ****************************************************************************/

#include "Jardinier.h"


/****************************************************************************
 * Fonction:	Jardinier::Jardinier
 * Description: Constructeur par defaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Jardinier::Jardinier()
{
	cout << "Construction d'un jardinier par defaut" << endl;
	nom_ = "";
	age_ = 0;
	anneesExperience_ = 0;
}


/****************************************************************************
 * Fonction:	Jardinier::Jardinier
 * Description: Constructeur par parametre
 * Paramètres:	- (string) nom : nom du jardinier (IN)
 * Retour:		aucun
 ****************************************************************************/
Jardinier::Jardinier( string nom )
{
	cout << "Construction d'un jardinier par parametre" << endl;
	nom_ = nom;
	age_ = 0;
	anneesExperience_ = 0;
}


/****************************************************************************
 * Fonction:	Jardinier::~Jardinier
 * Description: Destructeur
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Jardinier::~Jardinier()
{
	cout << "Mort du domestique " << nom_ << " jardinier de profession" << endl;
}


void Jardinier::setNom( string nom )
{
	nom_ = nom;
}


void Jardinier::setAge( unsigned int age )
{
	age_ = age;
}


void Jardinier::setAnneesExperience( unsigned int annees )
{
	anneesExperience_ = annees;
}


string Jardinier::getNom() const
{
	return nom_;
}


unsigned int Jardinier::getAge() const
{
	return age_;
}


unsigned int Jardinier::getAnneesExperience() const
{
	return anneesExperience_;
}


/****************************************************************************
 * Fonction:	Jardinier::afficher
 * Description: Affiche les information sur le jardinier.
 *				Methode declaree const et qui peut etre 
 *				appelee de Jardin::afficher() const.
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Jardinier::afficher() const
{
	cout << "Informations sur le jardinier responsable :" << endl;
	cout << "   Nom : " << getNom() << endl;
	cout << "   Age : " << getAge() << endl;
	cout << "   Annees d'experience : " << getAnneesExperience() << endl;
	cout << endl;
}


