/****************************************************************************
 * Fichier: Ecran.h
 * Auteur: Ouajdi Felfoul
 * Date: 12 Janvier 2012
 * Description: Definition de la classe Ecran
 ****************************************************************************/


#ifndef ECRAN_H
#define ECRAN_H

#include<string>
#include<iostream>
#include<iomanip>

using namespace std;


class Ecran
{
public:
	Ecran();
	~Ecran();
	//Fonctions de configuration qui determinent les valeurs de format_ et resolution_
	void configurationMeilleure(); 
	void configurationEconomique();
	void configurationManuelle();
	

	void afficherSpecEcran() const;
	double obtenirPrix() const;

private:
	void calculerPrix(); // fonction privee car on ne donne pas a
						 // l'usager la possiblite de changer le prix
	string format_; // ex. 15.4pouce 
	string resolution_; // ex. 1280x900
	double prix_;
};

#endif //ECRAN_H