/****************************************************************************
 * Fichier: main.cpp
 * Auteur: William Bussiere
 * Date: 2 juin 2011
 * Description: Exercice facile d'allocation dynamique 
 *				sur le theme de la magie.
 ****************************************************************************/

#include <iostream>
using namespace std;

class Magie
{
public :
	Magie(int force)
	{
		force_ = force;
		cout << "Construction d'une magie de force " << force_ << endl;
	}

	~Magie()
	{
		cout << "Destruction d'une magie de force " << force_ << endl;
	}

	void lancer()
	{
		cout << "Magie lancee de force : " << force_ << endl;
	}

	int getForce()  
	{ 
		return force_;
	}


	void setForce(int force)
	{
		force_ = force;
	}

private :
	int force_;
};



int main()
{
	Magie* feu = new Magie(18);
	Magie* glace = new Magie(12);
	Magie* foudre = new Magie(*feu);
	cout << endl;


	cout << "La magie feu a une force de : " << feu->getForce() << endl;
	feu->lancer();
	cout << endl;


	int forceGlace = glace->getForce();
	cout << "La magie glace a une force de : " << forceGlace << endl;
	glace->lancer();
	cout << endl;


	cout << "La magie foudre a une force de : " << foudre->getForce() << endl;
	foudre->lancer();
	cout << endl;


	foudre->setForce( foudre->getForce() + 11 );
	foudre->lancer();
	feu->lancer();
	cout << endl;

	delete glace;
	delete feu;
	delete foudre;


	return 0;
}