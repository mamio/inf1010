#include "Compteur.h"
#include <iostream>

using namespace std;

int main()
{
	Compteur c;
	cout << "c: " << c.getNb() << endl;

	c.inc().inc().dec().inc();
	cout << "c: " << c.getNb() << endl;

	Compteur c2(c);
	cout << "c2: " << c2.getNb() << endl;

	c.inc();
	cout << "c: " << c.getNb() << endl;
	cout << "c2: " << c2.getNb() << endl;

	c2 = c;
	cout << "c2: " << c2.getNb() << endl;
}
