/****************************************************************************
 * Fichier: Secretaire.h
 * Auteur: Inconnu
 * Date: Inconnu
 * Mise a jour : 16 mai 2011
 * Description: Definition de la classe Secretaire, un employe simple
 ****************************************************************************/

#ifndef _SECRETAIRE_H_
#define _SECRETAIRE_H_

#include "Employe.h"


class Secretaire: public Employe
{
public:
	Secretaire(string nom, double salaire);
};

#endif // _EMPLOYE_H_
