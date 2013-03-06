/****************************************************************************
 * Fichier: Ordinateur.h
 * Auteur: Ouajdi Felfoul
 * Date: 12 Janvier 2012
 * Description: Définition de la classe Ordinateur
 ****************************************************************************/

#ifndef ORDINATEUR_H
#define ORDINATEUR_H


#include"Ecran.h"
#include"Processeur.h"
#include"HDD.h"
#include"RAM.h"


class Ordinateur
{
public:
	
	Ordinateur(Ecran& moniteur);
	~Ordinateur(void);
	
	void choisirProcesseur(const Processeur& unProcesseur);
	void choisirHDD(const HDD& disque);
	void choisirRAM(const RAM& memoire);
	void choisirEcranParReference(Ecran& moniteur);
	
	void choisirEcranParPointeur(Ecran& moniteur); //Fonction surchargée
	void choisirEcranParPointeur(Ecran* moniteur);

	void afficherSpecOrdi()const; 
	double obtenirPrix() const; 

	void calculerPrix(double fraisAssemblage = 100.0);

private:
	 Ecran* ecran_; // relation d'agregation par pointeur
	 Ecran& ecranOrdi_; // relation d'agregation par reference
	 Processeur processeur_; // relation de composition
	 HDD disqueDur_; // relation de composition
	 RAM memoireVive_; // relation de composition

	 double prix_;
};

#endif //ORDINATEUR_H

