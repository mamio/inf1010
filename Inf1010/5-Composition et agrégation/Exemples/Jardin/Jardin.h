/****************************************************************************
 * Fichier: Jardin.h
 * Auteur: William Bussiere
 * Date: 26 mai 2011
 * Description: Definition de la classe Jardin
 ****************************************************************************/

#ifndef _JARDIN_H_
#define _JARDIN_H_

#include "Jardinier.h"

#include <iostream>
#include <string>
using namespace std;

class Jardin
{
public :
	// Constructeurs
	Jardin();
	Jardin(string nom, float largeur, float longueur);
	// Destructeur
	~Jardin();

	// Methodes de modification
	void setNom			( string nom );
	void setLargeur		( float largeur );
	void setLongueur	( float longueur );
	void setJardinier	( Jardinier* jardinier );

	// Methodes d'acces (const)
	string		getNom()		const;
	float		getLargeur()	const;
	float		getLongueur()	const;
	Jardinier*	getJardinier()	const;

	// Methode qui affiche les info du jardin et de son jardinier
	void afficher() const;

private :
	string nom_;
	float largeur_;
	float longueur_;
	Jardinier* jardinier_;	// Aggregation, vu plus loin dans le cours!
};

#endif