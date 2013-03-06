#include "Tableau.h"
#include <iostream>
#include <string>

using namespace std;

Tableau::Tableau()
{
	caracteres_ = "";
	salete_ = 0;
	saleteSeuil_ = 30;
}

Tableau::~Tableau()
{

}

string Tableau::getCaracteres() const
{
	return caracteres_;
}

int Tableau::getSalete() const
{
	return salete_;
}

int Tableau::getSaleteSeuil() const
{
	return saleteSeuil_;
}

void Tableau::ajouterCaracteres(string caracteres)
{
	caracteres_ += caracteres;
}

void Tableau::setSaleteSeuil(int seuil)
{
	saleteSeuil_ = seuil;
}

bool Tableau::estSale()
{
	if (caracteres_.size() > 0)
		return true;
	else
		return false;
}

void Tableau::effacer()
{
	if (caracteres_.size() > 0)
		salir(caracteres_.size());
		caracteres_ = "";
}

void Tableau::laver()
{
	salete_ = 0;
	caracteres_ = "";
}

void Tableau::salir(unsigned int nbCaracteres)
{
	salete_ = (nbCaracteres / 2) + 1;
}