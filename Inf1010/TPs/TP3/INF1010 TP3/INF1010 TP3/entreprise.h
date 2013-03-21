/************************************************************************************
 * Fichier                  : entreprise.h
 * Auteur                   : Marie-France et Odric
 * Description              : Definition de la classe Entreprise
 * Date de creation         : 6 fevrier 2013
 * Date de modification     : 13 fevrier 2013
 ************************************************************************************/

#ifndef ENTREPRISE_H
#define ENTREPRISE_H

#include <iostream>
#include <string>

#include "individu.h"

using namespace std;

class Entreprise : public Individu
{
public :

	Entreprise();
	Entreprise(string nomEntreprise, int stagiaires, int emplois, string nom, string prenom, double prixEntree);
	~Entreprise();
	Entreprise(const Entreprise &entreprise);

	string getNomEntreprise() const;
	int getStagiaires() const;
	int getEmploisProposes() const;

	void setNomEntreprise(string nom);
	void setStagiairesCherches(int stagiaires);
	void setEmplois(int emplois);

	string getString() const;

private : 

	string nomEntreprise_;
	int stagiairesCherches_;
	int emploisProposes_;

};
#endif