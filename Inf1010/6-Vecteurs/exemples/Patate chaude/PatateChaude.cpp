/****************************************************************************
 * Fichier: PatateChaude.cpp
 * Auteur: William Bussiere
 * Date: 1 juin 2011
 * Description: Implementation de la classe PatateChaude
 ****************************************************************************/

#include "PatateChaude.h"


/****************************************************************************
 * Fonction:	PatateChaude::PatateChaude
 * Description: Constructeur par defaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
PatateChaude::PatateChaude()
	: temperature_(100.00)
{

}


/****************************************************************************
 * Fonction:	PatateChaude::PatateChaude
 * Description: Constructeur par parametre
 * Paramètres:	- (double) temperature : temperature interne de la patate
 * Retour:		aucun
 ****************************************************************************/
PatateChaude::PatateChaude(const double& temperature)
		: temperature_(temperature)
{

}

/****************************************************************************
 * Fonction:	PatateChaude::~PatateChaude
 * Description: Destructeur
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
PatateChaude::~PatateChaude()
{
	
}



double PatateChaude::getTemperature() const
{
	return temperature_;
}

void PatateChaude::setTemperature(const double &temperature)
{
	temperature_ = temperature;
}

