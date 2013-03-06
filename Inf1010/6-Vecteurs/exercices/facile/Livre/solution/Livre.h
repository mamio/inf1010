#ifndef _LIVRE_H_
#define _LIVRE_H_

#include "Chapitre.h"
#include <vector>

class Livre
{
public:
	Livre(int nbChapitres);
	~Livre();
private:
	vector<Chapitre*> tabChapitres_;
};

#endif