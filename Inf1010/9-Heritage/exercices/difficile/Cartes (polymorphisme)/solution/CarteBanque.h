#ifndef _CARTE_BANQUE_H_
#define _CARTE_BANQUE_H_

#include "CarteCredit.h"

#include <string>
using namespace std;

class CarteBanque : public CarteCredit
{
public :
	CarteBanque(const string &proprietaire, const string &banque, const string &type, const string &interets);
	virtual ~CarteBanque();

	virtual string getFonction();

private :
	string type_;
};

#endif