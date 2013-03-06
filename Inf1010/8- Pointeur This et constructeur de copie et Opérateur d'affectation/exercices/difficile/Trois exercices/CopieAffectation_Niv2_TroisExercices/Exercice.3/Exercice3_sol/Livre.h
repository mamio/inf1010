#ifndef _LIVRE_H_
#define _LIVRE_H_

#include "Chapitre.h"
#include <vector>

using namespace std;

class Livre
{
public:
	Livre(int nbChapitres);
	Livre(const Livre& li);
	~Livre();

	Livre& operator = (const Livre& li);

private:
	vector<Chapitre*> tabChapitres_;
};

#endif // _LIVRE_H_
