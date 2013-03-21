/************************************************************************************
 * Fichier                  : Message.cpp
 * Auteur                   : Marie-France et Ordic
 * Description              : Fichier source de la classe Message
 * Date de creation         : 11 mars 2013
 * Date de modification     : 11 mars 2013
 ************************************************************************************/

#include "Message.h"

Message::Message()
{
	nomExpediteur_ = "";
	nomDestinataire_ = "";
	priorite_ = 1;
	matrice_ = new Matrice<float>;
}

Message::Message(string nomExpediteur, string nomDestinataire, int priorite)
{
	nomExpediteur_ = nomExpediteur;
	nomDestinataire_ = nomDestinataire;

	if(priorite < 1 || priorite > 3)
	{
		cout << "Priorite invalide" << endl;
	}
	else
	{
		priorite_ = priorite;
	}
	matrice_ = new Matrice<float>;
}

Message::~Message()
{
	delete matrice_;
}

string Message::getExpediteur() const
{
	return nomExpediteur_;
}

string Message::getDestinataire() const
{
	return nomDestinataire_;
}

int Message::getPriorite() const
{
	return priorite_;
}

void Message::setExpediteur(string nomExpediteur)
{
	nomExpediteur_ = nomExpediteur;
}

std::ostream& operator<<( std::ostream& ostr, const Message& m )
{
	ostr << "Message de priorite " << m.priorite_ << " recu de " << m.nomExpediteur_ << " : " << endl << m.matrice_ << endl;
	return ostr;
}


