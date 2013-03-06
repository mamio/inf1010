/****************************************************************************
 * Fichier: Gerant.h
 * Auteur: Inconnu
 * Date: Inconnu
 * Mise a jour : 13 mai 2011
 * Description: Definition de la classe Gerant derivee d'Employe
 ****************************************************************************/

#ifndef _GERANT_H_
#define _GERANT_H_

#include "Employe.h"

#include <string>
#include <vector>
using namespace std;

class Gerant : public Employe
{
public:
	// Constructeurs
	Gerant();
	Gerant(string nom, double salaire);

	// Methode pour ajouter un employe
	void ajouterEmploye(Employe* e);

	// Methodes d'acces
	double getSalaire() const;
	Employe* getEmploye(string nom) const;
	string   getNom() const;				// On va ici redefinir la fonction du parent

private:
	// Attributs
	vector<Employe*> employes_;
	int bonus_;
};

#endif // _GERANT_H_
