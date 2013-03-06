/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: William Bussiere
 * Date: 31 mai 2011
 * Description: Manipulation de la classe Vecteur dont 
 *				beaucoup d'operateurs sont surcharges.
 ****************************************************************************/

#include "Vecteur3D.h"

#include <iostream>
using namespace std;

int main(void)
{
	// Creation de quelques vecteurs forces
	Vecteur3D ariaPosition	( 80.00,	0.00,	0.00); // Constructeur
	Vecteur3D ariaPoids		( 0.00,		-69.34, 0.00);

	Vecteur3D brendonPosition(-120.00,	0.00,	0.00);
	Vecteur3D brendonPoids	( 0.00,    -56.72,	0.00);

	cout << endl << endl;



	// En imaginant Aria et Brendon sur une planche dont le centre est (0,0,0).
	// La planche peut pivoter autour de ce point.

	Vecteur3D momentAria = ariaPosition ^ ariaPoids;	// operator^

	cout << "Moment de force du cote d'Aria : "
		<< momentAria.getZ() << endl;


	Vecteur3D momentBrendon = brendonPosition ^ brendonPoids;

	cout << "Moment de force du cote de Brandon : "
		<< momentBrendon.getZ() << endl;
	cout << endl;


	cout << "Moment total exerce sur la plache : " << endl;
	cout << momentAria << " + " << momentBrendon << " = " 
		 << (momentAria + momentBrendon) << endl;		// operator+
	cout << endl << endl;



	// Aria et Brendon veulent se stabiliser sur la planche
	// Ils ont le droit a deux ressorts, un de chaque cote a leur position.
	// Voici un configuration possible :
	Vecteur3D ressortA		( 21.89,	11.08,	4.02);
	Vecteur3D ressortB		( 59.67,	17.88,	2.68);


	cout << "Poids reajustes avec des ressorts :" << endl << endl;

	// On reajuste le poids d'Aria grace au ressort
	ariaPoids = ariaPoids + ressortA;								// operator+=
	momentAria = ariaPosition ^ ariaPoids;

	cout << "Moment de force du cote d'Aria : "
		<< momentAria << endl;							// operator<<

	// On reajuste le poids de Brendon grace au ressort
	brendonPoids = brendonPoids + ressortB;
	momentBrendon = brendonPosition ^ brendonPoids;

	cout << "Moment de force du cote de Brandon : "
		<< momentBrendon << endl;
	cout << endl;


	// Une fois les forces ajustees
	cout << "Moment de force total exerce : " << endl
		<< momentAria << " + " << momentBrendon << " = "
		<< (momentAria + momentBrendon) << endl;


	// On teste les autre operateurs 
	

	// On teste pour voir si la postion d'Aria est orthogonale a son poids

	double prodScaliare = ariaPoids * ariaPosition;		// operator*

	cout << "Est-ce que le vecteur poids de Aria est orthogonal a la planche : " << endl;
	cout << ariaPoids << " * " <<  ariaPosition  << " = "
		<< prodScaliare << " : ";
	if( prodScaliare < 0.001 && prodScaliare > -0.001)
		cout << "oui" << endl;
	else
		cout << "non" << endl;
	cout << endl;


	// On teste pour voir si Aria et Brendon ont le meme poids

	cout << "Est-ce que Aria est du meme poids que Brendon : " << endl;
	cout << ariaPoids << " == " << brendonPoids << " : ";
	if( ariaPoids == brendonPoids)
		cout << "oui" << endl;
	else
		cout << "non" << endl;
	cout << endl << endl;

	return 0;
}