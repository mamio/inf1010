#include "Livre.h"

Livre::Livre(int nbChapitres)
{
	Chapitre *nouveau;
	for(int i=0; i<nbChapitres; i++)
	{
		nouveau=new Chapitre;
		tabChapitres_.push_back(nouveau);
	}
}

Livre::~Livre()
{
	//Doit libérer la mémoire utilisée par les chapitres
	//avant la destruction du vecteur
	for (int i=0;i<tabChapitres_.size();i++)
	{
		delete tabChapitres_[i];
	}
}