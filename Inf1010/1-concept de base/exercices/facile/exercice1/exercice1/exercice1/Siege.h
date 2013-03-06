#ifndef _SIEGE_H_	// Compilation guards
#define _SIEGE_H_

#include <string>
#include <iostream>

using namespace std;

class Siege
{
public:
	Siege();

	Siege(int nbPersonnes, int nbPattes, string nom);

	~Siege();

	int getNbPersonnes() const ;
	int getNbPattes() const ;
	string getNom() const ;

	void setNbPersonnes(int nbPersonnes);
	void setNbPattes(int nbPattes);
	void setNom(string nom);

private:
	int nbPersonnes_;
	int nbPattes_;
	string nomCommun_;
};
#endif