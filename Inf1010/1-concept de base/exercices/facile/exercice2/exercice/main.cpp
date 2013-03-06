/****************************************************************************
 * Fichier: main.cpp
 * Auteur: William Bussiere
 * Date: 6 juin 2011
 * Description: Test de l'implementation de la classe Tableau
 ****************************************************************************/

#include "Tableau.h"

#include <iostream>
using namespace std;

int main()
{
	Tableau tableau;

	// Avant modification
	cout << "Contenu du tableau (0):" << endl;
	cout << tableau.getCaracteres() << endl;
	cout << "Salete : " << tableau.getSalete() << endl;
	cout << endl;



	// Premiere ecriture et effacage
	tableau.ajouterCaracteres("Kickin’ in the front seat\n");
	tableau.ajouterCaracteres("Sittin’ in the back seat\n");
	
	cout << "Contenu du tableau (1):" << endl;
	cout << tableau.getCaracteres() << endl;

	tableau.effacer();
	tableau.estSale() ?  cout << "Est sale" : cout << "Est propre";
	cout << endl << endl << endl;



	// Deuxieme ecriture plus effacage
	tableau.ajouterCaracteres("Gotta make my mind up\n");
	tableau.ajouterCaracteres("Which seat can I take?!??\n");

	cout << "Contenu du tableau (2):" << endl;
	cout << tableau.getCaracteres() << endl;

	tableau.effacer();
	if( tableau.estSale() )
		tableau.laver();
	cout << endl;

	return 0;
}