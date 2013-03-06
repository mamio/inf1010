/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: William Bussiere
 * Date: 16 mai 2011
 * Description: Fonction principale
 ****************************************************************************/

#include "Point.h"
#include "Cercle.h"

#include <iostream>
using namespace std;


int main()
{

	cout << "Construction de points simples :" << endl;
	Point  pointDefaut;							// Constructeur par defaut
	Point* pointDynamiqueDefaut = new Point();	// Constructeur par defaut
	Point  pointParametres(2,5);				// Constructuer par parametres
	cout << endl;


	cout << "Construction de 5 points dans un tableau : " << endl;
	Point tableauPoints[5]; // Peut seulement etre fait avec le constructeur par defaut
	cout << endl;


	cout << "Construction de cercles simples : " << endl;
	Cercle  cercleDefaut;						 // Constructeur par defaut
	Cercle* cercleDynamiqueDefaut = new Cercle(); // Constructeur par defaut
	cout << endl;


	cout << "Construction de 3 cercles dans un tableau : " << endl;
	Cercle tableau[3]; // Peut seulement etre fait avec le constructeur par defaut
	cout << endl;


	return 0;
}
