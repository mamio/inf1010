#include "Entreprise.h"

Entreprise::Entreprise(const string &nom, int nombreEmployes, double chiffreAffaire)
{
	nom_=nom;
	nombreEmployes_=nombreEmployes;
	chiffreAffaire_=chiffreAffaire;

	cout << "Constr: Entreprise" << endl;
}

