/************************************************************************************
 * Fichier              	: etudiant.cpp
 * Auteur               	: Marie-France et Odric
 * Description          	: Implementation de la classe Etudiant
 * Date de creation     	: 6 fevrier 2013
 * Date de modification 	: 15 fevrier 2013
 ************************************************************************************/

#include "individu.h"
#include "etudiant.h"

	
/***************************************************************************/
/* Nom: Constructeur par defaut                                            */
/* Description: Constructeur appele lorsqu'aucun parametre n'est entre     */
/* Parametres: Aucun    	    									       */
/* Valeur de retour: Aucune                                                */
/* Remarque: Ce constructeur initialise un etudiant comme un individu      */
/*			possedant un prenom et un nom vide, ayant aucune liste de vins,*/
/*			etudiant dans un departement vide, etant dans un niveau vide   */
/*			egalement et payant un prix d'entree de 14.50$                 */
/***************************************************************************/
Etudiant::Etudiant() : Individu()
{
    departement_ = "";
    niveau_ = "";
    prixEntree = 14.5;
}

/***********************************************************************/
/* DESCRIPTION:      Constructeur par parametre                        */
/*                   Cette fonction cree un etudiant et initialise ses */
/*                   parametres aux valeurs entrees en parametre       */
/*											                           */
/* PARAMETRES:       nom_ (IN):  string comprenant le prenom de        */
/*	      						 l'etudiant							   */
/*                   prenom (IN): string comprenant le prenom de       */
/*								  l'etudiant					       */
/*                   depart (IN): string comprenant le nom du          */
/*								  departement ou etudie l'etudiant     */
/*                   niveau (IN): string comprenant le niveau d'etude  */
/*								  de l'etudiant					       */
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE: Ce constructeur initialise un etudiant comme un individu  */
/*			 ayant aucune liste de vins, etudiant dans un departement  */
/*			 et dans un niveau entre en parametre                      */
/*			 egalement et payant un prix d'entree de 14.50$            */
/***********************************************************************/
Etudiant::Etudiant(string nom, string prenom, string depart, string niveau, double prixEntree) :
Individu( nom, prenom, prixEntree)
{
    departement_ = depart;
    niveau_ = niveau;
    prixEntree = 14.5;
}

/***********************************************************************/
/* DESCRIPTION:      Constructeur par copie                            */
/*                   Cette fonction initialise les valeurs d'un	       */
/*                   etudiant en copiant les informations d'un autre.  */
/* PARAMETRES:       etudiant (OUT): Adresse de l'etudiant à copier    */
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE:													       */
/***********************************************************************/
Etudiant::Etudiant(const Etudiant& etudiant) : Individu(etudiant)
{
	departement_ = etudiant.departement_;
    niveau_ = etudiant.niveau_;
    prixEntree = etudiant.prixEntree;    
}
	
/***********************************************************************/
/* DESCRIPTION:      Destructeur par defaut                            */
/*                   Cette fonction detruit un etudiant cree		   */
/* PARAMETRES:       Aucun										       */
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE:         Cette fonction n'est jamais appelee		       */
/***********************************************************************/
Etudiant::~Etudiant()
{
}

string Etudiant::getDepartement() const
{
    return departement_;
}

string Etudiant::getNiveau() const
{
    return niveau_;
}

void Etudiant::setDepartement(string depart)
{
    departement_ = depart;
}
	
void Etudiant::setNiveau(string niveau)
{
    niveau_ = niveau;
}
	
/***********************************************************************/
/* DESCRIPTION:      getString						                   */
/*                   Cette fonction retourne une phrase contenant	   */
/*					 toutes les informations de l'etudiant ainsi que   */
/*					 la liste de ses vins preferes					   */
/* PARAMETRES:       Aucun											   */
/* VALEUR DE RETOUR: string                                            */
/* REMARQUE:         Cette fonction est constante et est une           */
/*					 modification de la meme fonction au niveau de la  */
/*					 classe individu							       */
/***********************************************************************/
string Etudiant::getString() const
{
    string nom = Individu::getNom();
	string prenom = Individu::getPrenom();
	string phrase = Individu::getString();
    string ajout = "Etudiant : " + prenom + " " + nom +  " (" + departement_ + " " + niveau_ +  ")" ;
	//On enleve à partir du debut de la phrase : l'introduction, le nom et le prenom afin d'ajouter le nouveau debut
	phrase.erase(0, 12 + nom.size() + prenom.size());
	phrase.insert(0, ajout);
	return phrase;
}
