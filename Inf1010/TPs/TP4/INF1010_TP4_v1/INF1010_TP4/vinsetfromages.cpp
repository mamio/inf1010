/************************************************************************************
 * Fichier                  : vinsetfromages.cpp
 * Auteur                   : Raphaël Beamonte
 * Description              : Implementation de la classe VinsEtFromages
 * Date de creation         : Janvier 2013
 * Date de modification     : 20 fevrier 2013
 ************************************************************************************/

#include "vinsetfromages.h"
#include "individu.h"
#include "entreprise.h"
#include "professeur.h"
#include "etudiant.h"
#include <iostream>
#include <algorithm>
#include <vector>

/**
 * Constructeur
 */
VinsEtFromages::VinsEtFromages() {
}

/**
 * Destructeur
 */
VinsEtFromages::~VinsEtFromages() {
}

/**
 * Ajout dans la liste des entreprises
 */
void VinsEtFromages::addIndividu(Individu *individu) {
	bool exists = false;
	for (unsigned int i=0; i<listeIndividus_.size(); i++) {
		if (listeIndividus_[i] == individu) {
			exists = true;
			break;
		}
	}
	if (exists) 
	{
		cerr << "L'individu suivant existe deja : " << individu->getString() << endl;
	} 
	else 
	{
		listeIndividus_.push_back(individu);
	}
}

/**
 * Suppression dans la liste des entreprises
 */
void VinsEtFromages::delIndividu(Individu *individu) {
	for (unsigned int i=0; i<listeIndividus_.size(); i++) {
		if (listeIndividus_[i] == individu) {
			listeIndividus_[i] = listeIndividus_[listeIndividus_.size()-1];
			listeIndividus_.pop_back();
		}
	}
}

Individu& VinsEtFromages::getIndividu(string nom, string prenom) const
{
	Etudiant individuVide;
	int pos = 0;
	bool exists = false;
	for (unsigned int i = 0; i < listeIndividus_.size(); i++)
	{
		if(listeIndividus_[i]->getNom() == nom && listeIndividus_[i]->getPrenom() == prenom)
		{
			pos = i;
			exists = true;
			break;
		}
		else
			exists = false;
	}
		if (exists == false && pos == 0)
		{
			cout << "l'individu : " << nom << prenom << " n'existe pas" << endl;
			return individuVide;
		}
		else
			return *listeIndividus_[pos];
}

vector<Individu*> VinsEtFromages::getListeIndividus() const
{
	return listeIndividus_;
}

/**
 * Affichage de la liste des individus
 */
void VinsEtFromages::afficherIndividus() const {
	cout << "Individus presents ( " << listeIndividus_.size() << " ) : " << endl;
	
	for(unsigned int i=0;i<listeIndividus_.size();++i)
		cout << "# - " << listeIndividus_[i]->getString() << endl;
}

/**
 * Affichage de la liste des presents
 */
void VinsEtFromages::afficherPresents() const {
	Professeur professeur;
	Entreprise entreprise;
	Etudiant etudiant;

	cout << "Affichier les presents :" << endl;
	cout << "\n# Entreprises presentes (" << nombreIndividusDansCategorie(entreprise) << "):" <<endl;
	for(unsigned int i=0;i<listeIndividus_.size();++i)
	{
		if (typeid(*listeIndividus_[i]) == typeid(entreprise))
			cout << "# - " << listeIndividus_[i]->getString() << endl;
	}
	cout << "\n# Professeurs presents :" << nombreIndividusDansCategorie(professeur) << endl;
	for(unsigned int i=0;i<listeIndividus_.size();++i)
	{
		if (typeid(*listeIndividus_[i]) == typeid(professeur))
		cout << "# - " << listeIndividus_[i]->getString() << endl;
	}
	cout << "\n# Etudiants presents :" << nombreIndividusDansCategorie(entreprise) << endl;
	for(unsigned int i=0;i<listeIndividus_.size();++i)
	{
		if (typeid(*listeIndividus_[i]) == typeid(etudiant))
		cout << "# - " << listeIndividus_[i]->getString() << endl;
	}
	cout << endl;
}

int VinsEtFromages::nombreIndividusDansCategorie(Individu& individu) const
{
	int nbIndividus = 0;
		for(unsigned int i=0;i<listeIndividus_.size();++i)
	{
		if (typeid(*listeIndividus_[i]) == typeid(individu))
			nbIndividus++;
	}
		return nbIndividus;
}