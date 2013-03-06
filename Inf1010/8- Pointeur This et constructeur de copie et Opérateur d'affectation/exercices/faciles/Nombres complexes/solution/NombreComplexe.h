/****************************************************************************
 * Fichier: main.cpp
 * Auteur: Inconnu
 * Date: 
 * Mise a jour : 6 juin 2011
 * Description: Definition de la classe NombreComplexe
 ****************************************************************************/

#ifndef _NOMBRECOMPLEXE_H_
#define _NOMBRECOMPLEXE_H_

class NombreComplexe {
public:
	NombreComplexe(int reel, int imaginaire);
	NombreComplexe(const NombreComplexe& nbcomp); // question A)

	NombreComplexe& operator = (const NombreComplexe& nbcomp); // question B)

private:
	int reel_;
	int imaginaire_;
	int *bidon_;
};

#endif