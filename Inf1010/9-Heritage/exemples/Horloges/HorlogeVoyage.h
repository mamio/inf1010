/****************************************************************************
 * Fichier: HorlogeVoyage.h
 * Auteur: Inconnu
 * Date: Inconnu
 * Mise a jour : 13 mai 2011
 * Description: Definition de la classe HorlogeVoyage derivee de Horloge
 ****************************************************************************/

#ifndef _HORLOGEVOYAGE_H_
#define _HORLOGEVOYAGE_H_


#include "Horloge.h"

#include <string>
using namespace std;

class HorlogeVoyage : public Horloge
{
	public:
		HorlogeVoyage(bool militaire, string zone, int diff);

		string getZone() const;
		int	getHeures() const;

	private:
		string zone_;
		int	diff_;
};

#endif // _HORLOGEVOYAGE_H_
