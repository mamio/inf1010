 /****************************************************************************
 * Fichier: Vegetal.h
 * Auteur: William Bussiere
 * Date: 9 juin 2011
 * Description: Definition de la classe Vegetal
 ****************************************************************************/
#ifndef _VEGETAL_H_
#define _VEGETAL_H_

#include <iostream>
using namespace std;


class Vegetal
{
public :
	Vegetal( double hauteurMaxCm );
	virtual ~Vegetal();

	double getHauteur() const;
	virtual void croitre();

protected :
	void mettreAZero();

private :
	double hauteur_;
	double hauteurMax_;
};

#endif