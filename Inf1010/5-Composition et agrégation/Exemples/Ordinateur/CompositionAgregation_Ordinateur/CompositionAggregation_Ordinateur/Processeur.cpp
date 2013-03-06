/****************************************************************************
 * Fichier: Processeur.cpp
 * Auteur: Ouajdi Felfoul
 * Date: 12 Janvier 2012
 * Description: Implémentation de la classe Processeur
 ****************************************************************************/

#include "Processeur.h"

/****************************************************************************
 * Fonction:	Processeur::Processeur
 * Description: Constructeur par defaut
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Processeur::Processeur()
{
	prix_ = 0.0;
}

/****************************************************************************
 * Fonction:	Processeur::~Processeur
 * Description: Destructeur par defaut
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Processeur::~Processeur()
{
}

/****************************************************************************
 * Fonction:	Processeur::configurationMeilleure
 * Description: Donne aux variables membres type_, vitesse_ et cache_ 
 *              les meilleures caractéristiques Ensuite appelle la fonction  
 *			privée calculerPrix pour modifier la valeur de la variables prix_
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Processeur::configurationMeilleure()
{
	type_ = "i7"; 
	vitesse_ = "3.2HGZ"; 
	cache_ = "L3_6MB"; 

	calculerPrix();

}

/****************************************************************************
 * Fonction:	Processeur::configurationEconomique
 * Description: Donne aux variables membres type_, vitesse_ et cache_ 
 *        les caractéristiques les plus économiques ensuite appelle la fonction  
 *		    privée calculerPrix pour modifier la valeur de la variables prix_
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Processeur::configurationEconomique()
{
	type_ = "CORE_DUO"; 
	vitesse_ = "1.33GHZ"; 
	cache_ = "L2_2MB"; 

	calculerPrix();
}
/****************************************************************************
 * Fonction:	Processeur::configurationManuelle
 * Description: Donne aux variables membres type_, vitesse_ et cache_ 
 *        les caractéristiques choisis par l'usager et ensuite appelle la fonction  
 *		    privée calculerPrix pour modifier la valeur de la variables prix_
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Processeur::configurationManuelle()
{
	cout<<endl<<endl<<"Choisir le type du processeur parmi les choix suivants ( ";
	cout <<"CORE_DUO, CORE2_DUO, i3, i5, i7) : " << endl;
	cin >> type_;

	cout<<endl<<endl<<"Choisir la vitesse parmi les choix suivants ( ";
	cout <<"1.33GHZ, 1.66GHZ, 2.3GHZ, 3.2HGZ " << endl;
	cin >> vitesse_;

	cout<<endl<<endl<<"Choisir la cache parmi les choix suivants ( ";
	cout <<"L2_2MB, L2_3MB, L2_6MB, L3_2MB, L3_3MB, L3_6MB " << endl;
	cin >> cache_;

	calculerPrix();
}

/****************************************************************************
 * Fonction:	rocesseur::afficherSpecProcesseur
 * Description: fonction d'affichage
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Processeur::afficherSpecProcesseur() const
{
	cout << endl << setw(15) << "Type" 
		        << setw(15) << "Vitesse"
				<< setw(15) << "Cache"
				<< setw(15) << "prix" << endl;

	cout << setw(15) << type_
		 << setw(15) << vitesse_ 
		 << setw(15) << cache_
		 << setw(15) << "$" << prix_  << endl;


}


/****************************************************************************
 * Fonction:	Processeur::calculerPrix
 * Description: modifier la valeur de la variables prix_ selon le contenu de 
 *              des variables membres cache_, type_ et vitesse_  
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Processeur::calculerPrix()
{
		prix_ = 0.0;
	if(type_ == "CORE_DUO")
		prix_ += 75;
	else if(type_ == "CORE2_DUO")
		prix_ += 100;
	else if(type_ == "i3")
		prix_ += 125;
	else if(type_ == "i5")
		prix_ += 150;
	else if(type_ == "i7")
		prix_ += 175;
	

	if(vitesse_ == "1.33GHZ")
		prix_ += 0.0;
	else if(vitesse_ == "1.66GHZ")
		prix_ += 50;
	else if(vitesse_ == "2.3GHZ")
		prix_ += 75;
	else if(vitesse_ == "3.2HGZ")
		prix_ += 100;


	if(cache_ == "L2_2MB")
		prix_ += 0.0;
	else if(cache_ == "L2_3MB")
		prix_ += 50;
	else if(cache_ == "L2_6MB")
		prix_ += 75;
	else if(cache_ == "L3_2MB")
		prix_ += 100;
	else if(cache_ == "L3_3MB")
		prix_ += 150;
	else if(cache_ == "L3_6MB")
		prix_ += 200;

}

/****************************************************************************
 * Fonction:	Processeur::obtenirPrix
 * Description: retourne la valeur de la variable privée prix_
 * ParamËtres:	aucun
 * Retour:		(double) prix_
 ****************************************************************************/
double Processeur::obtenirPrix() const
{
	return prix_;
}