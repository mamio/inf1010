/****************************************************************************
 * Fichier: Horloge.h
 * Auteur: Inconnu
 * Date: Inconnu
 * Mise a jour : 13 mai 2011
 * Description: Definition de la classe Horloge
 ****************************************************************************/

#ifndef _HORLOGE_H_
#define _HORLOGE_H_

#include <string>
#include <time.h>
using namespace std;

class Horloge
{
	public:
		Horloge(bool estMilitaire);

		string getZone() const;
		int getHeures()	const;
		int	getMin() const;

		bool estMilitaire() const;
		void afficher()	const;

	protected:
		int	toAmericaine(int h) const;

	private:
		bool estMilitaire_;
};

#endif // _HORLOGE_H_
