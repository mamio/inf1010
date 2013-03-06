/****************************************************************************
 * Fichier: main.cpp
 * Auteur: William Bussiere
 * Date: 13 juin 2011
 * Description: Tests des classes TourneDisque et Disque
 ****************************************************************************/

#include "Disque.h"
#include "TourneDisque.h"

#include <iostream>
using namespace std;

int main()
{
	// Creation du tourne disque
	TourneDisque electrophone;

	// Creation de deux disque
	Disque giantSteps("John Coltrane - Giant Steps");
	Disque timeOut("Dave Brubeck - Time Out");

	// On met un disque dans le tourne-disque
	electrophone.insererDisque(giantSteps);
	cout << "Disque courant : " << electrophone.getTitreDisqueCourant() << endl;
	cout << endl;

	Disque retire = electrophone.echangerDisque(timeOut);
	cout << "On echange les disques" << endl;
	cout << "Disque courant : " << electrophone.getTitreDisqueCourant() << endl;
	cout << "Ancien disque : " << retire.getTitre() << endl;
	cout << endl;

	return 0;
}