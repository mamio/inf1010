/****************************************************************************
 * Fichier: LampeEnBoite.h
 * Auteur: William Bussiere
 * Date: 25 mai 2011
 * Description: Definition de la classe LampeEnBoite
 *				(Copyright 2011 J. Galipeau)
 ****************************************************************************/

#ifndef _LAMPE_EN_BOITE_H_
#define _LAMPE_EN_BOITE_H_

#include "Lampe.h"
#include "Boite.h"

#include <iostream>
using namespace std;


class LampeEnBoite :	public Lampe,
						public Boite
{
public :
	LampeEnBoite();
	virtual ~LampeEnBoite();

	virtual void eclairer();
	virtual void afficherContenu();
};

#endif