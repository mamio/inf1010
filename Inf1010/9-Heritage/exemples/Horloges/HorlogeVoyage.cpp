/****************************************************************************
 * Fichier: HorlogeVoyage.cpp
 * Auteur: Inconnu
 * Date: Inconnu
 * Mise a jour : 13 mai 2011
 * Description: Implementation de la classe HorlogeVoyage derivee de Horloge
 ****************************************************************************/

#include "Horlogevoyage.h"

HorlogeVoyage::HorlogeVoyage(bool militaire, string zone, int diff)
	: Horloge(militaire), zone_(zone), diff_(diff)
{
}

string HorlogeVoyage::getZone() const
{
	return zone_;
}

int HorlogeVoyage::getHeures() const
{
	int h = ( Horloge::getHeures() + diff_ );

	if ( estMilitaire() ) 
	{
		return h % 24;
	} 
	else 
	{
		return toAmericaine(h);
	}
}
