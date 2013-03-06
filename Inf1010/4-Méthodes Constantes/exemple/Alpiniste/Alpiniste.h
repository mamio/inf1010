/****************************************************************************
 * Fichier: Alpiniste.h
 * Auteur: William Bussiere
 * Date: 25 mai 2011
 * Description: Definition de la classe Alpiniste
 ****************************************************************************/

#ifndef _ALPINISTE_H_
#define _ALPINISTE_H_

#include <iostream>
#include <string>
using namespace std;

class Alpiniste
{
public :
	// Constructeurs
	Alpiniste();
	Alpiniste(const string &nom);	// Ce const ne designe pas une methode constante,
									// mais bien que le parametre ne pourra etre modifie

	void gravir(float altitude);
	void descendre(float altitude);

	string getNom() const;
	float getAltitude() const;		// Methode constante
	void manger();

private :
	string nom_;
	float altitude_;			//En metres
};

#endif