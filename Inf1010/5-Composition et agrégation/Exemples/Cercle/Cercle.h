/****************************************************************************
 * Fichier: Point.h
 * Auteur: Martin Bisson
 * Date: 27 août 2009
 * Description: Définition de la classe Cercle
 ****************************************************************************/

#ifndef _CERCLE_H_
#define _CERCLE_H_

#include "Point.h"

#include <iostream>
using namespace std;

class Cercle
{
public:
    // Constructeur par défaut.
	Cercle();
    // Destructeur.
    ~Cercle();

private:
    Point centre_; // Composition
    double rayon_;

};

#endif // _CERCLE_H_
