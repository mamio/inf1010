/****************************************************************************
 * Fichier: Poire.h
 * Auteur: William Bussiere
 * Date: 18 mai 2011
 * Description: Definition de la classe Poire
 ****************************************************************************/

#ifndef _POIRE_H_
#define _POIRE_H_

#include <iostream>
using namespace std;

enum Etats {ETAT_PAS_MURE, ETAT_MURE, ETAT_POURRIE};

class Poire
{
public :
	

	Poire();
	Poire(Etats etat);
	~Poire();

	void murir();
	Etats getEtat();

private :
	Etats etat_;
};

#endif