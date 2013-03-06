/****************************************************************************
 * Fichier: Tableau.h
 * Auteur: William Bussiere
 * Date: 6 juin 2011
 * Description: Definition de la classe Tableau
 ****************************************************************************/


#ifndef _TABLEAU_H_	// Compilation guards
#define _TABLEAU_H_

#include <string>
#include <iostream>
using namespace std;

class Tableau
{
public :
	// Constructeur par defaut
	Tableau();
	// Destructeur
	~Tableau();

	// Methodes d'acces
	string getCaracteres() const;
	int getSalete() const;
	int getSaleteSeuil() const;

	// Methodes de modification
	void ajouterCaracteres(string caracteres);
	void setSaleteSeuil(int seuil);

	// Indique si le tableau doit etre lave selon la valeur seuil
	bool estSale();

	// Pour effacer les caracteres et salir le tableau
	void effacer();

	// Pour effacer le tableau et enlever la salete en meme temps
	void laver();

private :
	// Salie le tableau
	void salir(unsigned int nbCaracteres);

	// Attributs
	string caracteres_;
	int salete_;
	int saleteSeuil_;	// Doit etre initialise a 30
};

#endif // _TABLEAU_H_