 /****************************************************************************
 * Fichier: Plante.h
 * Auteur: William Bussiere
 * Date: 9 juin 2011
 * Description: Definition de la classe Plante
 ****************************************************************************/
#ifndef _PLANTE_H_
#define _PLANTE_H_

#include <iostream>
using namespace std;

#include "Vegetal.h"

class Plante : public Vegetal
{
public :
	Plante( double hauteurMaxCm );
	virtual ~Plante();

	virtual void croitre();
	bool estFleurie() const;

private :
	bool estFleurie_;
};

#endif