/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: William Bussiere
 * Date: 26 mai 2011
 * Description: Tests sur le passage de parametres
 ****************************************************************************/

#include "Cible.h"

#include <iostream>
using namespace std;


void tricherParValeur(Cible cible, int x , int y)
{
	cible.setX( x );
	cible.setY( y );
}

void tricherParReference(Cible &cible, int x , int y)
{
	cible.setX( x );
	cible.setY( y );
}

void tricherParReferenceConst(const Cible &cible, int x , int y)
{
//	cible.setX( x );	// On ne peut pas appeler ces methodes
//	cible.setY( y );	// puisqu'elles ne sont pas declarees const
}

void tricherParAdresse(Cible* cible, int x, int y)
{
	cible->setX( x );
	cible->setY( y );
}


int main()
{
	// On cree une cible en argile
	Cible argile;

	cout << "Argile avant le tir" << endl;
	argile.afficher();
	tricherParValeur(argile, 3, 5);
	argile.viser(3, 5);
	cout << endl;

	cout << "Argile apres le tir" << endl;
	argile.afficher();
	cout << endl << endl;




	// Avec le meme constructeur, on cree une cible en carton
	Cible carton(2);

	cout << "Carton avant le tir" << endl;
	carton.afficher();
	tricherParReference(carton, 3, 5);
	carton.viser(3, 5);
	cout << endl;

	cout << "Carton apres le tir" << endl;
	carton.afficher();
	cout << endl << endl;




	// Toujours avec le meme constructeur, on cree une cible en bois
	Cible bois(24, 45);

	cout << "Bois avant le tir" << endl;
	bois.afficher();
	tricherParAdresse(&bois, 3, 5);
	bois.viser(3, 5);
	cout << endl;

	cout << "Bois apres le tir" << endl;
	bois.afficher();
	cout << endl << endl;


	return 0;
}