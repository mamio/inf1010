/****************************************************************************
 * Fichier: InstrumentVent.cpp
 * Auteur: William Bussiere
 * Date: 24 mai 2011
 * Description: Implementation de la classe InstrumentVent
 ****************************************************************************/

#include "InstrumentVent.h"


/****************************************************************************
 * Fonction:	InstrumentVent::InstrumentVent
 * Description: Constructeur par defaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
InstrumentVent::InstrumentVent()
	: Instrument()
{
	quantiteSalive_ = 0.0;
}


/****************************************************************************
 * Fonction:	InstrumentVent::~InstrumentVent
 * Description: Destructeur
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
InstrumentVent::~InstrumentVent()
{
	cout << " On demonte l'intrument a vent : ";
}


/****************************************************************************
 * Fonction:	InstrumentVent::viderSalive
 * Description: Remet la quantite de salive dans l'instrument a zero
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void InstrumentVent::viderSalive()
{
	cout << "Le liquide coule comme de l'eau dans l'evier" << endl;
	quantiteSalive_ = 0.0;
}

