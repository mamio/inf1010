/****************************************************************************
 * Fichier: Jouet.cpp
 * Auteur: William Bussiere
 * Date: 25 mai 2011
 * Description: Implementation de la classe Jouet
 ****************************************************************************/

#include "Jouet.h"


Jouet::Jouet()
{
	cout << "Construction d'un jouet quelconque : ";
	nom_			= "Unnamed";
	ageMinimum_		= 0;
}


Jouet::Jouet(string nom)
{
	cout << "Construction du jouet : ";
	nom_			= nom;
	ageMinimum_		= 0;
}


Jouet::~Jouet()
{
	cout << "Destruction du jouet ";
}


void Jouet::setAgeMinimum(unsigned int age)
{
	ageMinimum_ = age;
}


string Jouet::getNom() const
{
	return nom_;
}


unsigned int Jouet::getAgeMinimum() const
{
	return ageMinimum_;
}

