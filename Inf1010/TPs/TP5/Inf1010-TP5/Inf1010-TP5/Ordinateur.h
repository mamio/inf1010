/************************************************************************************
 * Fichier                  : Ordinateur.h
 * Auteur                   : Marie-France et Ordic
 * Description              : Fichier d'en-tete de la classe Ordinateur
 * Date de creation         : 11 mars 2013
 * Date de modification     : 11 mars 2013
 ************************************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include "Message.h"
#include "Reseau.h"
#include "PrioriteMessage.h"

#ifndef ORDINATEUR_H
#define ORDINATEUR_H

class Ordinateur
{
public:
	Ordinateur();
	~Ordinateur();
	Ordinateur(string nom, unsigned adresse_, Reseau* adresseReseau);
	string getNom() const;
	unsigned getAdresse() const;
	Reseau* getReseau() const;
	void ajoutMessage(Message* message);
	priority_queue<Message*, vector<Message*>, PrioriteMessages> envoiMessage();
	//vector<Message*> envoiMessages();
	void recevoirMessage(Message* message);
	void afficherMessage() const;
	
	friend std::ostream& operator<<( std::ostream& ostr, const Ordinateur& ordinateur );

private:
	unsigned adresse_;
	string nom_;
	Reseau* adresseReseau_;
	PrioriteMessages prioriteMessages_;
	priority_queue<Message*, vector<Message*>, PrioriteMessages> listMessagesAEnvoyer_;
	vector<Message*> messagesRecu_;
};
#endif