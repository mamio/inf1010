/****************************************************************************
 * Fichier: Skieur.h
 * Auteur: William Bussiere
 * Date: 19 mai 2011
 * Description: Definition de la classe Skieur
 ****************************************************************************/

#ifndef _SKIEUR_H_
#define _SKIEUR_H_

#include <iostream>
using namespace std;

class Skieur
{
public :
	// Constructeur par defaut et par parametre
	Skieur(unsigned int no=20,int altitude=500);
	// Destructeur
	~Skieur();

	// Methode d'acces
	int getAltitude() const;
	unsigned int getNumero() const;

	// Modification
	void remonter();

	// Methode a appeler en cascade par le renvois de *this
	Skieur& skier();
	Skieur& debouler();

	// Surcharge de l'operateur de comparaison
	bool operator== (const Skieur &skieur) const;

private :
	bool courseEstTermine();

	unsigned int no_;
	int altitude_;
	int temps_;
};

#endif