/****************************************************************************
 * Fichier: Main.cpp
 * Auteurs: - Georges Abou-Khalil
 * Date: 16 sept 2008
 * Description: Implémentation de la fonction principale
 ****************************************************************************/

#include "Vecteur.h"
#include <iostream>

using namespace std;

int main()
{
	Vecteur vec1(4);
	for (unsigned int i = 0; i < vec1.getTaille(); i++) {
		vec1[i] = 1;
	}
	cout << "vec1: ";
	vec1.afficher();

	Vecteur vec2(5);
	for (unsigned int i = 0; i < vec2.getTaille(); i++) {
		vec2[i] = 1;
	}
	cout << "vec2: ";
	vec2.afficher();

	vec1 = vec2;

	cout << "vec1: ";
	vec1.afficher();
	cout << "vec2: ";
	vec2.afficher();

	vec1[0] = 4;

	cout << "vec1: ";
	vec1.afficher();
	cout << "vec2: ";
	vec2.afficher();
}
