/****************************************************************************
 * Fichier: Batterie.h
 * Auteur: William Bussiere
 * Date: 24 mai 2011
 * Description: Definition de la classe Batterie
 ****************************************************************************/

#ifndef _BATTERIE_H_
#define _BATTERIE_H_

#include "Instrument.h"

#include <iostream>
using namespace std;


class Batterie : public Instrument
{
public :
	// Constructeur par defaut
	Batterie();
	// Destructeur virtuel pour destruction adequate
	virtual ~Batterie();

	// Methodes communes a tous les intruments
	virtual void  jouer();
	virtual void  accorder();

	// Methodes specifiques a la batterie
	void changerPeaux();
	float getQualitePeaux();

private :
	float qualitePeaux_;
};

#endif