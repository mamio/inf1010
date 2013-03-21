/************************************************************************************
 * Fichier              	: etudiant.h
 * Auteur                   : Marie-France et Odric
 * Description          	: Definition de la classe Etudiant
 * Date de creation         : 6 fevrier 2013
 * Date de modification     : 13 fevrier 2013
 ************************************************************************************/
#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <iostream>
#include <string>

#include "individu.h"

using namespace std;

class Etudiant : public Individu
{
public :
    Etudiant();
    Etudiant(string nom, string prenom, string depart, string niveau, double prixEntree);
	Etudiant(const Etudiant& etudiant);
    ~Etudiant();

    string getDepartement() const;
    string getNiveau() const;

    void setDepartement(string depart);
    void setNiveau(string niveau);

    string getString() const;



private :
    string departement_;
    string niveau_;
};
#endif
