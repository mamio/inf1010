/****************************************************************************
 * Fichier: Hotel.h
 * Auteur: Guillaume-Alexandre Bilodeau
 * Date: 17 février 2010
 * Description: Définition de la classe Hotel
 ****************************************************************************/

#ifndef _HOTEL_H_
#define _HOTEL_H_

#include "Entreprise.h"

class Hotel :  public Entreprise
{
public:
	Hotel(const string &nom="Sans nom", int nombreEmployes=0, double chiffreAffaire=0, int nombreChambres=0);
	virtual ~Hotel();

	virtual void afficheInfo() const;
	virtual void afficheType() const;

private:
	int nombreChambres_;
	int *bidon_;
};


#endif