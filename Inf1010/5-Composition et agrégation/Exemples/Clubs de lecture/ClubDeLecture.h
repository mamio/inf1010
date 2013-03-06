/****************************************************************************
 * Fichier: ClubDeLecture.h
 * Auteur: William Bussiere
 * Date: 18 mai 2011
 * Description: Definition de la classe ClubDeLecture
 ****************************************************************************/

#ifndef _CLUB_DE_LECTURE_H_
#define _CLUB_DE_LECTURE_H_

#include "Lecteur.h"

#include <iostream>
#include <string>
using namespace std;


class ClubDeLecture
{
public :
	ClubDeLecture(string nom, string livrePrefere);
	~ClubDeLecture();

	void ajouterMembre( Lecteur* lecteur , unsigned short no);
	void retirerMembre(unsigned short no);
	void surveillerMembres();
private :
	string nom_;
	string livrePrefere_;

	// membres du club : Aggregation par pointeur
	Lecteur* membres_[5];
};

#endif