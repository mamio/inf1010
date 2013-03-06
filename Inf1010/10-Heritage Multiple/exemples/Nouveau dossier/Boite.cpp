/****************************************************************************
 * Fichier: Boite.cpp
 * Auteur: William Bussiere
 * Date: 25 mai 2011
 * Description: Implementation de la classe Boite
 ****************************************************************************/

#include "Boite.h"


Boite::Boite()
{
	cout << "Construction d'une boite" << endl;
	estOuverte_ = false;
}



Boite::~Boite()
{
	cout << "Demolition de la boite" << endl;
}



void Boite::ouvrir()
{
	cout << "Ouverture de la boite" << endl;
	estOuverte_  = true;
}



void Boite::fermer()
{
	cout << "Fermeture de la boite" << endl;
	estOuverte_  = false;
}



void Boite::ajouterUnChiffre(double chiffre)
{
	if( estOuverte() )
	{
		cout << "Ajout du chiffre " << chiffre << " dans la boite" << endl;
		contenu_.push_back( chiffre );
	}
	else
		cout << "Vous devez ouvrir la boite avant de mettre quoi que ce soit dedans" << endl;
}


void Boite::afficherContenu() const
{
	if( estOuverte() )
	{
		cout << "La boite contient les chiffres : ";

		for( unsigned int i=0; i < contenu_.size(); i++)
			cout << contenu_[i] << ", ";
		cout << endl;
	}
	else
		cout << "On ne peut pas voir l'interieur d'une boite qui est fermee" << endl;
}


bool Boite::estOuverte() const
{
	return estOuverte_;
}


