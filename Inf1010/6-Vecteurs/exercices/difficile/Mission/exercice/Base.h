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

	void ajouterMission(const Mission& mission);

	void afficher() const;

private :
	string nom_;
	string description_;
	vector<Mission> missions_;
};

#endif