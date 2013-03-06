/****************************************************************************
 * Fichier: InstrumentVent.h
 * Auteur: William Bussiere
 * Date: 24 mai 2011
 * Description: Definition de la classe InstrumentVent
 ****************************************************************************/

#ifndef _INSTRUMENT_VENT__H_
#define _INSTRUMENT_VENT__H_

#include "Instrument.h"

#include <iostream>
using namespace std;


class InstrumentVent : public Instrument
{
public :
	// Constructeur par defaut
	InstrumentVent();
	// Destructeur virtuel pour destruction adequate
	virtual ~InstrumentVent();

	// Methodes communes a tous les intruments
	virtual void  jouer() = 0;	// Ce qui en fait une classe abstraite

	// Methode specifique aux instruments a vent
	virtual void viderSalive();

private :
	float quantiteSalive_; // En ml
};

#endif