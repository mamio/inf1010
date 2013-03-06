#include <vector>
#include "Point.h"

using namespace std; 

class Polygone
{
public:
	Polygone();
	~Polygone();
	void ajouterPoint(double x,double y, double z);
	void afficher() const;
private:
	vector<Point3d*> points_;
};

