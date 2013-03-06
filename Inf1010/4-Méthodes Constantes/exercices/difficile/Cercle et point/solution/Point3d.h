/****************************************************************************
 * Fichier: Point3d.h
 * Auteur: Angelo Rossi
 * Date: 18 janvier 2009
 * Description: Définition de la classe Point3d
 ****************************************************************************/

#ifndef _POINT3D_H_
#define _POINT3D_H_

class Point3d
{
public:
	Point3d(const double &coordx = 0,const  double &coordy = 0,const double &coordz = 0);
	~Point3d();

	double getX() const;
	double getY() const;
	double getZ() const;
	void move(const double &dx,const  double &dy,const  double &dz);
	void reset();

private:
	
	double x_;
	double y_;
	double z_;

};
#endif // _POINT_H_