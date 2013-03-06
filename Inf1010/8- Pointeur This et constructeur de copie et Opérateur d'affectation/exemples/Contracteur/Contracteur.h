/****************************************************************************
 * Fichier: Contracteur.h
 * Auteur: William Bussiere
 * Date: 19 mai 2011
 * Description: Definition de la classe Contracteur
 ****************************************************************************/

#ifndef _CONTRACTEUR_H_
#define _CONTRACTEUR_H_

#include "Immeuble.h"

#include <iostream>
#include <vector>
using namespace std;


class Contracteur
{
public :
	// Constructeur par defaut
	Contracteur();
	// Constructeur de copie
	Contracteur(const Contracteur &contracteur);
	// Destructeur
	~Contracteur();

	// Methodes d'acces
	unsigned int getNbImmeuble() const;

	// Methode pour construire un immeuble
	void constuireImmeuble(Immeuble *immeuble);

	// Surcharge de l'operateur =
	Contracteur& operator= (const Contracteur &contracteur);

	// Surcharghe de l'operateur ==
	bool operator== (const Contracteur &contracteur) const;

private :
	vector<Immeuble*> immeubles_; // Composition
	// Le contracteur detruit ses maisons s'il est detruit sans les vendre
};

#endif