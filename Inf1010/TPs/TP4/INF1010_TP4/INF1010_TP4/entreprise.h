/************************************************************************************
 * Fichier                  : entreprise.h
 * Auteur                   : Raphaël Beamonte
 * Description              : Definition de la classe Entreprise
 * Date de creation         : Janvier 2013
 * Date de modification     : Janvier 2013
 ************************************************************************************/

#ifndef ENTREPRISE_H
#define ENTREPRISE_H

#include <string>
#include "individu.h"

using namespace std;

class Entreprise : public Individu {

public:
	Entreprise();
	Entreprise(string nom, string prenom, string nomEntreprise,
				int stagiairesCherches, int emploisProposes);
	~Entreprise();

	string getNomEntreprise() const;
	int getStagiairesCherches() const;
	int getEmploisProposes() const;

	void setNomEntreprise(string nomEntreprise);
	void setStagiairesCherches(int stagiairesCherches);
	void setEmploisProposes(int emploisProposes);

	virtual string getString() const;

	virtual double calculerPrixEntree() const;
	
private:
	string nomEntreprise_;
	int stagiairesCherches_;
	int emploisProposes_;

};


#endif /* ENTREPRISE_H */
