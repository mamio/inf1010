#include "Adresse.h"
#include <iostream>
using namespace std;

Adresse::Adresse(string rue)
{
	rue_=rue;
	cout << "Constr: Adresse" << endl;
}

string Adresse::getRue() const
{
	return rue_;
}

void Adresse::setRue(string rue)
{
	rue_=rue;
}