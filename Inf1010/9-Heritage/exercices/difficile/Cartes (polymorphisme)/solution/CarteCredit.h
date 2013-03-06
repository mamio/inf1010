#ifndef _CARTE_CREDIT_H_
#define _CARTE_CREDIT_H_

#include "Carte.h"

#include <string>
using namespace std;

class CarteCredit : public Carte
{
public :
	CarteCredit(const string &proprietaire, const string &entreprise, const string &interets);
	virtual ~CarteCredit();

	virtual string getFonction();

protected :
	string getEntreprise();
	string getInterets();

private :
	string entreprise_;
	string interets_;
};

#endif