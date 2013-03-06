/****************************************************************************
 * Fichier: main.cpp
 * Auteur: Inconnu
 * Date: 
 * Mise a jour : 6 juin 2011
 * Description: Tests des methodes de la classe NombreComplexe
 ****************************************************************************/

#include "NombreComplexe.h"

int main()
{
	NombreComplexe a(2,-3);

	// Question A)
	NombreComplexe b(a);	

	// Question B)
	NombreComplexe c(0,0);
	c=b;
	
	return 0;
}