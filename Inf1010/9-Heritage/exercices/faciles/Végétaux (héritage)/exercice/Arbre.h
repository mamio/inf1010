 /****************************************************************************
 * Fichier: Arbre.h
 * Auteur: William Bussiere
 * Date: 9 juin 2011
 * Description: Definition de la classe Arbre
 ****************************************************************************/
#ifndef _ARBRE_H_
#define _ARBRE_H_

#include <iostream>
using namespace std;

#include "Vegetal.h"

class Arbre : public Vegetal
{
public :
	Arbre(double hauteurMaxCm);
	virtual ~Arbre();

	/* A Completer */
};

#endif