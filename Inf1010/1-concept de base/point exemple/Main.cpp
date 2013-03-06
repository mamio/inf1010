/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: Georges Abou-Khalil
 * Date: 2 sept 2008
 * Mise a jour : 11 mai 2011
 * Description: Fonction principale
 ****************************************************************************/

#include "Point.h"
#include <iostream>

using namespace std;

int main()
{
	Point point1;								// Constructeur par defaut
    Point point2(5.0, 4.0);						// Constructeur par parametres

//	cout << "x: " << point1.x_ << endl;			// Impossible vu que l'attribut est prive
	cout << "x: " << point1.getX() << endl;		// Le seul moyen d'y acceder publiquement

//	point1.x_ = 10.0;							// Impossible vu que l'attribut est prive
	point1.setX(10.0);							// Le seul moyen de le modifier publiquement
	cout << "x: " << point1.getX() << endl;

	return 0;
}
