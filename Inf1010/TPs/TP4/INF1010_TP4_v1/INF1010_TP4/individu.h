/************************************************************************************
 * Fichier                  : individu.h
 * Auteur                   : Raphaël Beamonte
 * Description              : Definition de la classe Individu
 * Date de creation         : Janvier 2013
 * Date de modification     : Janvier 2013
 ************************************************************************************/

#ifndef INDIVIDU_H
#define INDIVIDU_H

#include <string>

using namespace std;

class Individu {

public:
	Individu();
	Individu(string nom, string prenom);
	Individu(Individu const& individu);
	~Individu();

	string getNom() const;
	string getPrenom() const;
	unsigned int getNbVinsPreferes() const;
	string getVinPrefere(unsigned int i) const;
	double getPrix() const;

	void setNom(string nom);
	void setPrenom(string prenom);
	
	void addVinPrefere(string VinPrefere);
	void delVinPrefere(string VinPrefere);

	bool operator==(Individu const& individu);
	Individu& operator=(Individu const& individu);

	virtual string getString() const;

	virtual double calculerPrixEntree() const = 0;

protected:
	double prixEntree;

private:
	unsigned int nbVinsPreferes_;
	string * listeVinsPreferes_;
	string nom_;
	string prenom_;

};


#endif /* INDIVIDU_H */
