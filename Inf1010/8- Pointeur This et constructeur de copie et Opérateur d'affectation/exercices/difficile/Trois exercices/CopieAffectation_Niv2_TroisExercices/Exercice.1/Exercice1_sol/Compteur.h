/****************************************************************************
 * Fichier: Compteur.h
 * Auteurs: - Georges Abou-Khalil
 *          -
 *          -
 * Date: 16 sept 2008
 * Description: Définition de la classe Compteur
 ****************************************************************************/

#ifndef _COMPTEUR_H_
#define _COMPTEUR_H_

class Compteur
{
public:
	Compteur(int nb = 0);
	Compteur(const Compteur& compt);
	~Compteur();

	Compteur& operator = (const Compteur& compt);

	int getNb() const;

	Compteur& inc();
	Compteur& dec();


private:
	int* ptrNb_;
};

#endif // _COMPTEUR_H_
