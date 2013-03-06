/****************************************************************************
 * Fichier: Jardinier.h
 * Auteur: William Bussiere
 * Date: 26 mai 2011
 * Description: Definition de la classe Jardinier
 ****************************************************************************/

#ifndef _JARDINIER_H_
#define _JARDINIER_H_

#include <iostream>
#include <string>
using namespace std;

class Jardinier
{
public :
	// Constructeurs
	Jardinier();
	Jardinier( string nom );
	// Destructeur
	~Jardinier();

	// Methodes de modification
	void setNom( string nom );
	void setAge( unsigned int age );
	void setAnneesExperience( unsigned int annees );

	// Methodes d'acces (const)
	string getNom() const;
	unsigned int getAge() const;
	unsigned int getAnneesExperience() const;

	// Methode qui affiche les info du jardinier
	void afficher() const;

private :
	string nom_;
	unsigned int age_;
	unsigned int anneesExperience_;
};

#endif