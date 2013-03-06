#ifndef _ADRESSE_H_
#define _ADRESSE_H_

#include <string>
using namespace std;

class Adresse
{
public:
	Adresse(const string &rue="Sans nom");
	string getRue() const;
	void setRue(const string &rue);
private:
	string rue_;
};

#endif