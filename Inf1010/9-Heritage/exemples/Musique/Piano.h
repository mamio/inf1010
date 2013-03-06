/****************************************************************************
 * Fichier: Piano.h
 * Auteur: William Bussiere
 * Date: 24 mai 2011
 * Description: Definition de la classe Piano
 ****************************************************************************/

#ifndef _PIANO_H_
#define _PIANO_H_

#include "Instrument.h"

#include <iostream>
using namespace std;


class Piano : public Instrument
{
public :
	// Constructeur par defaut
	Piano();
	// Destructeur virtuel pour destruction adequate
	virtual ~Piano();

	// Methodes communes a tous les intruments
	virtual void  jouer();
	virtual void  accorder();

	// Methode specifique au piano
	void changerCordes();
	float getQualiteCordes();

private :
	float qualiteCordes_;
};

#endif