#ifndef _CARTE_ETUDIANTE_H_
#define _CARTE_ETUDIANTE_H_

#include "Carte.h"

#include <string>
using namespace std;

class CarteEtudiante : public Carte
{
public :
	CarteEtudiante(const string &proprietaire, const string &matricule);
	virtual ~CarteEtudiante();

	virtual string getProprietaire();

private :
	string matricule_;
};

#endif