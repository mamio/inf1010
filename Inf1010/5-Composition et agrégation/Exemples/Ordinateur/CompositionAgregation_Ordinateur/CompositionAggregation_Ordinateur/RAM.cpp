/****************************************************************************
 * Fichier: RAM.cpp
 * Auteur: Ouajdi Felfoul
 * Date: 12 Janvier 2012
 * Description: Implémentation de la classe RAM
 ****************************************************************************/


#include "RAM.h"


using namespace std;


/*Taille RAM disponible : 1GIG, 2GIG, 4GIG, 6GIG, 8GIG, 16GIG*/
/*Vitesse RAM disponible : 667MHZ, 800MHZ, 1066MHZ, 1333MHZ,*/
/*Type RAM disponible : SDRAM, DDR, DDR2, DDR3*/

/****************************************************************************
 * Fonction:	RAM::RAM
 * Description: Constructeur par defaut
 * Parametres:	aucun
 * Retour:		aucun
 ****************************************************************************/
RAM::RAM()
{
	prix_ = 0.0;
}

/****************************************************************************
 * Fonction:	RAM::~RAM
 * Description: Destructeur par defaut
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
RAM::~RAM()
{
}

/****************************************************************************
 * Fonction:	RAM::configurationMeilleure
 * Description: Donne aux variables membres capacite_, type_ et vitesse_ 
 *              les meilleures caractéristiques Ensuite appelle la fonction  
 *			privée calculerPrix pour modifier la valeur de la variables prix_
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void RAM::configurationMeilleure()
{
	capacite_ = "16GIG";
	type_ = "DDR3";
	vitesse_ = "1333MHZ";
	calculerPrix();
}
/****************************************************************************
 * Fonction:	RAM::configurationEconomique
 * Description: Donne aux variables membres capacite_, type_ et vitesse_ 
 *        les caractéristiques les plus économiques ensuite appelle la fonction  
 *		    privée calculerPrix pour modifier la valeur de la variables prix_
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void RAM::configurationEconomique()
{
	capacite_ = "1GIG";
	type_ = "SDRAM";
	vitesse_ = "667MHZ";
	calculerPrix();
}

/****************************************************************************
 * Fonction:	RAM::configurationManuelle
 * Description: Donne aux variables membres capacite_, type_ et vitesse_ 
 *        les caractéristiques choisis par l'usager et ensuite appelle la fonction  
 *		    privée calculerPrix pour modifier la valeur de la variables prix_
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void RAM::configurationManuelle()
{

	cout<<endl<<endl<<"Choisir la capacite parmi les choix suivants ( ";
	cout<<"Taille RAM disponible : 1GIG, 2GIG, 4GIG, 6GIG, 8GIG, 16GIG)" <<endl;
	cin >> capacite_;

	cout<<endl<<endl<<"Choisir la vitesse parmi les choix suivants ( ";
	cout <<"Vitesse RAM disponible : 667MHZ, 800MHZ, 1066MHZ, 1333MHZ) " << endl;
	cin >> vitesse_;

	cout<<endl<<endl<<"Choisir le type parmi les choix suivants ( ";
	cout <<"Type RAM disponible : SDRAM, DDR, DDR2, DDR3) " << endl;
	cin >> type_;

	calculerPrix();

}
/****************************************************************************
 * Fonction:	RAM::afficherSpecRAM
 * Description: fonction d'affichage
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void RAM::afficherSpecRAM() const
{
	cout<< endl << setw(15) << "Taille"
		        << setw(15) << "Vitesse" 
				<< setw(15) << "Type" 
				<< setw(15) << "prix" << endl;
	
	cout<< setw(15) << capacite_
		<< setw(15) << vitesse_ 
		<< setw(15) << type_ 
		<< setw(15) << "$" << prix_  << endl;

}
/****************************************************************************
 * Fonction:	RAM::calculerPrix
 * Description: modifier la valeur de la variables prix_ selon le contenu de 
 *              des variables membres capacite_, type_ et vitesse_  
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void RAM::calculerPrix()
{

	prix_ = 0.0;

	if(capacite_ == "1GIG")
		prix_ += 10;
	else if(capacite_ == "2GIG")
		prix_ += 20;
	else if(capacite_ == "4GIG")
		prix_ += 30;
	else if(capacite_ == "6GIG")
		prix_ += 50;
	else if(capacite_ == "8GIG")
		prix_ += 75;
	else if(capacite_ == "16GIG")
		prix_ += 150;

	if(type_ == "SDRAM")
		prix_ += 0.0;
	else if(type_ == "DDR")
		prix_ += 50;
	else if(type_ == "DDR2")
		prix_ += 75;
	else if(type_ == "DDR3")
		prix_ += 100;


	if(vitesse_ == "667MHZ")
		prix_ += 0.0;
	else if(vitesse_ == "800MHZ")
		prix_ += 50;
	else if(vitesse_ == "1066MHZ")
		prix_ += 75;
	else if(vitesse_ == "1333MHZ")
		prix_ += 100;


}
/****************************************************************************
 * Fonction:	RAM::obtenirPrix
 * Description: retourne la valeur de la variable privée prix_
 * ParamËtres:	aucun
 * Retour:		(double) prix_
 ****************************************************************************/
double RAM::obtenirPrix() const
{
	return prix_;
}