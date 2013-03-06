#ifndef _CERCLE_H_
#define _CERCLE_H_
#include "Point3d.h"
class Cercle
{
	public:
		Cercle();
		Cercle(int rayon, Point3d& centre(int x, int y, int z));

		void move();

		void reset();

		void afficher() const;

	private:
		Point3d* centre_;
		int rayon_;
};
#endif