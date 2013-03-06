/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: William Bussiere
 * Date: 18 mai 2011
 * Description: Manipulations de la classe Poire
 ****************************************************************************/

#include "Poire.h"

#include <iostream>
using namespace std;



int main()
{
	// 5 Poires creees par defaut

	Poire *grappe = new Poire[5];
	cout << endl;

	// On fait murir les poires par differentes techniques de la region
	grappe->murir();
	(grappe + 1)->murir();
	grappe[2].murir();
	( *(grappe + 3) ).murir();
	( &grappe[4] )->murir();

	cout << endl;

	// On s'assure que la poire no 3 est bien mure
	grappe[2].murir();
	cout << "C'est pas grave" << endl;
	cout << endl;

	delete [] grappe; // On doit toujours penser a desallouer la memoire
	cout << endl;


	// Deux dernieres poires pour la route
	Poire *snack = new Poire(ETAT_MURE), *reSnack = new Poire(ETAT_PAS_MURE);

	delete snack;
	delete reSnack;
	
	return 0;
}