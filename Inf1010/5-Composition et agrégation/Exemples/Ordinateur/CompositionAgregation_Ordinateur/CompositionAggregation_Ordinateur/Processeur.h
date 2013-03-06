/****************************************************************************
 * Fichier: Processeur.h
 * Auteur: Ouajdi Felfoul
 * Date: 12 Janvier 2012
 * Description: Definition de la classe Processeur
 ****************************************************************************/


#ifndef PROCESSEUR_H
#define PROCESSEUR_H

#include<string>
#include<iostream>
#include<iomanip>

using namespace std;

class Processeur
{
public:
	Processeur(void);
	~Processeur(void);

	void configurationMeilleure();
	void configurationEconomique();
	void configurationManuelle();

	void afficherSpecProcesseur() const;
	double obtenirPrix() const;

private:
	void calculerPrix(); // fonction privee car on ne donne pas a
						 // l'usager la possiblite de changer le prix
	string type_; 
	string vitesse_; 
	string cache_; 
	double prix_;
};

#endif //PROCESSEUR_H