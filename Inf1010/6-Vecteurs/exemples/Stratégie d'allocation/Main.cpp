/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: William Bussiere
 * Date: 1 juin 2011
 * Description: Illustration de la strategie d'allocation dynamique 
 *				de memoire des vecteurs.
 ****************************************************************************/

#include <vector>
#include <iostream>
using namespace std;

int main(void)
{
	vector<int> valeurs;
	cout << " Size / Capacite : " 
		<< valeurs.size() << " / " << valeurs.capacity() << endl;

	for(unsigned int i=0; i < 100; i++)
	{
		valeurs.push_back( 0 );

		cout << " Size / Capacite : " 
			<< valeurs.size() << " / " << valeurs.capacity() << endl;
	}

	return 0;
}