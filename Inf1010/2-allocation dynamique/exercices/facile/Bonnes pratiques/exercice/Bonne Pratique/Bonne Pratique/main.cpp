/****************************************************************************
 * Fichier: main.cpp
 * Auteur: William Bussiere
 * Date: 2 juin 2011
 * Description: Exercice facile d'allocation dynamique 
 *				sur le theme des bonnes pratiques vis-a-vis des pointeurs.
 ****************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	int* nbTerrains;
	int* nbCommerces;
	int* nbEspaces;

	nbTerrains = new int(24);
	nbCommerces = new int(31);

	nbEspaces = new int;
	*nbEspaces = *nbTerrains + *nbCommerces;
	cout << "Nombre d'espaces a vendre : " << *nbEspaces << endl;
	delete nbEspaces;
	nbEspaces = 0;

	int* nbMaisons = new int(16);
	int* nbParcs = new int(28);
	nbTerrains = new int(*nbMaisons + *nbParcs);
	cout << "Nombre de terrains a vendre : " << *nbTerrains << endl;

	*nbParcs -= 7;
	nbTerrains = new int(*nbMaisons + *nbParcs);
	cout << "Nombre de terrains a vendre : " << *nbTerrains << " dont " 
		 << *nbMaisons << " mainsons et " 
		 << *nbParcs << " parcs." <<endl;

	nbEspaces = new int;
	*nbEspaces = (*nbTerrains + *nbCommerces);
	cout << "Nouveau nombre d'expaces : " << *nbEspaces << endl;;
	cout << endl;

	system("pause");
	return 0;

}