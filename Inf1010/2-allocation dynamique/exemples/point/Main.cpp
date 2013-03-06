/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: William Bussiere
 * Date: 16 mai 2011
 * Description: Fonction principale
 ****************************************************************************/

#include "Point.h"
#include "PointDynamique.h"

#include <iostream>
using namespace std;

int main()
{
	// Manipulation d'objets Point

	Point pointStatiqueDefaut;
	cout << "Position du point : " 
		<< pointStatiqueDefaut.getX() << ", " << pointStatiqueDefaut.getY() << endl;

	pointStatiqueDefaut.setX(2);
	pointStatiqueDefaut.setY(3);
	cout << "Position du point apres deplacement: " 
		 << pointStatiqueDefaut.getX() << ", " << pointStatiqueDefaut.getY() << endl;
	cout << endl; 


	Point pointStatiqueParametres(4,1);
	cout << "Position du point : " 
		 << pointStatiqueParametres.getX() << ", " << pointStatiqueParametres.getY() << endl;

	pointStatiqueParametres.setX(5);
	pointStatiqueParametres.setY(2);
	cout << "Position du point apres deplacement: " 
		 << pointStatiqueParametres.getX() << ", " << pointStatiqueParametres.getY() << endl;
	cout << endl;


	// Manipulations d'objets PointDynamique

	PointDynamique pointDynamiqueDefaut;
	PointDynamique pointDynamiqueParametre(23,4);

	pointDynamiqueDefaut.setX(3);

	cout << "Somme des composantes des points dynamiques : " 
		 << pointDynamiqueDefaut.getX() + pointDynamiqueParametre.getX() << ", "
		 << pointDynamiqueDefaut.getY() + pointDynamiqueParametre.getY() << endl;
	cout << endl;


	// Tableau de points

	cout << "Tableau de 5 points statiques" << endl;
	Point tableauPoints[5]; // Construction de 5 point par le constructeur par defaut
	cout << endl;

	cout << "Tableau de 5 points dynamiques" << endl;
	PointDynamique tableauPointDynamiques[5]; // Construction de 5 point par le constructeur par defaut
	cout << endl;

	cout << "Position du 3eme PointDynamique dans le tableau : " 
		 << tableauPointDynamiques[2].getX() << ", " << tableauPointDynamiques[2].getY() << endl;
	cout << endl;


    return 0;
}
