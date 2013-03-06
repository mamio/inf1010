/************************************************************************************
*	Fichier					: Coffret.h
*	Auteur					: 
*	Description				: Definition de la classe Coffret
*	Date de creation		: 
*	Date de modification	: 
************************************************************************************/

#ifndef COFFRET_H
#define COFFRET_H

#include <iostream>
#include <string>
#include "Date.h"
#include "Film.h"

class Coffret
{
public:

	Coffret();
	Coffret(unsigned int i, string t ,unsigned int j, unsigned int m , unsigned int a); 
	~Coffret();

	void setId(unsigned int i);
	void setTitre(string t );
	void setDate(Date& d);


	unsigned int getId()const;
	string getTitre()const;
	Date getDate()const;


	void afficheCoffret() const;
	void ajouterFilm(Film& f);

private: 
	unsigned int identifiant_;
	string titre_;
	Date date_;
	Film* film_;
	unsigned int nbFilm_;
};

#endif

