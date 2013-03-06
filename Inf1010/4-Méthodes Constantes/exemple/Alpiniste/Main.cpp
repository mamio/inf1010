/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: William Bussiere
 * Date: 25 mai 2011
 * Description: Exemple d'utilisation de methodes constantes
 ****************************************************************************/

#include "Alpiniste.h"

#include <iostream>
using namespace std;


void afficherInfos(const Alpiniste &alpiniste)
{
	cout << "Nom : " << alpiniste.getNom() << endl;
	cout << "Altitude : " << alpiniste.getAltitude() << endl;
	
//	alpiniste.manger();	
	// Impossible puisque cette methode n'est pas declaree const
	// malgre que cette fonction ne modifie pas les attributs de la classe
}

int main()
{
	// Construction d'un alpiniste

	Alpiniste edmundHillary("Edmund Hillary");
	cout << endl;


	// Ascension de l'alpiniste

	cout << "Au debut de l'ascension : " << edmundHillary.getAltitude() 
		<< "m d'altitude" << endl;
	edmundHillary.gravir( 134.78f );
	edmundHillary.gravir( 523.45f );
	edmundHillary.gravir( 421.95f );
	edmundHillary.gravir( 728.60f );
	cout << "Apres son ascension " << edmundHillary.getAltitude() 
		<< "m d'altitude" << endl;
	edmundHillary.manger();
	cout << endl;


	afficherInfos(edmundHillary);
	cout << endl;


	// Descente

	edmundHillary.descendre( 1024.04f );
	edmundHillary.descendre( 256.10f );
	edmundHillary.descendre( 512.11f );
	edmundHillary.descendre( 512.02f );
	cout << endl;

	return 0;
}