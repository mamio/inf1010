/****************************************************************************
 * Fichier: main.cpp
 * Auteur: Inconnu
 * Date: 
 * Mise a jour : 6 juin 2011
 * Description: Implementation de la classe NombreComplexe
 ****************************************************************************/

#include "NombreComplexe.h"

NombreComplexe::NombreComplexe(int reel, int imaginaire) 
{
	reel_ = reel;
	imaginaire_ = imaginaire;
	bidon_ = new int(reel+imaginaire); //Vraiment bidon...
}

//Question A)
NombreComplexe::NombreComplexe(const NombreComplexe& nbcomp)
{
	reel_ = nbcomp.reel_; // ou avec des fonctions obtenir/get
	imaginaire_ = nbcomp.imaginaire_;
	bidon_ = new int(*(nbcomp.bidon_)); 
}

//Question B)
NombreComplexe& NombreComplexe::operator = (const NombreComplexe& nbcomp)
{
	if(this!=&nbcomp)
	{
		if(bidon_!=0)
			delete bidon_;
		reel_ = nbcomp.reel_; // ou avec des fonctions obtenir/get
		imaginaire_ = nbcomp.imaginaire_;
		bidon_ = new int(*(nbcomp.bidon_));
	}
	return *this;
}