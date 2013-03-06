#include "Point3d.h"
#include "Cercle.h"

using namespace std;

Cercle::Cercle()
{
	rayon_ = 0;
	reset();
}

Cercle::Cercle(int rayon, Point3d centre(int x, int y, int z))
{
	rayon_ = rayon;
	centre_ = centre;
}
