#include "CarteCredit.h"

CarteCredit::CarteCredit(const string &proprietaire, const string &entreprise, const string &interets)
	: Carte("Carte de credit", proprietaire), entreprise_(entreprise), interets_(interets)
{
}

CarteCredit::~CarteCredit()
{
}

string CarteCredit::getFonction()
{
	return Carte::getFonction() + " de " + entreprise_ + " a " + interets_ + "%";
}

string CarteCredit::getEntreprise()
{
	return entreprise_;
}

string CarteCredit::getInterets()
{
	return interets_;
}