/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: Martin Bisson
 * Date: 3 sept 2009
 * Mise a jour : 11 mai 2011
 * Description: Programme principale
 ****************************************************************************/

#include "Point.h"
#include "Cercle1.h"
#include "Cercle2.h"
#include "Cercle3.h"

#include <iostream>
using namespace std;


int main()
{
	// Toutes des compositions!!

    // Cet exemple illustre une classe de Cercle qui n'utilise pas la classe Point.
    cout << "Test de la classe Cercle1" << endl << endl;
    Cercle1 c1;
    Cercle1 c2( 1.0 , 2.0 , 3.0 );
    cout << endl << endl << endl;


    // Cet exemple illustre une classe de Cercle utilise la classe Point.
    cout << "Test de la classe Cercle2" << endl << endl;
    Cercle2 c3;
    Cercle2 c4( 4.0 , 5.0 , 6.0 );
    cout << endl << endl << endl;


    // Cet exemple illustre une classe de Cercle utilise la classe Point,
    // mais de manière dynamique.
    cout << "Test de la classe Cercle3" << endl << endl;
    Cercle3 c5;
    Cercle3 c6( 7.0 , 8.0 , 9.0 );
    cout << endl << endl << endl;

    // Remarquez que ces classes ont toutes une interface ( méthodes publiques )
    // identique, mais possèdent toutes une implémentation ( attributs privés )
    // différentes!!!

    return 0;
}
