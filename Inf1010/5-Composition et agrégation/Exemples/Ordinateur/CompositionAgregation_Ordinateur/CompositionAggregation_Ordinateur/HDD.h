/****************************************************************************
 * Fichier: HDD.h
 * Auteur: Ouajdi Felfoul
 * Date: 12 Janvier 2012
 * Description: Definition de la classe HDD
 ****************************************************************************/

#ifndef _HDD_H
#define _HDD_H

#include<string>
#include<iostream>
#include<iomanip>

using namespace std;


class HDD
{
public:
	HDD(void);
	~HDD(void);

	void configurationMeilleure();
	void configurationEconomique();
	void configurationManuelle();
	

	void afficherSpecDisque() const;
	double obtenirPrix() const;

private:
	void calculerPrix(); // fonction privee car on ne donne pas a
						 // l'usager la possiblite de changer le prix
	string capacite_; // ex. 512
	string vitesse_; // ex.5400
	double prix_;
};

#endif