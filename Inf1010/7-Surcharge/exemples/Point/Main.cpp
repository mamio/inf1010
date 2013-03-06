/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: Martin Bisson
 * Date: 3 sept 2009
 * Mise a jour : 12 mai 2011
 * Description: Fonction principale
 ****************************************************************************/

#include "Point.h"


#include <iostream>
using namespace std;

/****************************************************************************
 * Fonction:	operator-
 * Description: permet la soustraction des composantes de deux points
 * Paramètres:	- (Point) point : le point a soustraire (IN)
 * Retour:		- (Point) un point contenant la soustraction des composantes 
					du point passe en parametre a celui appelant la fonction 
 ****************************************************************************/
Point operator- ( const Point& p1 , const Point& p2 )
{
   
    return Point( p1.getX() - p2.getX() , p1.getY() - p2.getY() );
}

/****************************************************************************
 * Fonction:	operator*
 * Description: permet la multiplication des composantes de deux points
 * Paramètres:	- (Point) point : le point a multiplier (IN)
 * Retour:		- (Point) un point contenant la multiplication des composantes 
					du point passe en parametre et celui appelant la fonction 
 ****************************************************************************/
Point operator* ( const Point& p1 , const Point& p2 )
{
    // Déclaré en dehors de la classe, on doit utiliser l'interface publique.
    return Point( p1.getX() * p2.getX() , p1.getY() * p2.getY() );
}


/****************************************************************************
 * Fonction:	operator<<
 * Description: permet l'affichage des compodantes d'un point
 * Paramètres:	- (Point) point : le point a afficher (IN)
 * Retour:		- (ostream) pour permettre l'affichage en cascade 
 ****************************************************************************/
ostream& operator<< ( ostream& out , const Point& point )
{
    out << "( " << point.getX() << " , " << point.getY() << " )";
    return out;
}




int main()
{
	// On cree deux points avec le constructeur par parametres
    Point p1( 1.7 , 2.3 );
    Point p2( 3.1 , 4.5 );

	// On teste les operateurs surcharges
    Point p3 = p1 + p2;
    Point p4 = p1 - p2;
    Point p5 = p1 * p2;

	// On affiche tout les points en utilisant l'operateur<< surcharge
    cout << "p1 : " << p1 << endl;
    cout << "p2 : " << p2 << endl;
    cout << "p3 : " << p3 << endl;
    cout << "p4 : " << p4 << endl;
    cout << "p5 : " << p5 << endl;

    return 0;
}
