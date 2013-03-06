#include "CarteBanque.h"

CarteBanque::CarteBanque(const string &proprietaire, const string &banque, const string &type, const string &interets)
	: CarteCredit(proprietaire, banque, interets)
{
}

CarteBanque::~CarteBanque()
{
}

string CarteBanque::getFonction()
{
	return Carte::getFonction() + " " + type_ + " " + getEntreprise() + " a " + getInterets() + "%";
}