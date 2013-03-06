/****************************************************************************
 * Fichier: Saxophone.h
 * Auteur: William Bussiere
 * Date: 24 mai 2011
 * Description: Definition de la classe Saxophone
 ****************************************************************************/

#ifndef _SAXOPHONE_H_
#define _SAXOPHONE_H_

#include "InstrumentVent.h"

#include <iostream>
using namespace std;


class Saxophone : public InstrumentVent
{
public :
	// Constructeur par defaut
	Saxophone();
	// Destructeur virtuel pour destruction adequate
	virtual ~Saxophone();

	// Methodes communes a tous les intruments
	virtual void  jouer();
	virtual void  accorder();

	// Methode specifique aux instruments au saxophone
	void changerAnche();
};

#endif