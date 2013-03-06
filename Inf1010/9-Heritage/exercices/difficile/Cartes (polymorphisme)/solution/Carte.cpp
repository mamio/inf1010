#include "Carte.h"

Carte::Carte(const string &fonction, const string &proprietaire)
	: fonction_(fonction), proprietaire_(proprietaire)
{
}

Carte::~Carte()
{
}

string Carte::getFonction()
{
	return fonction_;
}


string Carte::getProprietaire()
{
	return proprietaire_;
}