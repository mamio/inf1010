/************************************************************************************
 * Fichier                  : etudiant.cpp
 * Auteur                   : Raphaël Beamonte
 * Description              : Implementation de la classe Etudiant
 * Date de creation         : Janvier 2013
 * Date de modification     : 20 fevrier 2013
 ************************************************************************************/

#include "etudiant.h"
#include <iostream>
#include <sstream>

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
Etudiant::Etudiant() : Individu(), departement_(""), niveau_("") {
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
Etudiant::Etudiant(string nom, string prenom, string departement,
					string niveau): Individu(nom, prenom),
					departement_(departement), niveau_(niveau) {
	prixEntree = 14.5;
}


/***********************************************************************/
/* DESCRIPTION:      Constructeur par copie                            */
/*                   Cette fonction initialise les valeurs d'un	       */
/*                   etudiant en copiant les informations d'un autre.  */
/* PARAMETRES:       etudiant (OUT): Adresse de l'etudiant Ã  copier    */
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
Etudiant::~Etudiant() {

}

/**
 * METHODES GET
 */
string Etudiant::getDepartement() const {
	return departement_;
}

string Etudiant::getNiveau() const {
	return niveau_;
}

Entreprise* Etudiant::getEntreprisePreferees(int pos) const
{
	for (int i = 0; i < nbEntreprisePreferees_; i++)
		if (i == pos)
			return listeEntreprisesPreferees_[i];
	
}

/**
 * METHODES SET
 */
void Etudiant::setDepartement(string departement) {
	departement_ = departement;
}

void Etudiant::setNiveau(string niveau) {
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
string Etudiant::getString() const {
	stringstream afficher;
	
	afficher << "Etudiant: ";
	afficher << getPrenom() << " " << getNom();
	afficher << " (" << getDepartement() << ", ";
	afficher << getNiveau() << ")";
	afficher << " - Prix: " << calculerPrixEntree() << " CAD";

	if (getNbVinsPreferes() > 0) {
		afficher << " - Vins: ";

		unsigned int i;
		for (i = 0; i < getNbVinsPreferes(); i++) {
			if (i > 0)
				afficher << ", ";
			afficher << getVinPrefere(i);
		}
	}

	return afficher.str();
}


/***********************************************************************/
/* DESCRIPTION:      calculerPrixEntree()			                   */
/*                   Cette fonction retourne le prix d’entrée des	   */
/*					 étudiants correspondant au prix d’entrée par	   */
/*					 défaut additionné d’un montant dépendant du	   */
/*					 niveau de l’étudiant.							   */
/* PARAMETRES:       Aucun											   */
/* VALEUR DE RETOUR: double                                            */
/* REMARQUE:         Cette fonction est constante, virtuelle et est une*/
/*					 modification de la meme fonction au niveau de la  */
/*					 classe individu							       */
/***********************************************************************/
double Etudiant::calculerPrixEntree() const
{
	int niv;
	if (niveau_ == "1er cycle")
		niv = 1;
	if (niveau_ == "2eme cycle")
		niv = 2;
	if (niveau_ == "3eme cycle")
		niv = 3;

	return prixEntree+(prixEntree*niv);
}


int Etudiant::nbEntreprisePreferees() const
{
	return nbEntreprisePreferees_;
}

void Etudiant::addEntreprisePreferee(Entreprise* entreprise)
{
		bool exists = false;
	for (unsigned int i=0; i<nbEntreprisePreferees_; i++) {
		if (listeEntreprisesPreferees_[i] == entreprise) {
			exists = true;
			break;
		}
	}
	if (exists) {
		cerr << "Lentreprise suivante existe deje : " << entreprise->getString() << endl;
	} else {
		// On agrandit le tableau
	Entreprise** temp = new Entreprise*[nbEntreprisePreferees_+1];
	// On copie le contenu de notre ancien tableau dedans
	for (int i = 0; i < nbEntreprisePreferees_; i++) 
	{
		*temp[i] = *listeEntreprisesPreferees_[i];
		temp[i] = listeEntreprisesPreferees_[i];
		
	}
	// On ajoute notre nouveau vin e la fin
	*temp[nbEntreprisePreferees_] = *entreprise;
	// On incremente le nombre de vins que le tableau contient
	nbEntreprisePreferees_++;
	// On libere l'espace memoire occupe par l'ancien tableau
	if (listeEntreprisesPreferees_)
		delete [] *listeEntreprisesPreferees_;
		delete [] listeEntreprisesPreferees_;
	// On deplace les pointeurs
	listeEntreprisesPreferees_ = temp;
	temp = 0;
	}
}