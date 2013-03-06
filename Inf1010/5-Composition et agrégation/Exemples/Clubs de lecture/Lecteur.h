/****************************************************************************
 * Fichier: Lecteur.h
 * Auteur: William Bussiere
 * Date: 18 mai 2011
 * Description: Definition de la classe Lecteur
 ****************************************************************************/

#ifndef _LECTEUR_H_
#define _LECTEUR_H_

#include <string>
#include <iostream>
using namespace std;


class Lecteur
{
public :
	Lecteur(string nom);
	~Lecteur();

	void setLivre(string titre);
	string getLivre() const;
	string getNom() const;

private :
	string nom_;
	string titre_;
};

#endif