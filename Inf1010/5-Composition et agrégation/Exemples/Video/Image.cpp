/****************************************************************************
 * Fichier: Image.cpp
 * Auteur: Guillaume-Alexandre Bilodeau
 * Date: 6 janvier 2010
 * Mise a jour : 13 mai 2011
 * Description: Implémentation de la classe Image
 ****************************************************************************/

#include "Image.h"


/****************************************************************************
 * Fonction:	Image:Image
 * Description: Constructeur par défaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/

Image::Image()
{
	cout << "Constructeur par defaut (Image)" << endl;
	pixelsImage_ = 0;
	dimx_ = 0;
	dimy_ = 0;
}

/****************************************************************************
 * Fonction:	Image::Image
 * Description: Constructeur par paramètres
 * Paramètres:	- (int) x: valeur de dimx_ (IN)
 *				- (int) y: valeur de dimy_ (IN)
 * Retour:		aucun
 ****************************************************************************/
Image::Image(int x, int y)
{
	cout << "Constructeur par parametre (Image)" << endl;
	dimx_ = x;
	dimy_ = y;

	pixelsImage_ = new Pixel*[dimx_];
	for(int i=0;i<dimx_;i++)
		pixelsImage_[i] = new Pixel[dimy_];

}


/****************************************************************************
 * Fonction:	Image::Image
 * Description: Constructeur par paramètres 
 * Paramètres:	- (int) dimx : largeur de l'image (IN)
 *				- (int) dimy : hauteur de l'image (IN)
 *				- (unsigned int) r: rouge pour le fond de l'image (IN)
 *				- (unsigned int) g: vert pour le fond de l'image (IN)
 *				- (unsigned int) b: bleu pour le fond de l'image (IN)
 * Retour:		aucun
 ****************************************************************************/
Image::Image(int dimx, int dimy, 
			 unsigned char clearR, unsigned char clearG, unsigned char clearB)
	: dimx_(dimx), dimy_(dimy)
{
	cout << "Constructeur avec couleur de fond (Image)" << endl;

	pixelsImage_ = new Pixel*[dimx_];
	for(int i=0; i<dimx_; i++)
	{
		pixelsImage_[i] = new Pixel[dimy_];

		for(int j=0; j<dimy_; j++)
		{
			pixelsImage_[i][j].setR(clearR);
			pixelsImage_[i][j].setG(clearG);
			pixelsImage_[i][j].setB(clearB);
		}
	}
}


/****************************************************************************
 * Fonction:	Image::~Image
 * Description: Destructeur par défaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Image::~Image()
{
	cout << "Destructeur par defaut (Image)" << endl;

	if(pixelsImage_!=0) {
		for(int i=0;i<dimx_;i++) {
			delete [] pixelsImage_[i];
		}

		delete [] pixelsImage_;
	}		
}


/****************************************************************************
 * Fonction:	Image::getDimX
 * Description: Retourne dimx_
 * Paramètres:	aucun
 * Retour:		(int) la valeur de dimx_
 ****************************************************************************/
int Image::getDimX() const
{
	return dimx_;
}


/****************************************************************************
 * Fonction:	Image::getDimY
 * Description: Retourne dimy_
 * Paramètres:	aucun
 * Retour:		(int) la valeur de dimy_
 ****************************************************************************/
int Image::getDimY() const
{
	return dimy_;
}


/****************************************************************************
 * Fonction:	Image::print
 * Description: Affiche la composante rouge de l'image pour chaque pixel
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Image::afficher() const
{
	if(pixelsImage_!=0) 
	{
		for(int i=0;i<dimx_;i++) 
		{
			for(int j=0;j<dimy_;j++) 
				cout << (int) pixelsImage_[i][j].getR() << " " ;

			cout << endl;
		}
	}
}

/****************************************************************************
 * Fonction:	Image::ajouterPixel
 * Description: Ajoute un pixel dans l'image a l'endroit desire
 * Paramètres:	- (Pixel) p : le pixel a ajouter (IN)
 *				- (int) x	: la position du pixel en x (IN)
 *				- (int) y	: la position du pixel en y (IN)
 * Retour:		(bool) retourne vrai si le pixel est bien ajoute
 ****************************************************************************/
bool Image::ajouterPixel(const Pixel& p, int x, int y)
{
	if(x<getDimX() && x>=0 && y<dimy_ && y>=0)
	{
		pixelsImage_[x][y]=p;
		return true;
	}

	return false;
}

