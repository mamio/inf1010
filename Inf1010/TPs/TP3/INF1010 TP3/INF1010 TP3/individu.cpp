/************************************************************************************
 * Fichier              	: individu.cpp
 * Auteur               	: Marie-France et Odric
 * Description          	: Implémentation de la classe Individu
 * Date de creation     	: 5 fevrier 2013
 * Date de modification 	: 15 fevrier 2013
 ************************************************************************************/

#include "individu.h"
#include <iostream>
#include <string>
#include <iomanip>

/***************************************************************************/
/* Nom: Constructeur par défaut                                            */
/* Description: Constructeur appelé lorsqu'aucun paramètre n'est entré     */
/* Parametres: Aucun    	    									       */
/* Valeur de retour: Aucune                                                */
/* Remarque: Ce constructeur initialise un individu comme un individu      */
/*			possédant un prenom et un nom vide, ayant aucune liste de vins */
/*			et payant un prix d'entrée de 0.00$                            */
/*                     													   */
/***************************************************************************/
Individu::Individu()
{
	nbVins_ = 0;
	string nom_ = "";
	string prenom_ = "";
	listeVinsPreferes_ = new string[nbVins_];
	prixEntree = 0.0;
}

	
/***********************************************************************/
/* DESCRIPTION:      Constructeur par paramètre                        */
/*                   Cette fonction cree un individu et initialise ses */
/*                   parametres aux valeurs entrees par en paramètre   */
/*											                           */
/* PARAMETRES:       nom_ (IN):  string comprenant le prenom de        */
/*	      						 l'individu							   */
/*                   prenom (IN): string comprenant le prenom de       */
/*								  l'individu					       */
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE:         L'initialisation entre une liste de vin vide, donc*/
/*                   un nbVins de 0 vins et le prix d'entree par defaut*/ 
/*                   qui est de 0.00$						           */
/***********************************************************************/
Individu::Individu(string nom, string prenom, double prix)
{
	nbVins_ = 0;
	nom_ = nom;
	prenom_ = prenom;
	listeVinsPreferes_ = new string[nbVins_]; //initialisation à un tableau dynamique vide de string
	prixEntree = prix;
}

	
/***********************************************************************/
/* DESCRIPTION:      Constructeur par copie                            */
/*                   Cette fonction initialise les valeurs d'un	       */
/*                   individu en copiant les informations d'un autre.  */
/* PARAMETRES:       individu (OUT): Adresse de l'individu à copier    */
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE:													       */
/***********************************************************************/
Individu::Individu(const Individu& individu)
{
    nbVins_ = individu.nbVins_;
    nom_ = individu.nom_;
    prenom_ = individu.prenom_;
	listeVinsPreferes_ = new string[nbVins_];
	for (unsigned int i = 0 ; i <  individu.nbVins_ ; i++)
		listeVinsPreferes_[i] = individu.listeVinsPreferes_[i]; //copie du contenu de chaqune des cases de la liste de l'individu entre en parametre
	prixEntree = individu.prixEntree;
}

	
/***********************************************************************/
/* DESCRIPTION:      Destructeur par defaut                            */
/*                   Cette fonction detruit un individu cree		   */
/* PARAMETRES:       Aucun										       */
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE:         Cette fonction n'est jamais appelee		       */
/***********************************************************************/
Individu::~Individu()
{
		delete []listeVinsPreferes_;
		listeVinsPreferes_ = 0;
}

unsigned int Individu::getnbVins() const
{
    return nbVins_;
}

string Individu::getNom() const
{
    return nom_;
}

string Individu::getPrenom() const
{
    return prenom_;
}

double Individu::getPrix() const
{
    return prixEntree;
}

string Individu::getVin(const unsigned int vin) const
{
    return listeVinsPreferes_[vin];
}

void Individu::setNbVins(unsigned int nbVins)
{
    nbVins_ = nbVins;
}

void Individu::setNom(string nom)
{
    nom_ = nom;
}

void Individu::setPrenom(string prenom)
{
    prenom_ = prenom;
}

	
/***********************************************************************/
/* DESCRIPTION:      addVin								               */
/*                   Cette fonction ajoute des vins à la liste de vins */
/*                   preferes d'un individu en ajoutant le nom du vin  */ 
/*					 si celui-ci n'existe pas deja dans la liste	   */
/* PARAMETRES:       vin (OUT): Nom du vin à ajouter constant		   */
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE:													       */
/***********************************************************************/
void Individu::addVin(const string& vin)
{
	unsigned taille = nbVins_ + 1;
    string* temp = new string[taille];
	bool existCheck = false;
    
	//Si le nombre de vin est nul, il est inutile de verifier si le vin existe deja
    if(nbVins_ > 0) 
    {
		for (unsigned int i = 0; i < nbVins_; i++)
   			 if(vin == listeVinsPreferes_[i])
   			 {
   				 cout << "Le vin existe dejà" << endl;
				 existCheck = true;
   			 }
		if (existCheck == false)
		{
			for (unsigned int i = 0; i < nbVins_; i++)
   				temp[i] = listeVinsPreferes_[i];
   			temp[nbVins_] = vin;
   			nbVins_ += 1;
   			delete []listeVinsPreferes_;
   			listeVinsPreferes_ = temp;
   			temp = 0;
		}
    }
    else
    {
   		temp[nbVins_] = vin;
   		nbVins_ += 1;
   		delete []listeVinsPreferes_;
   		listeVinsPreferes_ = temp;
   		temp = 0;
    }
}

	
/***********************************************************************/
/* DESCRIPTION:      delVin			                                   */
/*                   Cette fonction enleve un vin selon son nom de la  */
/*                   liste de vin d'un individu					       */
/* PARAMETRES:       vin (OUT): Nom du vin à enlever constant		   */
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE:													       */
/***********************************************************************/
void Individu::delVin(const string& vin)
{
	bool existCheck = false;
	int taille;
	//S'il n'y a pas de vin dans la liste, nous ne pouvons pas en enlever
    if(nbVins_ > 0)
	{
		for (unsigned int i = 0; i < nbVins_; i++)
		{
			if(vin == listeVinsPreferes_[i])
			{
				existCheck = true;
				break;
			}
		}
		if (existCheck == true)
		{
			if(nbVins_ > 1)
				taille = nbVins_-1;
			else
				taille = nbVins_;
			string* temp = new string[taille];
   			for (unsigned int i = 0, j = 0; i < nbVins_; i++, j++)
   			{
				// Si la case ou nous sommes contient le vin à enlever, on la saute et on recopie tout ce qu'il y a avant et apres cette case
				if (listeVinsPreferes_[i] == vin)
					i++;//passer la case
   				temp[j] = listeVinsPreferes_[i];
   			}
			listeVinsPreferes_ = temp;
			temp = 0;
			nbVins_-=1;
		}
		else
		{
			cout << "Ce vin n'existe pas" << endl;
		}
	}
	else 
	{
		cout << "Cet individu ne possede pas de vin" << endl;
	}
}

	
/***************************************************************************/
/* Nom: operator==                                                         */
/* Description: Surcharge de l'operateur == qui compare le nom et le prenom*/
/*				de deux individus afin de voir s'ils sont la même personne */
/* Parametres: i (OUT) : Individu constant     						       */
/* Valeur de retour: bool                                                  */
/* Remarque:    														   */
/***************************************************************************/
bool Individu::operator==(const Individu& i )
{
    bool reponse = false;
    if(nom_ == i.nom_ && prenom_ == i.prenom_)
   	 reponse = true;
    return reponse;
}

	
/***************************************************************************/
/* Nom: operator=                                                          */
/* Description: Surcharge de l'operateur egal afin que l'adresse d'un      */
/*              individu soit = à celle de l'individu en paramètre         */
/* Parametres: i (OUT) : Individu de type individu constant			       */
/* Valeur de retour: l'adresse mémoire de l'individu                       */
/* Remarque: Agit un peu comme le constructeur par copie   			       */
/*                     													   */
/***************************************************************************/
Individu& Individu::operator=( const Individu& i )
{
    nbVins_ = i.nbVins_;
    nom_ = i.nom_;
    prenom_ = i.prenom_;
	for(unsigned int j=0; j < nbVins_; j++) 
    listeVinsPreferes_[j] = i.listeVinsPreferes_[j];
    prixEntree = i.prixEntree;
	return *this;
}

	
/***********************************************************************/
/* DESCRIPTION:      getString						                   */
/*                   Cette fonction retourne une phrase contenant	   */
/*					 toutes les informations de l'individus ainsi que  */
/*					 la liste de ses vins préférés					   */
/* PARAMETRES:       Aucun											   */
/* VALEUR DE RETOUR: string                                            */
/* REMARQUE:         Cette fonction est constante				       */
/***********************************************************************/
string Individu::getString() const
{
	string phrase;
	string liste = "";
	//il faut seulement afficher les vins s'il y a des vins dans la liste de vins preferés de l'individu
    if (nbVins_ > 0)
    {

			//afin de ne pas avoir une virgule à la fin de notre liste, nous ne mettons pas de virgule apres le dernier element
   			 for (unsigned int i = 0; i < nbVins_; i++)
			 {
				 if(i != nbVins_-1)
					liste += listeVinsPreferes_[i] + ", ";
				 else
					liste += listeVinsPreferes_[i];
			 }

	phrase = ("Individu : " + nom_ + " " + prenom_ + " - Prix: " +  to_string(prixEntree) + " CAD - Vins: " + liste + '\n');
    }
    else
   		phrase = ("Individu : " + nom_ + " " + prenom_ + " - Prix: " +  to_string(prixEntree) + " CAD\n");
    return phrase;
}
