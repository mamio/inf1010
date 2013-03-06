/****************************************************************************
 * Fichier: main.cpp
 * Auteur: William Bussiere
 * Date: 2 juin 2011
 * Description: Exercice intermediaire d'allocation dynamique 
 *				sur le theme du tennis.
 ****************************************************************************/

#include "Balle.h"

#include <string>
#include <iostream>


using namespace std;


int main()
{
	// A) Construisez 3 balles.
	// Deux de facon dynamimque (constructeur pa parametre(s))
	Balle* babolar	= new Balle("Babolar", 6.67);
	Balle* wilson	= new Balle("Wilson", 6.42);

	// et une de facon automatique (constructeur pa parametre(s))
	Balle  penn("Penn", 6.56);
	cout << endl;

	// B) Construisez 3 balles par defaut en le moins d'instruction(s) possible(s)
	Balle balle1;
	Balle balle2;
	Balle balle3;

	cout << endl;

	// C) Mettez les 6 balles construites dans un tableau dynamique de grandeur 6

	Balle* tableau = new Balle[6];
	tableau[0] = *babolar;
	tableau[1] = *wilson;
	tableau[2] = penn;
	tableau[3] = balle1;
	tableau[4] = balle2;
	tableau[5] = balle3;
	cout << endl;

	// D) Afficher toutes les balles du tableau d'au moins 4 facons differentes
	// Par facons differentes, on parle de l'acces a la methode Balle::afficher()

	tableau->afficher();
	(tableau + 1)->afficher();
	(&tableau[1] + 2)->afficher();
	(&tableau[0] + 1)[2].afficher();
	tableau[4].afficher();
	(&tableau[5])->afficher();


	// E) Avec une boucle, augmentez le diametre des balles Spalding de 1cm

	for (int i = 0; i < 6; i++)
	{
		int grosseur = tableau[i].getDiametre();
		if ( tableau[i].getMarque() == "Spalding")
			tableau[i].setDiametre(grosseur += 1);
	}
	cout << endl;
	// F) Reaffichez les attributs des balles a travers une boucle (afficher())

	for (int i = 0; i < 6 ; i++)
		tableau[i].afficher();
	cout << endl;
	// G) Detruisez convenablement la memoire pour eviter les fuites
	delete []tableau;
	tableau = 0;
	cout << endl;
	delete babolar;
	delete wilson;
	cout << endl;

	system ("pause");
	return 0;
}
