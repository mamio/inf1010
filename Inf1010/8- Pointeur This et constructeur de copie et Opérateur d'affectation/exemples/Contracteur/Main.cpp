/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: William Bussiere
 * Date: 19 mai 2011
 * Description: Experimentations avec des contracteurs d'immeubles
 ****************************************************************************/

#include "Contracteur.h"
#include "Immeuble.h"

#include <iostream>
using namespace std;

int main()
{
	// On cree deux contracteurs rivaux
	Contracteur roch;
	Contracteur pierre;
	cout << endl;


	// Quelques constructions par-ci par-la
	cout << "Construction d'immeubles par Roch : " << endl;
	roch.constuireImmeuble( new Immeuble("1815 de Ladurentais") );
	roch.constuireImmeuble( new Immeuble("21 Blue Mount South", 505000.00) );
	roch.constuireImmeuble( new Immeuble("196 Mille Feuilles", 734000.00) );
	cout << endl;

	cout << "Construction d'immeubles par Pierre : " << endl;
	pierre.constuireImmeuble( new Immeuble("1225 Sabrevois") );
	pierre.constuireImmeuble( new Immeuble("2 des Merles", 125000.00) );
	pierre.constuireImmeuble( new Immeuble("13 Mauve", 88000.00) );
	cout << endl;

	
	// Un noueau contracteur rentre sur le marche et decide tout de suite de copier pierre
	cout << "Jade commence tout de suite en copiant Pierre : " << endl;
	Contracteur jade(pierre);
	cout << endl;

	
	// Pierre, apres avoir vu l'effondrement de sa compagnie, croit qu'il 
	// serait bien d'imiter son rival.
	cout << "Pierre copie Roch : " << endl;
	pierre = roch;
	cout << endl;

	return 0;
}