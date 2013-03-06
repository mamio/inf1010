/****************************************************************************
 * Fichier: ParcBebe.h
 * Auteur: William Bussiere
 * Date: 25 mai 2011
 * Description: Definition de la classe ParcBebe
 ****************************************************************************/

#ifndef _PARC_BEBE_H_
#define _PARC_BEBE_H_

#include "Jouet.h"

#include <string>
#include <iostream>
using namespace std;


class ParcBebe : public Jouet
{
public :
	ParcBebe();
	ParcBebe(string nom);
	virtual ~ParcBebe();

	void setAgeMaximum(unsigned int age);
	unsigned int getAgeMaximum() const;

private :
	unsigned int ageMaximum_;
};

#endif