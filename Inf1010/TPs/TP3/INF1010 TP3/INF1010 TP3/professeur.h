/************************************************************************************
 * Fichier                  : professeur.h
 * Auteur                   : Marie-France et Odric
 * Description              : Definition de la classe Professeur
 * Date de creation         : 6 fevrier 2013
 * Date de modification     : 13 fevrier 2013
 ************************************************************************************/

#ifndef PROFESSEUR_H
#define PROFESSEUR_H


#include <iostream>
#include <string>

#include "individu.h"
	
using namespace std;

class Professeur : public Individu
{
	public :
		Professeur();
		Professeur(string nom, string prenom, string departement, string bureau, double prixEntree);
		~Professeur();
		Professeur(const Professeur &professeur);

		string getDepartement() const;
		string getBureau() const;
		string getString() const;

		void setDepartement(string departement);
		void setBureau(string departement);

	private :
		string departement_;
		string bureau_;
};
#endif
