/****************************************************************************
 * Fichier: Immeuble.h
 * Auteur: William Bussiere
 * Date: 19 mai 2011
 * Description: Definition de la classe Immeuble
 ****************************************************************************/

#ifndef _IMMEUBLE_H_
#define _IMMEUBLE_H_

#include <iostream>
#include <string>
using namespace std;


class Immeuble
{
public :
	// Constructeur par parametre
	Immeuble(const string &adresse);
	Immeuble(const string &adresse, double prix);
	// Constructeur par copie
	Immeuble(const Immeuble &immeuble);
	// Destructeur
	~Immeuble();

	// Methodes d'acces
	double getPrix() const;
	string getAdresse() const;

	// Methode de modification
	void setPrix(double prix);

	// Surcharge d'operateur ==
	bool operator== (const Immeuble &immeuble) const ;

private :
	double prix_;
	string adresse_;	
};

#endif