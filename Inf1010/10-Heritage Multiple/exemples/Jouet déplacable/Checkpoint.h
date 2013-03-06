/****************************************************************************
 * Fichier: Checkpoint.h
 * Auteur: William Bussiere
 * Date: 25 mai 2011
 * Description: Definition de la classe Checkpoint
 ****************************************************************************/

#ifndef _CHECKPOINT_H_
#define _CHECKPOINT_H_

#include "Deplacable.h"

#include <string>
#include <iostream>
using namespace std;


class Checkpoint : public Deplacable
{
public :
	Checkpoint();
	Checkpoint(string nom, int x, int y);
	virtual ~Checkpoint();

	string getNom() const;
	int getX() const;
	int getY() const;

	virtual void deplacer(int dx, int dy);

private :
	string nom_;
	int x_;
	int y_;
};

#endif 