/****************************************************************************
 * Fichier: Pixel.h
 * Auteur: Guillaume-Alexandre Bilodeau
 * Date: 6 janvier 2010
 * Mise a jour : 12 mai 2011
 * Description: Définition de la classe Pixel
 ****************************************************************************/

#ifndef _PIXEL_H_
#define _PIXEL_H_

#include <iostream>
using namespace std;

class Pixel  //Nom de la classe
{
public:   // Visibilité
	// Constructeurs
	//Pixel(); //Pourquoi en commentaires ?????????
	Pixel(unsigned char r=0, unsigned char g=0, unsigned char b=0);
	// Destructeur
	~Pixel(); 

	// Méthodes

	// Méthodes d'accès
	unsigned char getR() const;
	unsigned char getG() const;
	unsigned char getB() const;

	// Méthodes de modifications
	void setR(unsigned char r);
	void setG(unsigned char g);
	void setB(unsigned char b);

private:    // Visibilité

	// Attributs
	unsigned char r_;
	unsigned char g_;
	unsigned char b_;
};

#endif // _PIXEL_H_