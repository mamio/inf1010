 /****************************************************************************
 * Fichier: Plante.cpp
 * Auteur: William Bussiere
 * Date: 9 juin 2011
 * Description: Implementation de la classe Plante
 ****************************************************************************/

#include "Plante.h"

Plante::Plante( double hauteurMaxCm )
	: Vegetal( hauteurMaxCm )
{
	cout << "Creation d'une plante" << endl;
}


Plante::~Plante()
{
	cout << "Destruction d'une plante" << endl;
}


void Plante::croitre()
{
	Vegetal::croitre();

	if(!estFleurie_ && rand()%20 == 0)
		estFleurie_ = true;
}


bool Plante::estFleurie() const
{
	return estFleurie_;
}