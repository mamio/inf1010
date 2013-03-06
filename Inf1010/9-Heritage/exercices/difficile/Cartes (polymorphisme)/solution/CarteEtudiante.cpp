#include "CarteEtudiante.h"

CarteEtudiante::CarteEtudiante(const string &proprietaire, const string &matricule)
	: Carte("Carte Etudiante", proprietaire), matricule_(matricule)
{
}

CarteEtudiante::~CarteEtudiante()
{
}

string CarteEtudiante::getProprietaire()
{
	return Carte::getProprietaire() + " " + matricule_;
}