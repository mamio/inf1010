/************************************************************************************
 * Fichier                  : professeur.h
 * Auteur                   : Raphaël Beamonte
 * Description              : Definition de la classe Professeur
 * Date de creation         : Janvier 2013
 * Date de modification     : Janvier 2013
 ************************************************************************************/

#ifndef PROFESSEUR_H
#define PROFESSEUR_H

#include <string>
#include "individu.h"

using namespace std;

class Professeur : public Individu {

public:
	Professeur();
	Professeur(string nom, string prenom, string departement,
				string bureau);
	~Professeur();

	string getDepartement() const;
	string getBureau() const;

	void setDepartement(string departement);
	void setBureau(string bureau);

	virtual string getString() const;

	virtual double calculerPrixEntree() const;
	
private:
	string departement_;
	string bureau_;

};


#endif /* PROFESSEUR_H */
