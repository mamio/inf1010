/****************************************************************************
 * Fichier: Ecran.cpp
 * Auteur: Ouajdi Felfoul
 * Date: 12 Janvier 2012
 * Description: Implémentation de la classe Ecran
 ****************************************************************************/
#include "Ecran.h"


/*Format ecran disponible : 10POUCE, 11.2POUCE, 13POUCE, 15.4POUCE, 17POUCE, 20POUCE, 24POUCE, 27POUCE*/
/*Resolution : 640x480, 800x600, 1024x768, 1080x1024, 1400x1050, 1600x1200 */


/****************************************************************************
 * Fonction:	Ecran::Ecran
 * Description: Constructeur par defaut
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Ecran::Ecran()
{
	//Les objets de type string sont crees par defaut vide, donc pas
	//besoin de les initialiser
	//format_ = ""; 
	//resolution_ = ""; 
	 
	prix_ = 0.0;
}

/****************************************************************************
 * Fonction:	Ecran::~Ecran
 * Description: Destructeur par defaut
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Ecran::~Ecran()
{
}
/****************************************************************************
 * Fonction:	Ecran::configurationMeilleure
 * Description: Donne aux variables membres format_ et resolution_  
 *              les meilleures caractéristiques Ensuite appelle la fonction  
 *			privée calculerPrix pour modifier la valeur de la variables prix_
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Ecran::configurationMeilleure()
{
	format_ = "27POUCE"; 
	resolution_ = "2048x1536";
	calculerPrix();
}
/****************************************************************************
 * Fonction:	Ecran::configurationEconomique
 * Description: Donne aux variables membres format_ et resolution_
 *        les caractéristiques les plus économiques ensuite appelle la fonction  
 *		    privée calculerPrix pour modifier la valeur de la variables prix_
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Ecran::configurationEconomique()
{
	format_ = "10POUCE"; 
	resolution_ = "640x480";
	calculerPrix();

}
/****************************************************************************
 * Fonction:	Ecran::configurationManuelle
 * Description: Donne aux variables membres format_ et resolution_ 
 *        les caractéristiques choisis par l'usager et ensuite appelle la fonction  
 *		    privée calculerPrix pour modifier la valeur de la variables prix_
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Ecran::configurationManuelle()
{
	cout<<endl<<endl<<"Choisir le format de l''ecran parmi les choix suivants ( ";
	cout <<"10POUCE, 11.2POUCE, 13POUCE, 15.4POUCE, 17POUCE, 20POUCE, 24POUCE, 27POUCE) ";
	cin >> format_;

	cout<<endl<<endl<<"Choisir la resolution de l''ecran parmi les choix suivants ( ";
	cout <<"640x480, 800x600, 1024x768, 1080x1024, 1400x1050, 1600x1200) ";
	cin >> resolution_;

	calculerPrix();
}
	
/****************************************************************************
 * Fonction:	Ecran::afficherSpecEcran
 * Description: fonction d'affichage
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Ecran::afficherSpecEcran() const
{
	cout << endl << setw(15) << "Format" 
		<< setw(15) << "Resolution"
		<< setw(15) << "prix" << endl;

	cout << setw(15) << format_
		<< setw(15) << resolution_ 
		<< setw(15) << "$" << prix_  << endl;


}
/****************************************************************************
 * Fonction:	Ecran::calculerPrix
 * Description: modifier la valeur de la variables prix_ selon le contenu de 
 *              des variables membres format_ et resolution_  
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Ecran::calculerPrix()
{
	prix_ = 0.0;
	if(format_ == "10POUCE")
		prix_ += 50.0;
	else if(format_ == "11.2POUCE")
		prix_ += 50.0;
	else if(format_ == "13POUCE")
		prix_ += 80.0;
	else if(format_ == "15.4POUCE")
		prix_ += 105.0;
	else if(format_ == "17POUCE")
		prix_ += 150.0;
	else if(format_ == "20POUCE")
		prix_ += 250.0;
	else if(format_ == "24POUCE")
		prix_ += 350.0;
	else if(format_ == "27POUCE")
		prix_ += 550.0;

	if(resolution_ == "640x480")
		prix_ += 0.0;
	else if(resolution_ == "800x600")
		prix_ += 100.0;
	else if(resolution_ == "1024x768")
		prix_ += 150.0;
	else if(resolution_ == "1080x1024")
		prix_ += 175.0;
	else if(resolution_ == "1400x1050")
		prix_ += 200.0;
	else if(resolution_ == "1600x1200")
		prix_ += 250.0;
	else if(resolution_ == "2048x1536")
		prix_ += 400.0;

}
/****************************************************************************
 * Fonction:	Ecran::obtenirPrix
 * Description: retourne la valeur de la variable privée prix_
 * ParamËtres:	aucun
 * Retour:		(double) prix_
 ****************************************************************************/
double Ecran::obtenirPrix() const
{
	return prix_;
}