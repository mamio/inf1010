/****************************************************************************
 * Fichier: Train.h
 * Auteur: William Bussiere
 * Date: 6 juin 2011
 * Description: Definition de la classe Train
 ****************************************************************************/


#ifndef _TRAIN_H_	// Compilation guards
#define _TRAIN_H_

class Personne;


class Train
{
public :
	// Constructeur par defaut
	Train();

	// Destructeur
	~Train();

	// Interface de la classe
	void		avancer(double vitesse);
	void		arreter();
	void		prendreTrain(Personne* personne);
	void		entretenir();
	void		assignerChauffeur(Personne* chauffeur);
	

	// Methodes d'acces
	double		getVitesse()			const;
	int			getNbPersonnesABord()	const;
	Personne*	getChauffeur()			const;
	double		getEtat()				const;



private :
	// Methodes privees
	void		accelerer();
	void		freiner();

	// Attributs
	double		vitesse_; 
	int			nbPersonnesABord_; 
	Personne*	chauffeur_;
	double		etat_;

};

#endif // _TRAIN_H_