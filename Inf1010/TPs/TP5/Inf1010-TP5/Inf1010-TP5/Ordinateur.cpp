/************************************************************************************
 * Fichier                  : Ordinateur.cpp
 * Auteur                   : Marie-France et Ordic
 * Description              : Fichier source de la classe Ordinateur
 * Date de creation         : 11 mars 2013
 * Date de modification     : 11 mars 2013
 ************************************************************************************/

#include <iostream>
#include <string>
#include "Ordinateur.h"

using namespace std;

Ordinateur::Ordinateur()
{
	adresse_ = 0;
	nom_ = "";
	adresseReseau_ = new Reseau;
	priority_queue<Message*, vector<Message*>, PrioriteMessages> listMessagesAEnvoyer_;
	vector<Message*> messagesRecu_;
}

Ordinateur::~Ordinateur()
{
	delete adresseReseau_;
}

Ordinateur::Ordinateur(string nom, unsigned adresse, Reseau* adresseReseau)
{
	adresse_ = adresse;
	nom_ = nom;
	adresseReseau_ = adresseReseau;
	priority_queue<Message*, vector<Message*>, PrioriteMessages> listMessagesAEnvoyer_;
	vector<Message*> messagesRecu_;
}

string Ordinateur::getNom() const
{
	return nom_;
}

unsigned Ordinateur::getAdresse() const
{
	return adresse_;
}

Reseau* Ordinateur::getReseau() const
{
	return adresseReseau_;
}

void Ordinateur::ajoutMessage(Message* message)
{
	listMessagesAEnvoyer_.push(message);
}

/*vector<Message*> Ordinateur::envoiMessages()
{
	vector<Message*> vecteurMessageAEnvoyer;
	for(unsigned i = 0; i < listMessagesAEnvoyer_.size() + i; i++)
	{
		vecteurMessageAEnvoyer.push_back(listMessagesAEnvoyer_.top());
		listMessagesAEnvoyer_.pop();
	}
	return vecteurMessageAEnvoyer;
}*/

priority_queue<Message*, vector<Message*>, PrioriteMessages> Ordinateur::envoiMessage()
{
	return listMessagesAEnvoyer_;

}

void Ordinateur::recevoirMessage(Message* message)
{
	messagesRecu_.push_back(message);
}
void Ordinateur::afficherMessage() const
{
	cout << *this << "Affichage des messages recus (" 
		 << messagesRecu_.size() << ") " << endl;
	for (unsigned i = 0; i < messagesRecu_.size(); i++)
	{
		cout << messagesRecu_[i] << endl;
	}
}
	
ostream& operator<<( ostream& ostr, const Ordinateur& ordinateur )
{
	ostr << ordinateur.nom_ << " #" << ordinateur.adresse_ << " ";
	return ostr;
}