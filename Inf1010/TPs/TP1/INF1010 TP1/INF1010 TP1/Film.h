/************************************************************************************
*	Fichier					: Film.h
*	Auteur					: 
*	Description				: Definition de la classe Film
*	Date de cr»ation		: 10 Janvier 2013
*	Date de modification	: 
************************************************************************************/


#ifndef FILM_H
#define FILM_H

#include<string>
#include<iostream>

#include"Date.h"

using namespace std;

class Film
{
public:
   	 Film();
   	 Film(unsigned int id, string titre, string description, double duree, 
		 unsigned int j, unsigned int m , unsigned int a);
   	 ~Film();

   	 unsigned int getId() const;
   	 string getTitre() const;
   	 string getDescription() const;
   	 double getDuree() const;
   	 Date getDate() const;

   	 void setId(unsigned int id);
   	 void setTitre(string titre);
   	 void setDescription(string description);
   	 void setDuree(double duree);
   	 void setDate(Date& d);

   	 void afficheInfo() const;

private:
   	 unsigned int uniqueId_;
   	 string titre_;
   	 string description_;
   	 double duree_;
   	 Date acquisition_;
};

#endif // FILM_H
