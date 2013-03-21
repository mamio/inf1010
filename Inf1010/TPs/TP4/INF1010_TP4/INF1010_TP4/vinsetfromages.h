/************************************************************************************
 * Fichier                  : vinsetfromages.h
 * Auteur                   : Raphaël Beamonte
 * Description              : Definition de la classe VinsEtFromages
 * Date de creation         : Janvier 2013
 * Date de modification     : Janvier 2013
 ************************************************************************************/

#ifndef VINSETFROMAGES_H
#define VINSETFROMAGES_H

#include "individu.h"
#include "professeur.h"
#include "entreprise.h"
#include "etudiant.h"
#include <string>
#include <vector>

using namespace std;

class VinsEtFromages {

public:
	VinsEtFromages();
	~VinsEtFromages();

	void addIndividu(Individu *individu);
	void delIndividu(Individu *individu);

	Individu& getIndividus(string nom, string prenom) const;
	vector<Individu> getListeIndividus() const;

	void afficherIndividus() const;
	void afficherPresents() const;

	int nombreIndividusDansCategorie(Individu& individu) const;

private:
	vector<Individu*> listeIndividus_;
};


#endif /* VINSETFROMAGES_H */
