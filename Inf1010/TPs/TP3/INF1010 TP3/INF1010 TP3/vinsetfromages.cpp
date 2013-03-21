/************************************************************************************
 * Fichier                  : vinsetfromages.cpp
 * Auteur                   : 
 * Description              : Implementation de la classe VinsEtFromages
 * Date de creation         : 
 * Date de modification     : 
 ************************************************************************************/

#include "vinsetfromages.h"

#include "individu.h"
#include "etudiant.h"
#include "professeur.h"
#include "entreprise.h"
#include <iostream>
#include <string>
	
/***************************************************************************/
/* Nom: Constructeur par defaut                                            */
/* Description: Constructeur appele lorsqu'aucun parametre n'est entre     */
/* Parametres: Aucun    	    									       */
/* Valeur de retour: Aucune                                                */
/* Remarque: Ce constructeur initialise un vins et fromages comme		   */
/*			 un objet possedant une liste d'etudiant, de professeur et	   */
/*			 d'entreprise vide et ayant les entiers du nombre de ces	   */
/*			 derniers évidemment nul, ayant aucune						   */
/***************************************************************************/
VinsEtFromages::VinsEtFromages()
{
	listeEntreprises_.resize(0);
	listeProfesseurs_.resize(0);
	listeEtudiants_.resize(0);
	nbEntreprises_ = 0;
	nbProfesseurs_ = 0;
	nbEtudiants_ = 0;
}
	
/***********************************************************************/
/* DESCRIPTION:      Destructeur par defaut                            */
/*                   Cette fonction detruit un vins et fromages cree   */
/* PARAMETRES:       Aucun										       */
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE:         Cette fonction n'est jamais appelee		       */
/***********************************************************************/
VinsEtFromages::~VinsEtFromages()
{

}
	
/***********************************************************************/
/* DESCRIPTION:      addEtudiant								       */
/*                   Cette fonction ajoute un etudiant à la liste	   */
/*                   d'etudiant d'un vins et fromages en utilisant son */
/*					 constructeur par copie	si celui-ci n'existe pas   */
/*					 deja dans la liste								   */
/* PARAMETRES:       etudiant (OUT): L'adresse mémoire d'un etudiant   */
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE:													       */
/***********************************************************************/

void VinsEtFromages::addEtudiant(const Etudiant& etudiant)
{
	bool existCheck = false;
	if (nbEtudiants_>0)
	{
		for(unsigned int i = 0; i < listeEtudiants_.size();i++)
		{
			if (etudiant.getNom() == listeEtudiants_[i].getNom() && etudiant.getPrenom() == listeEtudiants_[i].getPrenom())
			{
				cout << "L'etudiant existe deja" << endl;
				existCheck = true;
			}
		}
		if (existCheck == false)
		{
			listeEtudiants_.push_back(etudiant);
			nbEtudiants_++;
		}
	}
	else
	{
		listeEtudiants_.push_back(etudiant);
		nbEtudiants_++;
	}
}
	
/***********************************************************************/
/* DESCRIPTION:      addProfesseur								       */
/*                   Cette fonction ajoute un professeur à la liste	   */
/*                   de professeur d'un vins et fromages en utilisant  */
/*					 son constructeur par copie	si celui-ci n'existe   */
/*					 pas deja dans la liste							   */
/* PARAMETRES:       professeur (OUT): L'adresse mémoire d'un		   */
/*					 professeur										   */
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE:													       */
/***********************************************************************/
void VinsEtFromages::addProfesseur(const Professeur& professeur)
{
	bool existCheck = false;
	if(nbProfesseurs_ > 0)
	{
		for(unsigned int i = 0; i < listeProfesseurs_.size();i++)
		{
			if (professeur.getNom() == listeProfesseurs_[i].getNom() && professeur.getPrenom() == listeProfesseurs_[i].getPrenom())
			{
				cout << "Le professeur existe deja" << endl;
				existCheck = true;
			}
		}
		if (existCheck == false)
		{
			listeProfesseurs_.push_back(professeur);
			nbProfesseurs_++;
		}
	}
	else
	{
		listeProfesseurs_.push_back(professeur);
		nbProfesseurs_++;
	}
}
	
/***********************************************************************/
/* DESCRIPTION:      addEntreprise								       */
/*                   Cette fonction ajoute une entreprise à la liste   */
/*                   d'entreprise d'un vins et fromages en utilisant   */
/*					 son constructeur par copie	si celui-ci n'existe   */
/*					 pas deja dans la liste							   */
/* PARAMETRES:       entreprise (OUT): L'adresse mémoire d'une		   */
/*					 entreprise										   */
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE:													       */
/***********************************************************************/
void VinsEtFromages::addEntreprise(const Entreprise& entreprise)
{
	bool existCheck = false;
	if(nbEntreprises_>0)
	{
		for(unsigned int i = 0; i < listeEntreprises_.size();i++)
		{
			if (entreprise.getNom() == listeEntreprises_[i].getNom() && entreprise.getPrenom() == listeEntreprises_[i].getPrenom()){
				cout << "L'entreprise existe deja" << endl;
				existCheck = true;
			}
		}
			if (existCheck == false)
			{
				listeEntreprises_.push_back(entreprise);
				nbEntreprises_++;
			}
	}
	else
	{
		listeEntreprises_.push_back(entreprise);
		nbEntreprises_++;
	}
}

/***********************************************************************/
/* DESCRIPTION:      delEtudiant								       */
/*                   Cette fonction enleve un etudiant à la liste	   */
/*                   d'etudiant d'un vins et fromages en utilisant son */
/*					 emplacement en vérifiant bien évidemment s'il y a */
/*					 des etudiants dans la liste deja dans la liste	   */
/* PARAMETRES:       i (OUT): entier correspondant a l'emplacement de  */
/*							  l'étudiant dans la liste				   */
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE:													       */
/***********************************************************************/
void VinsEtFromages::delEtudiant(const unsigned int i)
{
	if (i < 1 || i > nbEtudiants_)
		cout << "l'emplacement entre est invalide et ne comprend aucun etudiant" << endl;
	else
	{
		if (nbEtudiants_ > 0)
		{
			if (i > 1)
				listeEtudiants_.erase(listeEtudiants_.begin()+i-1);
			else 
			{
				Etudiant temp(listeEtudiants_[i]);
				listeEtudiants_[i-1].setDepartement(temp.getDepartement());
				listeEtudiants_[i-1].setNiveau(temp.getNiveau());
				listeEtudiants_[i-1].setNbVins(0);
				listeEtudiants_[i-1].setNom(temp.getNom());
				listeEtudiants_[i-1].setPrenom(temp.getPrenom());
				for (unsigned int j = 0; j < temp.getnbVins();j++)
					listeEtudiants_[i-1].addVin(temp.getVin(j));
				listeEtudiants_.erase(listeEtudiants_.begin()+i);
			}
			nbEtudiants_--;
		}
		else
		{
			cout << "La liste est vide, vous ne pouvez pas enlever d'etudiant. Veuillez ajouter des etudiants d'abord" << endl;
		}
	}
}

/***********************************************************************/
/* DESCRIPTION:      delProfesseur								       */
/*                   Cette fonction enleve un professeur à la liste	   */
/*                   de professeur d'un vins et fromages en utilisant  */
/*					 son emplacement en vérifiant bien évidemment s'il */
/*					 y a des professeurs dans la liste deja dans la	   */
/*					 liste											   */
/* PARAMETRES:       i (OUT): entier correspondant a l'emplacement du  */
/*							  professeur dans la liste				   */
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE:													       */
/***********************************************************************/
void VinsEtFromages::delProfesseur(const unsigned int i)
{
	if (i < 1 || i > nbProfesseurs_)
		cout << "l'emplacement entre est invalide et ne comprend aucun professeur" << endl;
	else
	{
		if(nbProfesseurs_>0)
		{
			if (i > 1)
				listeProfesseurs_.erase(listeProfesseurs_.begin()+i-1);
			else 
			{
				Professeur temp(listeProfesseurs_[i]);
				listeProfesseurs_[i-1].setBureau(temp.getBureau());
				listeProfesseurs_[i-1].setDepartement(temp.getDepartement());
				listeProfesseurs_[i-1].setNbVins(0);
				listeProfesseurs_[i-1].setNom(temp.getNom());
				listeProfesseurs_[i-1].setPrenom(temp.getPrenom());
				for (unsigned int j = 0; j < temp.getnbVins();j++)
					listeProfesseurs_[i-1].addVin(temp.getVin(j));
				listeProfesseurs_.erase(listeProfesseurs_.begin()+i);
			}
			nbProfesseurs_--;
		}
		else
		{
			cout << "La liste est vide, vous ne pouvez pas enlever de professeurs. Veuillez ajouter des professeurs d'abord" << endl;
		}
	}
}
	
/***********************************************************************/
/* DESCRIPTION:      delEntreprise								       */
/*                   Cette fonction enleve une entreprise à la liste   */
/*                   d'entreprise d'un vins et fromages en utilisant   */
/*					 son emplacement en vérifiant bien évidemment s'il */
/*					 y a des entreprises dans la liste deja dans la    */
/*					liste											   */
/* PARAMETRES:       i (OUT): entier correspondant a l'emplacement de  */
/*							  l'entreprise dans la liste			   */
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE:													       */
/***********************************************************************/
void VinsEtFromages::delEntreprise(const unsigned int i)
{
	if (i < 1 || i > nbEntreprises_)
		cout << "l'emplacement entre est invalide et ne comprend aucune entreprise" << endl;
	else
	{
		if(nbEntreprises_ > 0)
		{
			if (i > 1)
				listeEntreprises_.erase(listeEntreprises_.begin()+i-1);
			//Comme il était impossible d'effacer la première case avec cette methode, nous avons
			//inverser la premiere et la deuxieme case pour finalement effacer la deuxieme ce qui
			//donne le meme resultat
			else 
			{
				Entreprise temp(listeEntreprises_[i]);
				listeEntreprises_[i-1].setStagiairesCherches(temp.getStagiaires());
				listeEntreprises_[i-1].setNomEntreprise(temp.getNomEntreprise());
				listeEntreprises_[i-1].setEmplois(temp.getEmploisProposes());
				listeEntreprises_[i-1].setNbVins(0);
				listeEntreprises_[i-1].setNom(temp.getNom());
				listeEntreprises_[i-1].setPrenom(temp.getPrenom());
				for (unsigned int j = 0; j < temp.getnbVins();j++)
					listeEntreprises_[i-1].addVin(temp.getVin(j));

				listeEntreprises_.erase(listeEntreprises_.begin()+i);
			}
			nbEntreprises_--;
		}
		else
		{
			cout << "La liste est vide, vous ne pouvez pas enlever d'entreprise. Veuillez ajouter des entreprises d'abord" << endl;
		}
	}
}
	
/***********************************************************************/
/* DESCRIPTION:      afficherPresent()                                 */
/*                   Cette fonction parcourra les vecteurs			   */
/*					 listeEntreprises, listeProfesseurs puis		   */
/*					 listeEtudiants pour appeler la méthode getString()*/
/*					 de chacun des objets et l’afficher à l’écran      */
/* PARAMETRES:       Aucun											   */
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE:														   */
/***********************************************************************/
void VinsEtFromages::afficherPresents() const
{
	if(nbEtudiants_ == 0 && nbProfesseurs_ == 0 && nbEntreprises_ == 0)
		cout << "Ce vins et fromages est vide, veuillez d'abord ajouter des invites" << endl;
	else
	{	
		cout << "Liste des presents : \n# Entreprises presentes : " << endl;
		for (unsigned int i = 0; i < listeEntreprises_.size(); i++)
			cout << "# - " << listeEntreprises_[i].getString() << endl; 
		cout << "# Professeurs presents : " << endl;
		for (unsigned int i = 0; i < listeProfesseurs_.size(); i++)
			cout << "# - " << listeProfesseurs_[i].getString() << endl;
		cout << "# Etudiants presents : " << endl;
		for (unsigned int i = 0; i < listeEtudiants_.size(); i++)
			cout << "# - " << listeEtudiants_[i].getString() << endl;
	}
}

/***********************************************************************/
/* DESCRIPTION:      getListeIndividus()                               */
/*                   Cette fonction retournera un vecteur d’objets	   */
/*					 Individu créé localement, qui contiendra des      */
/*					 copies des objets Entreprise, Professeur et	   */
/*					 Etudiant contenus dans les autres vecteurs.	   */
/* PARAMETRES:       Aucun											   */
/* VALEUR DE RETOUR: Vecteur d'individus                               */
/* REMARQUE:														   */
/***********************************************************************/
vector<Individu> VinsEtFromages::getListeIndividus() const
{
	vector<Individu> listeIndividus;
	for(unsigned int i = 0; i < nbEntreprises_; i++)
	listeIndividus.push_back(listeEntreprises_[i]);
	for(unsigned int i = 0; i < nbProfesseurs_; i++)
	listeIndividus.push_back(listeProfesseurs_[i]);
	for(unsigned int i = 0; i < nbEtudiants_; i++)
	listeIndividus.push_back(listeEtudiants_[i]);

	return listeIndividus;
}

/***********************************************************************/
/* DESCRIPTION:      afficherIndividus()                               */
/*                   Cette fonction ne séparera pas les classes		   */
/*					 dérivées d’Individu dans son affichage, qui	   */
/*					 appelera la méthode getListeIndividus() pour	   */
/*					 ensuite parcourir le vecteur retourné en appelant */
/*					 la méthode getString() de chacun des objets.	   */
/* PARAMETRES:       Aucun											   */
/* VALEUR DE RETOUR: Aucune                                            */
/* REMARQUE:														   */
/***********************************************************************/
void VinsEtFromages::afficherIndividus() const
{
	if(nbEtudiants_ == 0 && nbProfesseurs_ == 0 && nbEntreprises_ == 0)
		cout << "Ce vins et fromages est vide, veuillez d'abord ajouter des invites" << endl;
	else
	{	
		cout << "Individus presents : " << endl;
		for (unsigned int i = 0; i < (nbEntreprises_+nbProfesseurs_+nbEtudiants_); i++)
		{
			Individu individus = this->getListeIndividus()[i];
			cout << "# - ";
			cout << individus.getString() << endl;
		}
	}
}