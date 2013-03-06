/****************************************************************************
 * Fichier: Base.h
 * Auteur: William Bussiere
 * Date: 21 juin 2011
 * Description: Definition de la classe Base
 ****************************************************************************/

#ifndef _BASE_H_
#define _BASE_H_

#include "Mission.h"

#include <string>
#include <vector>
#include <iostream>
using namespace std;


class Base
{
public :
	Base(const string& nom, const string& description);
	~Base();

	void   setNom(const string& nom);
	string getNom() const;

	void   setDescription(const string& description);
	string getDescription() const;

	// On passe un poiteur vers une mission, 
	// car c'est le type des elements du vecteur
	// Ce n'est pas plus rapide qu'une reference constante
	void ajouterMission(Mission* mission);

	void afficher() const;

private :
	string nom_;
	string description_;

	// On utilise un vecteur de pointeurs vers des Missions,
	// puisque c'est plus rapide a copier que des objets en entier
	vector<Mission*> missions_;
};

#endif