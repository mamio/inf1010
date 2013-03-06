/****************************************************************************
 * Fichier: Deplacable.h
 * Auteur: William Bussiere
 * Date: 25 mai 2011
 * Description: Definition de l'interface Deplacable
 ****************************************************************************/

#ifndef _DEPLACABLE_H_
#define _DEPLACABLE_H_

#include <iostream>
using namespace std;


// Il sagit d'une classe interface 

class Deplacable
{
public : 
	Deplacable();
	virtual ~Deplacable();

	virtual void deplacer(int dx, int dy) = 0;
};

#endif