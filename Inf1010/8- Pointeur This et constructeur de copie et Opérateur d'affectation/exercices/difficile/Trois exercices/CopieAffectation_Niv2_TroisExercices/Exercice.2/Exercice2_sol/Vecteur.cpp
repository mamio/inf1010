/****************************************************************************
 * Fichier: Vecteur.cpp
 * Auteurs: - Georges Abou-Khalil
 *          -
 *          -
 * Date: 16 sept 2008
 * Description: Implémentation de la classe Vecteur
 ****************************************************************************/

#include "Vecteur.h"
#include <iostream>

using namespace std;

/****************************************************************************
 * Fonction: Vecteur::Vecteur
 * Description: Constructeur par paramètre
 * Paramètres: - unsigned int taille: la taille du vecteur
 * Retour: aucune
 ****************************************************************************/
Vecteur::Vecteur(unsigned int taille)
: taille_(taille)
{
	// On évite une taille de 0
	if (taille_ == 0) {
		taille_ = 1;
	}

	ptr_ = new int[taille_];
}

/****************************************************************************
 * Fonction: Vecteur::getTaille
 * Description: Retourne la taille du vecteur
 * Paramètres: aucun
 * Retour: (unsigned int) la taille du vecteur
 ****************************************************************************/
unsigned int Vecteur::getTaille() const
{
	return taille_;
}

/****************************************************************************
 * Fonction: Vecteur::operator[]
 * Description: Retourne une case du vecteur
 * Paramètres: - unsigned int i: indice de la case désirée
 * Retour: (int&) référence vers la case
 ****************************************************************************/
int& Vecteur::operator[](unsigned int i)
{
	return ptr_[i];
}

/****************************************************************************
 * Fonction: Vecteur::afficher
 * Description: affiche le vecteur à l'écran
 * Paramètres: aucun
 * Retour: aucun
 ****************************************************************************/
void Vecteur::afficher() const
{
	cout << "[ ";
	for (unsigned int i = 0; i < taille_; i++) {
		cout << ptr_[i] << " ";
	}
	cout << "]" << endl;
}

// Réponses

Vecteur::Vecteur(const Vecteur& vec)
{
	taille_=vec.getTaille();
	ptr_ = new int[taille_];
	for(int i=0;i<taille_;i++)
		ptr_[i]=vec.ptr_[i];
}

Vecteur::~Vecteur() 
{
	if(ptr_!=0)
		delete [] ptr_;
}

Vecteur& Vecteur::operator = (const Vecteur& vec)
{
	if(this!=&vec)
	{
		if(ptr_!=0)
			delete [] ptr_;
		taille_=vec.getTaille();
		ptr_ = new int[taille_];
		for(int i=0;i<taille_;i++)
			ptr_[i]=vec.ptr_[i];
	}
	return *this;
}