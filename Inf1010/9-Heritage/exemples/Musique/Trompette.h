/****************************************************************************
 * Fichier: Trompette.h
 * Auteur: William Bussiere
 * Date: 24 mai 2011
 * Description: Definition de la classe Trompette
 ****************************************************************************/

#ifndef TROMPETTE_H_
#define TROMPETTE_H_

#include "InstrumentVent.h"

#include <iostream>
using namespace std;


class Trompette : public InstrumentVent
{
public :
	// Constructeur par defaut
	Trompette();
	// Destructeur virtuel pour destruction adequate
	virtual ~Trompette();

	// Methodes communes a tous les intruments
	virtual void  jouer();

	// Methode specifique aux instruments a la trompette
	void huilerPistons();
};

#endif