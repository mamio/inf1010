/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: William Bussiere
 * Date: 19 mai 2011
 * Description: Competition de ski avec pointeur This
 ****************************************************************************/

#include "Skieur.h"

int main(void)
{
	// Les trois skieurs sont crees avec le meme constructeur
	Skieur toniSailer(3);
	Skieur jeanClaudeKilly(12, 400);
	Skieur antonSeelos(22, 500); // Valeur par defaut specifie


	// Course de Toni Sailer
	cout << "Course du numero" << toniSailer.getNumero() << " :" << endl;
	toniSailer.skier().skier().skier().skier().skier();
	cout << endl;


	// Course de Jean-Claude Killy
	cout << "Course du numero" << jeanClaudeKilly.getNumero() << " :" << endl;
	jeanClaudeKilly.skier().debouler();
	cout << endl;


	// Course de Anton Seelos
	cout << "Course du numero" << antonSeelos.getNumero() << " :" << endl;
	antonSeelos.skier().debouler().skier();
	if( jeanClaudeKilly == antonSeelos)
		cout << "Jean-Claude et Anton sont au meme endroit dans le course." << endl;
	else
		cout << "Jean-Claude et Anton ne sont pas a la meme altitude." << endl;

	antonSeelos.skier().skier().debouler();
	cout << endl;		
		

	return 0;
}