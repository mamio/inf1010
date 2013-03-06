#ifndef _CHAPITRE_H_
#define _CHAPITRE_H_

#include <string>
using namespace std;

class Chapitre
{
public:

	Chapitre(string nom="VIDE", int nbPages=0);

private:
	string nom_;
	int nbPages_;
};

#endif