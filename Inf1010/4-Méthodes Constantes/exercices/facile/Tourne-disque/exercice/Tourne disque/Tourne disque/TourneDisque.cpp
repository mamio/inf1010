/****************************************************************************
 * Fichier: TourneDisque.cpp
 * Auteur: William Bussiere
 * Date: 13 juin 2011
 * Description: Implementation de la classe TourneDisque
 ****************************************************************************/

#include "TourneDisque.h"

TourneDisque::TourneDisque()
	: disqueCourant_("Aucun")
{
	joue_ = false;
}



void TourneDisque::insererDisque(const Disque& disque)
{
	disqueCourant_ = disque;
}



Disque TourneDisque::echangerDisque(const Disque& disque)
{
	Disque aRetirer = disqueCourant_;
	disqueCourant_ = disque;

	return aRetirer;
}



Disque TourneDisque::retirerDisque()
{
	Disque aRetirer = disqueCourant_;
	disqueCourant_ = Disque("Aucun");

	return aRetirer;
}



string TourneDisque::getTitreDisqueCourant() const
{
	return disqueCourant_.getTitre();
}



void TourneDisque::jouer()
{
	joue_ = true;
}



void TourneDisque::arreter()
{
	joue_ = false;
}



bool TourneDisque::joue() const
{
	return joue_;
}
