/****************************************************************************
 * Fichier: TourneDisque.h
 * Auteur: William Bussiere
 * Date: 13 juin 2011
 * Description: Definition de la classe TourneDisque
 ****************************************************************************/

#ifndef _TOURNE_DISQUE_H_
#define _TOURNE_DISQUE_H_

#include "Disque.h"

#include <string>
using namespace std;

class TourneDisque
{
public :
	TourneDisque();

	void insererDisque(const Disque& disque);
	Disque echangerDisque(const Disque& disque);
	Disque retirerDisque();

	string getTitreDisqueCourant() const;

	void jouer();
	void arreter();
	bool joue() const;

private :
	bool joue_;
	Disque disqueCourant_;
};

#endif