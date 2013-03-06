/****************************************************************************
 * Fichier: Employe.h
 * Auteur: William Bussiere
 * Date: 19 mai 2011
 * Description: Definition de la classe Employe
 ****************************************************************************/

#ifndef _EMPLOYE_H_
#define _EMPLOYE_H_

#include <iostream>
#include <string>
using namespace std;


class Employe
{
public :
	Employe(string nom);
	~Employe();

	void setPoste(string poste);
	string getPoste() const;
	string getNom() const;

private :
	string nom_;
	string poste_;
};

#endif