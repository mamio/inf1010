/************************************************************************************
 * Fichier                  : professeur.cpp
 * Auteur                   : Marie-France et Odric
 * Description              : Implementation de la classe Professeur
 * Date de creation         : 6 fevrier 2013
 * Date de modification     : 15 fevrier 2013
 ************************************************************************************/

#include "individu.h"
#include "professeur.h"

	
/***************************************************************************/
/* Nom: Constructeur par defaut                                            */
/* Description: Constructeur appele lorsqu'aucun parametre n'est entre     */
/* Parametres: Aucun    	    									       */
/* Valeur de retour: Aucune                                                */
/* Remarque: Ce constructeur initialise un professeur comme un individu	   */ 
/*			 possedant un prenom et un nom vide, ayant aucune liste de	   */
/*			 vins, travaillant dans un departement et un bureau vide	   */
/***************************************************************************/
Professeur::Professeur() : Individu()
{
    string departement_ = "";
    string bureau_ = "";
}
	
/***************************************************************************/
/* Nom: Constructeur par parametre à un parametre                          */
/* Description: Constructeur appele lorsque tous les parametres sont entres*/
/*				                                                           */
/* Parametres: nom (IN) : Nom du professeur                                */
/*			   prenom (IN) : Prenom du professeur				 		   */
/*             departement (IN) : Nom du département ou travaille le	   */
/*								  professeur							   */
/*			   bureau (IN) : Localisation du bureau du professeur		   */
/*             prix d'entree (IN) : Prenom du professeur				   */
/* Valeur de retour: Aucune                                                */
/* Remarque: Ce constructeur initialise une entreprise à tous les		   */
/*			 parametres entres				                               */
/*                     													   */
/***************************************************************************/
Professeur::Professeur(string nom, string prenom, string departement, string bureau, double prixEntree): 
	Individu( nom,  prenom, prixEntree)
{
	departement_=departement;
	bureau_=bureau;
}
	
/***********************************************************************/
/* DESCRIPTION:      Constructeur par copie                            */
/*                   Cette fonction initialise les valeurs d'un	       */
/*                   professeur en copiant les informations d'un autre.*/
/* PARAMETRES:       professeur (OUT): Adresse du professeur a copier    */
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE:													       */
/***********************************************************************/
Professeur::Professeur(const Professeur& professeur) : Individu(professeur)
{
	departement_ = professeur.departement_;
    bureau_ = professeur.bureau_;
    prixEntree = professeur.prixEntree;    
}

/***********************************************************************/
/* DESCRIPTION:      Destructeur par defaut                            */
/*                   Cette fonction detruit un professeur cree		   */
/* PARAMETRES:       Aucun										       */
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE:         Cette fonction n'est jamais appelee		       */
/***********************************************************************/
Professeur::~Professeur()
{
}

string Professeur::getDepartement() const
{
	return departement_;
}

string Professeur::getBureau() const
{
	return bureau_;
}

	
/***********************************************************************/
/* DESCRIPTION:      getString						                   */
/*                   Cette fonction retourne une phrase contenant	   */
/*					 toutes les informations du professeur ainsi que */
/*					 la liste de ses vins preferes					   */
/* PARAMETRES:       Aucun											   */
/* VALEUR DE RETOUR: string                                            */
/* REMARQUE:         Cette fonction est constante et est une           */
/*					 modification de la meme fonction au niveau de la  */
/*					 classe individu							       */
/***********************************************************************/
string Professeur::getString() const
{
	
	string nom = Individu::getNom();
	string prenom = Individu::getPrenom();
	string phrase = Individu::getString(); 
	string subPhrase = "Professeur : " + prenom + " " + nom +  " (" + departement_ + ", " + bureau_ + ")";
	//On enleve à partir du debut de la phrase : l'introduction, le nom et le prenom afin d'ajouter le nouveau debut
	phrase.erase(0, 12 + prenom.size() + nom.size());
	phrase.insert(0, subPhrase);
	return phrase;
}


void Professeur::setDepartement(string departement)
{
	departement_= departement;
}

void Professeur::setBureau(string bureau)
{
	bureau_= bureau;
}

