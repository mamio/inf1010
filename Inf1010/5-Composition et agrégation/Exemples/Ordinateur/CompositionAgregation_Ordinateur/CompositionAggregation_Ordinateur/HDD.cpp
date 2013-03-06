/****************************************************************************
 * Fichier: HDD.cpp
 * Auteur: Ouajdi Felfoul
 * Date: 12 Janvier 2012
 * Description: Implémentation de la classe HDD
 ****************************************************************************/

#include "HDD.h"


/****************************************************************************
 * Fonction:	HDD::HDD
 * Description: Constructeur par defaut
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
HDD::HDD()
{
	prix_ = 0.0;
}

/****************************************************************************
 * Fonction:	HDD::~HDD
 * Description: Destructeur par defaut
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
HDD::~HDD()
{
}

/****************************************************************************
 * Fonction:	HDD::configurationMeilleure
 * Description: Donne aux variables membres capacite_ et vitesse_  
 *              les meilleures caractéristiques Ensuite appelle la fonction  
 *			privée calculerPrix pour modifier la valeur de la variables prix_
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void HDD::configurationMeilleure()
{
	capacite_ = "1TERA"; 
	vitesse_ = "7200tr/min"; 
	calculerPrix();
}
/****************************************************************************
 * Fonction:	HDD::configurationEconomique
 * Description: Donne aux variables membres capacite_ et vitesse_
 *        les caractéristiques les plus économiques ensuite appelle la fonction  
 *		    privée calculerPrix pour modifier la valeur de la variables prix_
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void HDD::configurationEconomique()
{
	capacite_ = "128GIG"; 
	vitesse_ = "5400tr/min"; 
	calculerPrix();
}
/****************************************************************************
 * Fonction:	HDD::configurationManuelle
 * Description: Donne aux variables membres capacite_ et vitesse_ 
 *        les caractéristiques choisis par l'usager et ensuite appelle la fonction  
 *		    privée calculerPrix pour modifier la valeur de la variables prix_
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void HDD::configurationManuelle()
{
	cout<<endl<<endl<<"Choisir la capacite parmi les choix suivants ( ";
	cout <<"128GIG, 256GIG, 512GIG, 1TERA " << endl;
	cin >> capacite_;

	cout<<endl<<endl<<"Choisir la vitesse parmi les choix suivants ( ";
	cout <<"5400tr/min, 7200tr/min " << endl;
	cin >> vitesse_;

	calculerPrix();
}

/****************************************************************************
 * Fonction:	afficherSpecDisque
 * Description: fonction d'affichage
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void HDD::afficherSpecDisque() const
{
	cout << endl << setw(15) << "Taille" 
		<< setw(15) << "Vitesse"
		<< setw(15) << "prix" << endl;
	
	cout << setw(15) << capacite_
		 << setw(15) << vitesse_ 
		 << setw(15) << "$" << prix_ << endl;

}

/****************************************************************************
 * Fonction:	HDD::calculerPrix
 * Description: modifier la valeur de la variables prix_ selon le contenu de 
 *              des variables membres capacite_ et vitesse_  
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void HDD::calculerPrix()
{
	prix_ = 0.0;
	if(capacite_ == "128GIG")
		prix_ += 40;
	else if(capacite_ == "256GIG")
		prix_ += 60;
	else if(capacite_ == "512GIG")
		prix_ += 100;
	else if(capacite_ == "1TERA")
		prix_ += 250;

	if(vitesse_ == "5400tr/min")
		prix_ += 0.0;
	else if(vitesse_ == "7200tr/min")
		prix_ += 50;

}

/****************************************************************************
 * Fonction:	HDD::obtenirPrix
 * Description: retourne la valeur de la variable privée prix_
 * ParamËtres:	aucun
 * Retour:		(double) prix_
 ****************************************************************************/
double HDD::obtenirPrix() const
{
	return prix_;
}