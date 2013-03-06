#include "Horloge.h"


/****************************************************************************
 * Fichier: Horloge.cpp
 * Auteur: Inconnu
 * Date: Inconnu
 * Mise a jour : 13 mai 2011
 * Description: Implementation de la classe Horloge
 ****************************************************************************/

Horloge::Horloge(bool militaire)
	: estMilitaire_(militaire)
{
}

string Horloge::getZone() const
{ 
	return "UTC+0";
}

int Horloge::getHeures() const
{
	time_t t = time(0);
	int h = gmtime(&t)->tm_hour;

	if (estMilitaire_) 
		return h;

	//else 
	return toAmericaine(h);
}

int Horloge::getMin() const
{
	time_t t = time(0);
	return gmtime(&t)->tm_min;
}

bool Horloge::estMilitaire() const
{
	return estMilitaire_;
}

int Horloge::toAmericaine(int h) const
{
	h = h % 12;

	if (h == 0) 
	{
		return 12;
	} 
	else 
	{
		return h;
	}
}
