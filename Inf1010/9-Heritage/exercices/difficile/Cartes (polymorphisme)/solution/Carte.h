#ifndef _CARTE_H_
#define _CARTE_H_

#include <string>
using namespace std;

class Carte
{
public :
	Carte(const string &fonction, const string &proprietaire);

	virtual ~Carte();
	virtual string getFonction();
	virtual string getProprietaire();	

private :
	string fonction_;
	string proprietaire_;
};

#endif