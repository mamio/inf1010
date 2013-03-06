/****************************************************************************
 * Fichier: LampeEnBoite.cpp
 * Auteur: William Bussiere
 * Date: 25 mai 2011
 * Description: Implementation de la classe LampeEnBoite
 ****************************************************************************/

#include "LampeEnBoite.h"


LampeEnBoite::LampeEnBoite()
	: Lampe(), Boite() // Optionnel
{
	cout << "Construction d'une lampe en boite" << endl;
}


LampeEnBoite::~LampeEnBoite()
{
	cout << "Destruction d'une lampe en boite" << endl;
}


void LampeEnBoite::eclairer()
{
	if( estOuverte() )
	{
		if( estAllumee() )
			cout << "Vous illuminez la piece ainsi que l'interieur de votre boite" << endl;
		else
			cout << "Vous devez allumez la lampe pour eclairer" << endl;
	}
	else
		cout << "Vous devez d'abord ouvrir la boite pour laisser echapper la lumiere" << endl;

}

void LampeEnBoite::afficherContenu()
{
	if( estOuverte() && !estAllumee() )
		cout << "On ne voit rien dans cette boite, il fait trop noir" << endl;
	else
		Boite::afficherContenu();
}