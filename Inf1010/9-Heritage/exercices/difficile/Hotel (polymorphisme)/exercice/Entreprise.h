#ifndef _ENTREPRISE_H_
#define _ENTREPRISE_H_

#include <string>
#include <iostream>
#include "Adresse.h"

using namespace std;

class Entreprise
{
public:
	Entreprise(const string &nom="Sans nom", int nombreEmployes=0, double chiffreAffaire=0);
private:
	string nom_;
	int nombreEmployes_;
	double chiffreAffaire_;
};


#endif