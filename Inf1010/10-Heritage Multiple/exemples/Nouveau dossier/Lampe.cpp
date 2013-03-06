/****************************************************************************
 * Fichier: Lampe.cpp
 * Auteur: William Bussiere
 * Date: 25 mai 2011
 * Description: Implementation de la classe Lampe
 ****************************************************************************/

#include "Lampe.h"


Lampe::Lampe()
{
	cout << "Construction d'une lampe" << endl;
	estAllumee_ = false;
}


Lampe::~Lampe()
{
	if( estAllumee() )
	{
		cout << "N'oubliez pas d'eteindre avant de partir!" << endl;
		eteindre();
	}
	cout << "Destruction de la lampe" << endl;
}



void Lampe::allumer()
{
	cout << "La lampe s'allume" << endl;
	estAllumee_ = true;
}


void Lampe::eteindre()
{
	cout << "La lampe s'eteint" << endl;
	estAllumee_ = false;
}


void Lampe::eclairer()
{
	if( estAllumee_ )
		cout << "Vous illuminez la piece." << endl;
	else
		cout << "Vous devez d'abord ouvrir la lampe" << endl;
}


bool Lampe::estAllumee() const
{
	return estAllumee_;
}

