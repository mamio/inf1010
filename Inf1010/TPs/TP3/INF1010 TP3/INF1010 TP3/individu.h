/************************************************************************************
 * Fichier              	: individu.h
 * Auteur               	: Marie-France et Odric
 * Description          	: Definition de la classe Individu
 * Date de creation         : 5 fevrier 2013
 * Date de modification     : 13 fevrier 2013
 ************************************************************************************/
#ifndef INDIVIDU_H
#define INDIVIDU_H

#include <iostream>
#include <string>

using namespace std;

class Individu
{

protected:
    double prixEntree;

public:
    Individu();
    Individu(string nom, string prenom, double prixEntree);

    Individu(const Individu& individu);

    ~Individu();

    unsigned int getnbVins() const;
    string getNom() const;
    string getPrenom() const;
    double getPrix() const;
    string getVin(const unsigned int vin) const;

    void setNbVins(unsigned int nbVins);
    void setNom(string nom);
    void setPrenom(string prenom);

    void addVin(const string& vin);
    void delVin(const string& vin);

     bool operator==(const Individu& i );
     Individu& operator=( const Individu& i );

     string getString() const;

private:
    unsigned int nbVins_;
    string nom_;
    string prenom_;
    string* listeVinsPreferes_;
};
#endif
