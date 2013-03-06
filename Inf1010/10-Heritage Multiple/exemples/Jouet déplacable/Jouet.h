/****************************************************************************
 * Fichier: Jouet.h
 * Auteur: William Bussiere
 * Date: 25 mai 2011
 * Description: Definition de la classe Jouet
 ****************************************************************************/

#ifndef _JOUET_H_
#define _JOUET_H_

#include <string>
#include <iostream>
using namespace std;


class Jouet
{
public :
	Jouet();
	Jouet(string nom);
	virtual ~Jouet();

	string getNom() const;

	virtual void setAgeMinimum(unsigned int age);
	unsigned int getAgeMinimum() const; // en annees

private :
	string nom_;
	unsigned int ageMinimum_; // en annees
};

#endif