/************************************************************************************
 * Fichier                  : entreprise.cpp
 * Auteur                   : Marie-France et Odric
 * Description              : Implementation de la classe Entreprise
 * Date de creation         : 6 fevrier 2013
 * Date de modification     : 15 fevrier 2013
 ************************************************************************************/

#include "individu.h"
#include "entreprise.h"
	
/***************************************************************************/
/* Nom: Constructeur par defaut                                            */
/* Description: Constructeur appele lorsqu'aucun parametre n'est entre     */
/* Parametres: Aucun    	    									       */
/* Valeur de retour: Aucune                                                */
/* Remarque: Ce constructeur initialise un representant d'entreprise comme */
/*			 un individu possedant un prenom et un nom vide, ayant aucune  */
/*			 liste de vins, travaillant dans une entreprise avec un nom    */ 
/*			 vide, recherchant aucun stagiaire et proposant aucun emploi.  */
/***************************************************************************/
Entreprise::Entreprise() : Individu()
{
	nomEntreprise_ = "";
	stagiairesCherches_ = 0;
	emploisProposes_ = 0;
}
	
/***********************************************************************/
/* DESCRIPTION:      Constructeur par parametre                        */
/*                   Cette fonction cree une entreprise et initialise  */
/*                   ses parametres aux valeurs entrees en parametre   */
/* PARAMETRES:       nomEntreprise (IN): string comprenant le nom de   */
/*	      								 l'entreprise dans lequel	   */
/*										 travaille l'entrepreneur      */
/*                   stagiaires (IN): entier definissant le nombre     */
/*								   de stagiaires recherches par		   */
/*								   l'entreprise						   */
/*                   emplois (IN): entier definissant le nombre        */
/*								   d'emplois proposes par l'entreprise */
/*                   nom (IN): string comprenant le nom de l'employe   */
/*                   prenom (IN): string comprenant le prenom de       */
/*								  l'employe						       */
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE: Ce constructeur initialise un representant d'entreprise   */
/*			 comme un individu n'ayant aucune liste de vins preferes   */
/*			 travaillant dans une entreprise ayant le nom entre en	   */
/*			 parametre qui cherche des stagiaires et offre des emplois */
/*			 en un nombre également entre en parametre egalement et    */ 
/*			 payant un prix d'entree également entre en parametre	   */
/***********************************************************************/
Entreprise::Entreprise(string nomEntreprise, int stagiaires, int emplois, string nom, string prenom, double prixEntree) : 
	Individu(nom, prenom, prixEntree)
{
	nomEntreprise_ = nomEntreprise;
	stagiairesCherches_ = stagiaires;
	emploisProposes_ = emplois;
}


/***********************************************************************/
/* DESCRIPTION:      Constructeur par copie                            */
/*                   Cette fonction initialise les valeurs d'un	       */
/*                   individu en copiant les informations d'un autre.  */
/* PARAMETRES:       entreprise (OUT): Adresse de l'entreprise a copier*/
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE:													       */
/***********************************************************************/
Entreprise::Entreprise(const Entreprise& entreprise) : Individu(entreprise)
{
	nomEntreprise_ = entreprise.nomEntreprise_;
    emploisProposes_ = entreprise.emploisProposes_;
    prixEntree = entreprise.prixEntree;
	stagiairesCherches_ = entreprise.stagiairesCherches_;
}
	
/***********************************************************************/
/* DESCRIPTION:      Destructeur par defaut                            */
/*                   Cette fonction detruit une entreprise cree		   */
/* PARAMETRES:       Aucun										       */
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE:         Cette fonction n'est jamais appelee		       */
/***********************************************************************/
Entreprise::~Entreprise()
{
}

string Entreprise::getNomEntreprise() const
{
	return nomEntreprise_;
}

int Entreprise::getStagiaires() const
{
	return stagiairesCherches_;
}

int Entreprise::getEmploisProposes() const
{
	return emploisProposes_;

}
	
void Entreprise::setNomEntreprise(string nom)
{
	nomEntreprise_ = nom;
}
	
void Entreprise::setStagiairesCherches(int stagiaires)
{
	stagiairesCherches_ = stagiaires;
}
	
void Entreprise::setEmplois(int emplois)
{
	emploisProposes_=emplois;
}

/***********************************************************************/
/* DESCRIPTION:      getString						                   */
/*                   Cette fonction retourne une phrase contenant	   */
/*					 toutes les informations de l'entreprise ainsi que */
/*					 la liste de ses vins preferes					   */
/* PARAMETRES:       Aucun											   */
/* VALEUR DE RETOUR: string                                            */
/* REMARQUE:         Cette fonction est constante et est une           */
/*					 modification de la meme fonction au niveau de la  */
/*					 classe individu							       */
/***********************************************************************/
string Entreprise::getString() const
{
	string nom = Individu::getNom();
	string prenom = Individu::getPrenom();
	string phrase = Individu::getString();
    string ajout = "Entreprise: " + prenom + " " + nom +  " (" + to_string(int(stagiairesCherches_))  + " stages, " + to_string(emploisProposes_) +  " emplois)" ;
	//On enleve à partir du debut de la phrase : l'introduction, le nom et le prenom afin d'ajouter le nouveau debut
	phrase.erase(0, 12 + prenom.size() + nom.size());
	phrase.insert(0, ajout);
	return phrase;
}