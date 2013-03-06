/****************************************************************************
 * Fichier: Instrument.h
 * Auteur: William Bussiere
 * Date: 24 mai 2011
 * Description: Definition de la classe Instrument
 ****************************************************************************/

#ifndef _INSTRUMENT_H_
#define _INSTRUMENT_H_

#include <iostream>
using namespace std;


class Instrument
{
public :
	// Constructeur par defaut
	Instrument();
	// Destructeur virtuel pour destruction adequate
	virtual ~Instrument();

	// Methodes communes a tous les intruments
	virtual void  jouer() = 0; // Ce qui en fait une classe abstraite
	bool estTresDesaccorde() const;
	virtual void  accorder();

protected :
	// Methode accessible que par les classes dérivées.
	void desaccorder(float deltaCents); // desaccordement en cents (il y a 100 cents entre 2 demi-tons)

private :
	float decalage_; // En cents
};

#endif