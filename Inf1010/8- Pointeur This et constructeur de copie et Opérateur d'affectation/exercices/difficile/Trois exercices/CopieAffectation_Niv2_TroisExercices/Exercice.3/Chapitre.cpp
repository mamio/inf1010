#include "Chapitre.h"
#include <iostream>

using namespace std;

Chapitre::Chapitre(string nom, int nbPages)
: nom_(nom), nbPages_(nbPages)
{
	cout << "Chapitre::Chapitre(...)" << endl;
}


Chapitre::~Chapitre()
{
	cout << "Chapitre::~Chapitre()" << endl;
}

string Chapitre::getNom() const
{
	return nom_;
}

int Chapitre::getNbPages() const
{
	return nbPages_;
}
