#include "Livre.h"

Livre::Livre(int nbChapitres)
{
	for (int i = 0; i < nbChapitres; i++) {
		tabChapitres_.push_back(new Chapitre());
	}
}

Livre::~Livre()
{
	for (int i = 0; i < tabChapitres_.size(); i++) {
		delete tabChapitres_[i];
	}
}

// Réponses
Livre::Livre(const Livre& li)
{
	for(int i=0;i<li.tabChapitres_.size();i++)
	{
		Chapitre *chap=new Chapitre(li.tabChapitres_[i]->getNom(),li.tabChapitres_[i]->getNbPages());
		tabChapitres_.push_back(chap);
	}
}

Livre& Livre::operator = (const Livre& li) 
{
	if(this!=&li)
	{
		for (int i = 0; i < tabChapitres_.size(); i++) {
			delete tabChapitres_[i];
			tabChapitres_.clear(); // Doit vider le vecteur... sinon problème pour destructeur.
		}
		for(int i=0;i<li.tabChapitres_.size();i++)
		{
			Chapitre *chap=new Chapitre(li.tabChapitres_[i]->getNom(),li.tabChapitres_[i]->getNbPages());
			tabChapitres_.push_back(chap);
		}
	}
	return *this;
}