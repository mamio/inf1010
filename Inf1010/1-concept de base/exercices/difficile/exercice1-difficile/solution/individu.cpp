/****************************************************************************
 * Fichier: Individu.h
 * Auteur: Guillaume-Alexandre Bilodeau
 * Date: 25 janvier 2010
 * Description: Implantation de la classe Individu
 ****************************************************************************/

#include "Individu.h"

/****************************************************************************
 * Fonction: Individu:Individu
 * Description: Constructeur par paramètres
 * Paramètres: - string nom: valeur de nom_
 *						 - int age: valeur de age_
 * Retour: aucun
 ****************************************************************************/

Individu::Individu(string nom, int age)
{
	nom_=nom;
	age_=age;
}

/****************************************************************************
 * Fonction: Individu:Individu
 * Description: Constructeur par défaut
 * Paramètres: aucun
 * Retour: aucun
 ****************************************************************************/

Individu::Individu()
{
	nom_="rien";
	age_=20;
}


/****************************************************************************
 * Fonction: Individu:getNom
 * Description: Retourne nom_
 * Paramètres: aucun
 * Retour: (string) la valeur de nom_
 ****************************************************************************/

string Individu::getNom()
{
	return nom_;
}

/****************************************************************************
 * Fonction: Individu:getAge
 * Description: Retourne age_
 * Paramètres: aucun
 * Retour: (int) la valeur de age_
 ****************************************************************************/

int Individu::getAge() 
{
	return age_;
}

/****************************************************************************
 * Fonction: Individu:setAge
 * Description: Modifie age_
 * Paramètres: - int age: la nouvelle valeur de age_
 * Retour: aucun
 ****************************************************************************/

void Individu::setAge(int age)
{
	age_=age;
}

/****************************************************************************
 * Fonction: Individu:setNom
 * Description: Modifie nom_
 * Paramètres: - string nom: la nouvelle valeur de nom_
 * Retour: aucun
 ****************************************************************************/

void Individu::setNom(string nom)
{
	nom_=nom;
}

/****************************************************************************
 * Fonction: Individu:memeAge
 * Description: Compare l'age de deux Individu
 * Paramètres: - const Individu & indiv: le deuxième Individu
 * Retour: (bool) Si age semblable ou non.
 ****************************************************************************/

bool Individu::memeAge(Individu indiv)
{
	if(indiv.getAge()==age_)
		return true;
	else
		return false;
}
