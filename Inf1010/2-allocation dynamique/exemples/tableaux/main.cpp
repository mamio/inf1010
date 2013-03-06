/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: William Bussiere
 * Date: 18 mai 2011
 * Description: Manipulations de pointeurs sur des tableaux
 ****************************************************************************/

#include <iostream>
using namespace std;


int main()
{
	// Un simple pointeur sur un double
	double prixBallon = 15.25;
	double *prix = 0;			// Si on n'initilise pas notre pointeur
								// vaut meiux le mettre a zero

	prix = new double(99.99);
	cout << "Prix du nean : " << *prix << endl;	// Operateur de dereferencement

	if(prix != 0)
		delete prix;			// On libere la memoire alouee plus tot

	prix = &prixBallon;
	cout << "Prix du ballon : " << prixBallon << endl;;
	cout << "Encore le prix du ballon : " << *prix << endl;
	cout << endl;


	// Des tableaux

	int casiers[5] = {2,4,0,5,8};

	cout << "Le casier 4 contient " << *(casiers + 3) << " lettres." << endl;

	int *tiroires = new int[4];
	tiroires[0] = 2;
	tiroires[1] = 34;
	tiroires[2] = 8;
	tiroires[3] = 5;

	cout << "Le premier tiroire contient " << tiroires[0] << " crayons et" << endl;
	cout << "le deuxieme en contient " << *(tiroires+1) << "." << endl;

	delete [] tiroires;

	return 0;
}