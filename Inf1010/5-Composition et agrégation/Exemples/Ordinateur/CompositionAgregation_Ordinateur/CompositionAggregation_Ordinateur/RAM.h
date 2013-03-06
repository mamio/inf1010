/****************************************************************************
 * Fichier: RAM.h
 * Auteur: Ouajdi Felfoul
 * Date: 12 Janvier 2012
 * Description: Definition de la classe RAM
 ****************************************************************************/


#ifndef RAM_H
#define RAM_H

#include<string>
#include<iostream>
#include<iomanip>

using namespace std;


class RAM
{
public:
	RAM(void);
	~RAM(void);

	void configurationMeilleure();
	void configurationEconomique();
	void configurationManuelle();

	void afficherSpecRAM() const;
	double obtenirPrix() const;
private:

	void calculerPrix(); // fonction privee car on ne donne pas a
						 // l'usager la possiblite de changer le prix
	string capacite_; // ex.8 GIG
	string type_; // ex. DDR3
	string vitesse_; // ex. 667 MHZ
	double prix_;
};

#endif