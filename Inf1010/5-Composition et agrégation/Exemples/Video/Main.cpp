/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: William Bussiere
 * Mise a jour : 13 mai 2011
 * Description: Fonction principale
 ****************************************************************************/

#include "Pixel.h"
#include "Image.h"
#include "Video.h"

#include <iostream>
using namespace std;


int main()
{
	// Creation de pixels de differantes facons

	Pixel pixelNoir;							// Constructeur par parametres	(0,0,0)
	Pixel& pixelRouge = Pixel(199);				// Reference a un pixel			(199,0,0)
	Pixel* pixelVert  = new Pixel(0, 200, 0);	// Pointeur vers un pixel		(0,200,0)
	Pixel pixelBlanc(250, 250, 250);			// Constructeur par parametres	(250,250,250)

	cout << "Pixel rouge : (" 
		 << (int) pixelRouge.getR() << ','		// On cast en (int) pour voir un nombre sinon 
		 << (int) pixelRouge.getG() << ','		// nous aurions vu un caractere
		 << (int) pixelRouge.getB() << ')' << endl;

	cout << "Pixel vert : (" 
		 << (int) pixelVert->getR() << ','		// A partir du pointeur
		 << (int) (*pixelVert).getG() << ','	// Par dereferencement du pointeur
		 << (int) (*pixelVert).getB() << ')' << endl;
	cout << endl << endl;


	// Creation d'images

	Image imageVide;							// Constructeur par defaut (image vide)
	Image imagePixelsParDefauts(10, 10);		// Image avec dimension et pixels crees par defaut
	Image imageJaune(5, 5, 125, 125, 0);		// Image toute jaune de dimension 5x5
	cout << endl << endl;

	
	cout << "Image vide :" << endl;
	cout << "Dimensions : " << imageVide.getDimX() << " X " << imageVide.getDimY() << endl;
	imageVide.afficher();
	cout << endl << endl;

	cout << "Image jaune :" << endl;
	cout << "Dimensions : " << imageJaune.getDimX() << " X " << imageJaune.getDimY() << endl;
	imageJaune.afficher();
	cout << endl << endl;

	// Dessine un peu sur l'image jaune

	imageJaune.ajouterPixel(*pixelVert, 2, 3);
	imageJaune.ajouterPixel(pixelBlanc, 3, 3);
	imageJaune.ajouterPixel(pixelNoir, 3, 4);

	cout << "Image jaune modifiee:" << endl;
	cout << "Dimensions : " << imageJaune.getDimX() << " X " << imageJaune.getDimY() << endl;
	imageJaune.afficher();
	cout << endl << endl;


	// Fait une video avec les image crees
	Video video;
	Image* imageSimple = new Image(12,12);

	video.setImage(&imageVide, 0);
	video.setImage(imageSimple, 1);
	video.setImage(new Image(10, 10, 100, 100, 100), 2);	// Attention! on ne pourra pas desallouer 
															// cet emplacement memoire.

	return 0;
}