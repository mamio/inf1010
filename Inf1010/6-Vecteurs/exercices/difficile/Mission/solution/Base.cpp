/****************************************************************************
 * Fichier: Base.cpp
 * Auteur: William Bussiere
 * Date: 21 juin 2011
 * Description: Implementation de la classe Base
 ****************************************************************************/

#include "Base.h"

Base::Base(const string& nom, const string& description)
	: nom_(nom), description_(description)
{
}



Base::~Base()
{
	// On doit detruire les mission car Base est le seul a en avoir la possession
	// (composition)
	for(unsigned int i=0; i<missions_.size(); i++)
		delete missions_[i];
}



void Base::setNom(const string& nom)
{
	nom_ = nom;
}



string Base::getNom() const
{
	return nom_;
}



void Base::setDescription(const string& description)
{
	description_ = description;
}



string Base::getDescription() const
{
	return description_;
}



void Base::ajouterMission(Mission* mission)
{
	// Il est plus rapide de copier des pointeurs que de gros
	// objets comme Mission
	missions_.push_back( mission );
}


void Base::afficher() const
{
	cout << "Nom : " << nom_ << endl;
	cout << "Description : " << description_ << endl;
	cout << "Missions : " << endl;

	for(unsigned int i=0; i<missions_.size(); i++)
		missions_[i]->afficher();
}