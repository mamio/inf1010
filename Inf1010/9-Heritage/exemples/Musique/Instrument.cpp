/****************************************************************************
 * Fichier: Instrument.cpp
 * Auteur: William Bussiere
 * Date: 24 mai 2011
 * Description: Implementation de la classe Instrument
 ****************************************************************************/

#include "Instrument.h"


/****************************************************************************
 * Fonction:	Instrument::Instrument
 * Description: Constructeur par defaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Instrument::Instrument()
{
	cout << "Construction d'un instrument : ";
	decalage_ = 0.0;
}


/****************************************************************************
 * Fonction:	Instrument::~Instrument
 * Description: Destructeur
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Instrument::~Instrument()
{
	cout << "Destruction de l'instrument" << endl;
}


/****************************************************************************
 * Fonction:	Instrument::estTresDesaccorde
 * Description: Indique si l'instrument a besoins d'etre accorde
 * Paramètres:	aucun
 * Retour:		(bool) si l'instrument doit etre reaccorde
 ****************************************************************************/
bool Instrument::estTresDesaccorde() const
{
	if( decalage_ > 15 || decalage_ < -15 )
		return true;
	//Sinon
	return false;
}


/****************************************************************************
 * Fonction:	Instrument::accorder
 * Description: Accorde consretement l'instrument de musique
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Instrument::accorder()
{
	decalage_ = 0;
}


/****************************************************************************
 * Fonction:	Instrument::accorder
 * Description: Desaccorde l'instrument
 * Paramètres:	- (float) deltaCents : decaler la tonalite de l'instrument
 * Retour:		aucun
 ****************************************************************************/
void Instrument::desaccorder(float deltaCents)
{
	decalage_ += deltaCents;
}

