/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: Inconnu
 * Date: Inconnu
 * Mise a jour : 13 mai 2011
 * Description: Test des differentes horloges
 ****************************************************************************/

#include "Horloge.h"
#include "HorlogeVoyage.h"

#include <iostream>
using namespace std;

int main()
{
	Horloge h(false);
	cout << "Il est " << h.getHeures() << "h" << h.getMin() 
		<< " dans la zone " << h.getZone() << endl;

	Horloge h2(true);
	cout << "Il est " << h2.getHeures() << "h" << h2.getMin() 
		<< " dans la zone " << h2.getZone() << endl;

	HorlogeVoyage h3(false, "Montreal", -5);
	cout << "Il est " << h3.getHeures() << "h" << h3.getMin() 
		<< " dans la zone " << h3.getZone() << endl;

	HorlogeVoyage h4(true, "Vancouver", -8);
	cout << "Il est " << h4.getHeures() << "h" << h4.getMin() 
		<< " dans la zone " << h4.getZone() << endl;

	return 0;
}
