/****************************************************************************
 * Fichier: Entreprise.h
 * Auteur: Guillaume-Alexandre Bilodeau
 * Date: 17 février 2010
 * Description: Définition de la classe Entreprise
 ****************************************************************************/

#ifndef _ENTREPRISE_H_
#define _ENTREPRISE_H_

#include <string>
#include <iostream>
#include "Adresse.h"

using namespace std;

class Entreprise
{
public:
	Entreprise(const string &nom="Sans nom", int nombreEmployes=0, double chiffreAffaire=0);
	virtual ~Entreprise();

	virtual void afficheInfo() const; //=0 pour V);
	void incrEmploye();
	virtual void afficheType() const;

private:
	string nom_;
	int nombreEmployes_;
	double chiffreAffaire_;
	Adresse adr_;
};


#endif