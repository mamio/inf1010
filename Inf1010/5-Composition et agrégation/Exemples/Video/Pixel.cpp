/****************************************************************************
 * Fichier: Pixel.cpp
 * Auteur: Guillaume-Alexandre Bilodeau
 * Date: 6 janvier 2010
 * Mise a jour : 12 mai 2011
 * Description: Implémentation de la classe Pixel
 ****************************************************************************/

#include "Pixel.h"


/****************************************************************************
 * Fonction:	Pixel::Pixel
 * Description: Constructeur par paramètres
 * Paramètres:	- (unsigned char) r: valeur de r_ (IN)
 *				- (unsigned char) g: valeur de g_ (IN)
 *				- (unsigned char) b: valeur de b_ (IN)
 * Retour:		aucun
 ****************************************************************************/
Pixel::Pixel(unsigned char r, unsigned char g, unsigned char b)
{
	r_ = r;
	g_ = g;
	b_ = b;
}

/****************************************************************************
 * Fonction:	Pixel::~Pixel
 * Description: Destructeur par défaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Pixel::~Pixel()
{
}


/****************************************************************************
 * Fonction:	Pixel::getR
 * Description: Retourne r_
 * Paramètres:	aucun
 * Retour:		(unsigned char) la valeur de r_
 ****************************************************************************/
unsigned char Pixel::getR() const
{

	return r_;
}

/****************************************************************************
 * Fonction:	Pixel::getG
 * Description: Retourne g_
 * Paramètres: aucun
 * Retour:		(unsigned char) la valeur de g_
 ****************************************************************************/
unsigned char Pixel::getG() const
{
	return g_;
}

/****************************************************************************
 * Fonction:	Pixel::getB
 * Description: Retourne b_
 * Paramètres:	aucun
 * Retour:		(unsigned char) la valeur de b_
 ****************************************************************************/
unsigned char Pixel::getB() const
{
	return b_;
}

/****************************************************************************
 * Fonction:	Pixel:setR
 * Description: Modifie r_
 * Paramètres:	- (unsigned char) r: la nouvelle valeur de r_ (IN)
 * Retour:		aucun
 ****************************************************************************/
void Pixel::setR(unsigned char r)
{
	r_ = r;
}

/****************************************************************************
 * Fonction:	Pixel::setG
 * Description: Modifie g_
 * Paramètres:	- (unsigned char) g: la nouvelle valeur de g_
 * Retour:		aucun
 ****************************************************************************/
void Pixel::setG(unsigned char g)
{
	g_ = g;
}

/****************************************************************************
 * Fonction:	Pixel::setB
 * Description: Modifie b_
 * Paramètres:	- (unsigned char) b: la nouvelle valeur de b_
 * Retour:		aucun
 ****************************************************************************/
void Pixel::setB(unsigned char b)
{
	b_ = b;
}
