#ifndef _VIDEOTHEQUE_H_
#define _VIDEOTHEQUE_H_

#include<iostream>
#include<string>

#include"Date.h"
#include"Film.h"
#include"Coffret.h"

using namespace std;

class Videotheque
{
public:
    Videotheque();
    ~Videotheque();
    
	unsigned int getNbCoffret() const;

    void ajouterCoffret(Coffret& c);

    void AfficherInfo() const;

private:
	Coffret* coffret_;
    unsigned int nbCoffret_;
    unsigned int Capacite_;
};

#endif