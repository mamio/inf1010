/************************************************************************************
 * Fichier                  : etudiant.h
 * Auteur                   : Raphaël Beamonte
 * Description              : Definition de la classe Etudiant
 * Date de creation         : Janvier 2013
 * Date de modification     : Janvier 2013
 ************************************************************************************/

#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <string>
#include "individu.h"
#include "entreprise.h"

using namespace std;

class Etudiant : public Individu {

public:
	Etudiant();
	Etudiant(string nom, string prenom, string departement,
				string niveau);
	Etudiant(const Etudiant& etudiant);
	~Etudiant();

	string getDepartement() const;
	string getNiveau() const;
	Entreprise* getEntreprisePreferees(int pos) const;

	void setDepartement(string departement);
	void setNiveau(string niveau);

	virtual string getString() const;

	virtual double calculerPrixEntree() const;
	int nbEntreprisePreferees() const;

	void addEntreprisePreferee(Entreprise* entreprise);
	
private:
	string departement_;
	string niveau_;
	Entreprise **listeEntreprisesPreferees_;
	int nbEntreprisePreferees_;
};


#endif /* ETUDIANT_H */
