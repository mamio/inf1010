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
