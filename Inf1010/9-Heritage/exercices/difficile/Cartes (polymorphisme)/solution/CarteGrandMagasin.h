#ifndef _CARTE_GRAND_MAGASIN_H_
#define _CARTE_GRAND_MAGASIN_H_

#include "CarteCredit.h"

#include <string>
using namespace std;

class CarteGrandMagasin : public CarteCredit
{
public :
	CarteGrandMagasin(const string &proprietaire, const string &magasin, const string &interets);
	virtual ~CarteGrandMagasin();
};

#endif