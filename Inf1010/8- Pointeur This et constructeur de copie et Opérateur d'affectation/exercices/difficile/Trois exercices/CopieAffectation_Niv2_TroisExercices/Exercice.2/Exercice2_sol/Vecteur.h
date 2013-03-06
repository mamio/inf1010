#ifndef _VECTEUR_H_
#define _VECTEUR_H_

class Vecteur
{
public:
	Vecteur(unsigned int taille);
	Vecteur(const Vecteur& vec);
	~Vecteur();

	unsigned int getTaille() const;
	int& operator[](unsigned int i);

	void afficher() const;

	Vecteur& operator = (const Vecteur& vec);

private:
	int* ptr_;
	unsigned int taille_;
};

#endif // _VECTEUR_H_
