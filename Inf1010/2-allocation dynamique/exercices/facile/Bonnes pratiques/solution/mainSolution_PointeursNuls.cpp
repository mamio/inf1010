/****************************************************************************
 * Fichier: main.cpp
 * Auteur: William Bussiere
 * Date: 2 juin 2011
 * Description: Solution de l'exercice sur l'allocation dynamique 
 *				sur le theme des bonnes pratiques vis-a-vis des pointeurs.
 *				Solution axee sur l'utilisation des pointeurs nuls.
 ****************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	int* nbTerrains		= 0;		// nuls pour pouvoir les
	int* nbCommerces	= 0;		// tester avant de les utiliser
	int* nbEspaces		= 0;		// Pointeurs initialises

	nbTerrains = new int(24);		// Allocation dynamique de memoire
	nbCommerces = new int(31);


	// Tests sur les pointeurs avant de les dereferences
	if(nbEspaces == 0 && nbTerrains != 0 && nbCommerces !=0)
		nbEspaces = new int(*nbTerrains + *nbCommerces);
	else
		if(nbEspaces != 0 && nbTerrains != 0 && nbCommerces !=0)
			*nbEspaces = *nbTerrains + *nbCommerces;

	if(nbEspaces != 0)
	{
		cout << "Nombre d'espaces a vendre : " << *nbEspaces << endl;
		delete nbEspaces;
		nbEspaces  = 0;				// Nul apres desallocation
	}


	int* nbMaisons = new int(16);
	int* nbParcs = 0;				// Initialise comme pointeur nul

	nbParcs = new int(28);

	// Pour eviter la fuite de memoire
	if( nbTerrains != 0 )
	{
		delete nbTerrains;
		nbTerrains = 0;				// Nul apres desallocation
	}
	nbTerrains = new int(*nbMaisons + *nbParcs);
	cout << "Nombre de terrains a vendre : " << *nbTerrains << endl; 
									// Oublie de dereferencer


	*nbParcs -= 7;					// Oublie de dereferencer

	// Pour eviter la fuite de memoire
	if( nbTerrains != 0 )
	{
		delete nbTerrains;
		nbTerrains = 0;				// Nul apres desallocation
	}
	nbTerrains = new int(*nbMaisons + *nbParcs);
	cout << "Nombre de terrains a vendre : " << *nbTerrains << " dont " 
		 << *nbMaisons << " mainsons et "	// Trois fois oublie
		 << *nbParcs << " parcs." <<endl;	// de dereferencement


	// Tests sur les pointeurs avant de les dereferences
	if(nbEspaces == 0 && nbTerrains != 0 && nbCommerces !=0)
		nbEspaces = new int(*nbTerrains + *nbCommerces);
	else
		if(nbEspaces != 0 && nbTerrains != 0 && nbCommerces !=0)
			*nbEspaces = *nbTerrains + *nbCommerces;
	
	if(nbEspaces != 0)
	{
		cout << "Nouveau nombre d'espaces : " << *nbEspaces << endl;;
		cout << endl;
	}

	return 0;
}