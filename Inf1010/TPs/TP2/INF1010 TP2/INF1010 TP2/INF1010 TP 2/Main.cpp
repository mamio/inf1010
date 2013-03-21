/**********************************************************************
/* Fichier: Main.cpp
/* Date: 03/02/2013
/* Auteur: Marie-France et Odric
/* Description: Fichier principal du TP2
************************************************************************/
#include <vector>
#include <iostream>
using namespace std;
#include "Triangle.h"


int main()
{
    /*************************************************************************
    *  Tester les opérateurs << et >> et constructeurs
    *************************************************************************/
    // 1 - Créer un triangle t = [1 ; -5 3 ; 2 -6 5]
    // Création par constructeur par paramètres
    int donnees[6];

    donnees[0] = 1;
    donnees[1] = -5;
    donnees[2] = 3;
    donnees[3] = 2;
    donnees[4] = -6;
    donnees[5] = 5;

    Triangle t(3, donnees);

    // 2 - Afficher le triangle t et modifier un élément
    cout << t << endl;
    t[1][1] = 9;
    // 3 - Afficher le poids du triangle t
    cout << t.poids() << endl;
    /*************************************************************************
    *  Tester les différents opérateurs
    *************************************************************************/
    // 4 - Créer le triangle identité I = [ 1 ; 0 1 ; 0 0 1 ]
    // Création par >> : Créer un triangle de taille 3 et utiliser l'opérateur >> pour y insérer les valeurs

    Triangle I(3);

	cin >> I[0][0];
	cin >> I[1][0];
	cin >> I[1][1];
	cin >> I[2][0];
	cin >> I[2][1];
	cin >> I[2][2];

	// 5 - Créer un triangle v = t + I*2;
	
	Triangle v(3);
	v = t + I*2;
    
    // 6 - Réaliser l'opération suivante : t^2 + (v^2)*3 et afficher le resultat
	
	Triangle op(3);
	op = t*t + (v*v)*3;  
	cout << op;

    /*************************************************************************
    *  Tester les opérateurs de comparaison
    *************************************************************************/
    // 7 - Créer les triangles a = [ 5 ; -2 4 ; 3 -1 -6 ] et b = [ 4 ; 3 -1 ; 7 1 -3 ]

	 int donneesA[6];

    donneesA[0] = 5;
    donneesA[1] = -2;
    donneesA[2] = 4;
    donneesA[3] = 3;
    donneesA[4] = 1;
    donneesA[5] = -6;

    Triangle a(3, donneesA);

	 int donneesB[6];

    donneesB[0] = 1;
    donneesB[1] = -5;
    donneesB[2] = 3;
    donneesB[3] = 2;
    donneesB[4] = -6;
    donneesB[5] = 5;

    Triangle b(3, donneesB);

    // 8 - Tester tous les opérateurs de comparaisons entre a et b
	bool c = a<b;
	bool d = a>b;
	bool e = a==b;
	cout << a.poids() << '\n' << b.poids() << '\n' << c << " " << d << " " << e << '\n';

    system("pause");
    return 0;
}
