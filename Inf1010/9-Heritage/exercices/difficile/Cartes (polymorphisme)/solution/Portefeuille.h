#ifndef _PORTEFEUILLE_H_
#define _PORTEFEUILLE_H_

#include "Carte.h"

#include <vector>
#include <iostream>
using namespace std;

class Portefeuille
{
public :
	Portefeuille();

	void ajouterCarte(Carte* carte);
	void afficherCartes();

private :
	vector<Carte*> cartes_;
};

#endif