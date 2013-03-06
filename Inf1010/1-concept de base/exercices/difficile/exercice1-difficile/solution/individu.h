/****************************************************************************
 * Fichier: individu.h
 * Auteur: Guillaume-Alexandre Bilodeau
 * Date: 25 janvier 2010
 * Description: Définition de la classe Individu
 ****************************************************************************/

#ifndef _INDIVIDU_H_
#define _INDIVIDU_H_

#include <string>

using namespace std;

class Individu
{
public:
	Individu(); // Constructeur par défaut.
	Individu(string nom, int age); // Constructeur par paramètres. 

	string getNom();
	int getAge(); 

	void setAge(int age);
	void setNom(string nom);

	bool memeAge(Individu indiv); // Référence constante sur Individu

private:
	string nom_;
	int age_;
};

#endif