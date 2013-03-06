/****************************************************************************
 * Fichier: ParcBebe.cpp
 * Auteur: William Bussiere
 * Date: 25 mai 2011
 * Description: Implementation de la classe ParcBebe
 ****************************************************************************/

#include "ParcBebe.h"

ParcBebe::ParcBebe()
	: Jouet() // Optionnel
{
	cout << "Parc pour bebe." << endl;
	ageMaximum_ = 0;
}


ParcBebe::ParcBebe(string nom)
	: Jouet(nom)
{
	cout << "Parc pour bebe de marque " << nom << '.' << endl;
	ageMaximum_ = 0;
}


ParcBebe::~ParcBebe()
{
	cout << "Destruction du parc pour bebe : ";
}


void ParcBebe::setAgeMaximum(unsigned int age)
{
	ageMaximum_ = age;
}


unsigned int ParcBebe::getAgeMaximum() const
{
	return ageMaximum_;
}

