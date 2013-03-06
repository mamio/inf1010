#include "Compteur.h"
#include <iostream>

using namespace std;

int main()
{
	Compteur test;
	test.inc().dec().inc();
	cout << test.getNb() << endl;
}
