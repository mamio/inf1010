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

	int getNb() const;

	Compteur& inc();
	Compteur& dec();


private:
	int nb_;
};

#endif // _COMPTEUR_H_
