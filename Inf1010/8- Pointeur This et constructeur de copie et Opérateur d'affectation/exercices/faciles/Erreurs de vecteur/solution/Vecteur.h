/****************************************************************************
 * Fichier: Vecteur.h
 * Auteurs: - Georges Abou-Khalil
 *          -
 *          -
 * Date: 16 sept 2008
 * Description: Définition de la classe Vecteur
 ****************************************************************************/

#ifndef _VECTEUR_H_
#define _VECTEUR_H_

class Vecteur
{
public:
	Vecteur(unsigned int taille);
	Vecteur(const Vecteur& vec);
	~Vecteur();

	unsigned int getTaille() const;
	int& operator[](unsigned int i);
	Vecteur& operator = (const Vecteur& vec); 

	void afficher() const;

private:
	int* ptr_;
	unsigned int taille_;
};

#endif // _VECTEUR_H_
