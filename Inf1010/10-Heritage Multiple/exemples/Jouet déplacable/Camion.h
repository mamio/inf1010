/****************************************************************************
 * Fichier: Camion.h
 * Auteur: William Bussiere
 * Date: 25 mai 2011
 * Description: Definition de la classe Camion
 ****************************************************************************/

#ifndef _CAMION_H_
#define _CAMION_H_

#include "Jouet.h"
#include "Deplacable.h"

#include <string>
#include <iostream>
using namespace std;


class Camion :	public Deplacable,
				public Jouet
{
public :
	Camion();
	Camion(string nom, int x, int y);
	virtual ~Camion();

	virtual void deplacer(int dx, int dy);
	int getX() const;
	int getY() const;

private :
	int x_;
	int y_;
};

#endif 