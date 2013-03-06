/****************************************************************************
 * Fichier: main.cpp
 * Auteur: William Bussiere
 * Date: 2 juin 2011
 * Description: Solution de l'exercice sur l'allocation dynamique 
 *				sur le theme des bonnes pratiques vis-a-vis des pointeurs.
 *				Solution axee sur l'initialisation a la definition.
 ****************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	int* nbTerrains = new int(24);	// Initilisation de la memoire a 
	int* nbCommerces = new int(31);	// la definition du pointeur
	int* nbEspaces = new int(*nbTerrains + *nbCommerces);


	cout << "Nombre d'espaces a vendre : " << *nbEspaces << endl;

	int* nbMaisons = new int(16);
	int* nbParcs = new int(28);		// initialisation de la memoire


	// Aisin on est plus certain losqu'on dereference un pointeur 
	// que celui-ci soit valide
	*nbTerrains = *nbMaisons + *nbParcs;
	cout << "Nombre de terrains a vendre : " << *nbTerrains << endl;
												// oublie de dereferencement


	*nbParcs -= 7;					// oublie de dereferencement
	*nbTerrains = *nbMaisons + *nbParcs;			// Pas besoins d'allouer de la memoire

	cout << "Nombre de terrains a vendre : " << *nbTerrains << " dont " 
		 << *nbMaisons << " mainsons et "	// Trois fois oublie
		 << *nbParcs << " parcs." <<endl;	// de dereferencement


	// Assez certain que ce pointeur soit valide
	*nbEspaces = *nbTerrains + *nbCommerces;
	cout << "Nouveau nombre d'expaces : " << *nbEspaces << endl;;
	cout << endl;

	return 0;
}