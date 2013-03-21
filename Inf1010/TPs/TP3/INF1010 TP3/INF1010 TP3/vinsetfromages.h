/************************************************************************************
 * Fichier                  : vinsetfromages.h
 * Auteur                   : Marie-France et Odric
 * Description              : Definition de la classe VinsEtFromages
 * Date de creation         : 7 fevrier 2013
 * Date de modification     : 14 fevrier 2013
 ************************************************************************************/

#ifndef VINSETFROMAGES_H
#define VINSETFROMAGES_H

#include <iostream>
#include <string>
#include <vector>

#include "individu.h"
#include "etudiant.h"
#include "professeur.h"
#include "entreprise.h"

using namespace std;

class VinsEtFromages
{
public :
	VinsEtFromages();
	~VinsEtFromages();

	void addEtudiant(const Etudiant& etudiant);
	void addProfesseur(const Professeur& professeur);
	void addEntreprise(const Entreprise& entreprise);

	void delEtudiant(const unsigned int i);
	void delProfesseur(const unsigned int i);
	void delEntreprise(const unsigned int i);

	void afficherPresents() const;

	vector<Individu> getListeIndividus() const;

	void afficherIndividus() const;

private :
	vector<Entreprise> listeEntreprises_;
	vector<Professeur> listeProfesseurs_;
	vector<Etudiant> listeEtudiants_;
	unsigned int nbEntreprises_;
	unsigned int nbProfesseurs_;
	unsigned int nbEtudiants_;
};
#endif