/****************************************************************************
 * Fichier: Image.h
 * Auteur: Guillaume-Alexandre Bilodeau
 * Date: 6 janvier 2010
 * Mise a jour : 13 mai 2011
 * Description: Définition de la classe Image
 ****************************************************************************/

#ifndef _IMAGE_H_
#define _IMAGE_H_

#include "Pixel.h"

#include <iostream>
using namespace std;

class Image
{
public:
	// Constructeurs
	Image(void);
	Image(int dimx, int dimy);
	Image(int dimx, int dimy, unsigned char clearR, unsigned char clearG, unsigned char clearB);
	
	// Destructeur
	~Image(void);

	// Methodes d'acces
	int getDimX() const;
	int getDimY() const;

	bool ajouterPixel(const Pixel& p, int x, int y);
	void afficher() const;

private:
	Pixel **pixelsImage_; // Composition
	int dimx_;
	int dimy_;	
};

#endif // _IMAGE_H_
