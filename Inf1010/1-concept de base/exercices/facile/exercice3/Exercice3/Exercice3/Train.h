#ifndef _TRAIN_H_
#define _TRAIN_H_

class Personne;

class Train
{
public :

		Train();

		~Train();

		void avancer(const double vitesse);
		void arreter();

		void prendreTrain(Personne* personne);
		void entretenir();
		void assignerChauffeur(Personne* chauffeur);
	
		void accelerer();
		void freiner();

		double getVitesse() const;
		int getNbPersonnesABord() const;
		Personne* getChauffeur() const;
		double getEtat() const;

	private :
		double vitesse_;
		int nbPersonnesABord_;
		Personne* chauffeur_;
		double etat_;

};
#endif