#include "Ordinateur.h"



//Il faut utiliser un constructeur par parametre et une liste d'initialisation
//pour utiliser une variable membre de type reference
/****************************************************************************
 * Fonction:	Ordinateur::Ordinateur
 * Description: Constructeur par defaut
 * ParamËtres:	(Ecran) moniteur : Une reference a un objet Ecran
 * Retour:		aucun
 ****************************************************************************/
Ordinateur::Ordinateur(Ecran& moniteur):ecranOrdi_(moniteur), prix_ (0.0),ecran_(0)
{
	
}

/****************************************************************************
 * Fonction:	Ordinateur::~Ordinateur
 * Description: Destructeur par defaut
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Ordinateur::~Ordinateur()
{
}
/****************************************************************************
 * Fonction:	Ordinateur::choisirProcesseur
 * Description: permet de modifier l'objet membre processeur_
 * ParamËtres:	(Processeur) unProcesseur : référence constante
 * Retour:		aucun
 ****************************************************************************/
void Ordinateur::choisirProcesseur(const Processeur& unProcesseur)
{
	processeur_ = unProcesseur;
}
/****************************************************************************
 * Fonction:	Ordinateur::choisirHDD
 * Description: permet de modifier l'objet membre disqueDur_
 * ParamËtres:	(HDD) disque : référence constante
 * Retour:		aucun
 ****************************************************************************/
void Ordinateur::choisirHDD(const HDD& disque)
{
	disqueDur_ = disque;

}
/****************************************************************************
 * Fonction:	Ordinateur::choisirRAM
 * Description: permet de modifier l'objet membre memoireVive_
 * ParamËtres:	(RAM) disque : référence constante
 * Retour:		aucun
 ****************************************************************************/
void Ordinateur::choisirRAM(const RAM& memoire)
{
	memoireVive_ = memoire;
}


/****************************************************************************
 * Fonction:	Ordinateur::choisirEcranParReference
 * Description: permet de modifier l'objet membre ecranOrdi_
 * ParamËtres:	(Ecran) disque : référence 
 * Retour:		aucun
 ****************************************************************************/
void Ordinateur::choisirEcranParReference(Ecran& moniteur)
{
	ecranOrdi_ = moniteur;
}
/****************************************************************************
 * Fonction:	Ordinateur::choisirEcran
 * Description: permet de modifier l'objet membre ecran_
 * ParamËtres:	(Ecran) disque : référence 
 * Retour:		aucun
 ****************************************************************************/
void Ordinateur::choisirEcranParPointeur(Ecran& moniteur)
{
	ecran_ = &moniteur;
}
/****************************************************************************
 * Fonction:	Ordinateur::choisirEcran
 * Description: permet de modifier l'objet membre ecran_
 * ParamËtres:	(Ecran) disque : pointeur 
 * Retour:		aucun
 ****************************************************************************/
void Ordinateur::choisirEcranParPointeur(Ecran* moniteur)
{
	ecran_ = moniteur;
}
/****************************************************************************
 * Fonction:	Ordinateur::obtenirPrix
 * Description: permet d'obtenir la variable membre prix_
 * ParamËtres:	aucun 
 * Retour:		aucun
 ****************************************************************************/
double Ordinateur::obtenirPrix() const
{
	return prix_;
}



/****************************************************************************
 * Fonction:	Ordinateur::afficherSpecOrdi
 * Description: fonction d'affichage
 * ParamËtres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Ordinateur::afficherSpecOrdi() const
{
	ecranOrdi_.afficherSpecEcran(); //si on veux utiliser agregation par reference
	ecran_->afficherSpecEcran(); //si on veux utiliser agregation par pointeur
	memoireVive_.afficherSpecRAM();
	disqueDur_.afficherSpecDisque();
	processeur_.afficherSpecProcesseur();

	cout << endl << endl <<" le prix est $" << obtenirPrix() << endl;

}
/****************************************************************************
 * Fonction:	Ordinateur::calculerPrix
 * Description: modifier la valeur de la variables prix_ en appellant obtenirPrix
 *              des variables membres
 * ParamËtres:	(double) fraisAssemblage : par défaut = 100.0
 * Retour:		aucun
 ****************************************************************************/
void Ordinateur::calculerPrix(double fraisAssemblage)
{
	prix_ = 0;
	prix_ += ecranOrdi_.obtenirPrix(); //si on veux utiliser agregation par reference
	prix_ += ecran_->obtenirPrix(); //si on veux utiliser agregation par pointeur
	prix_ += memoireVive_.obtenirPrix();
	prix_ += disqueDur_.obtenirPrix();
	prix_ += processeur_.obtenirPrix();
	prix_ += fraisAssemblage;
}
